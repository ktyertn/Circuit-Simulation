#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>
struct kapi{
	char kapi_t;
	int giris;
	char cikis;
	char giris_1;
	char giris_2;
	int sure;
}list[10];
int a=-1,b=-1,c=-1,d=-1,e=-1,f=-1;
char c1,c2;
int sayac=0;
char g1[3],g2[2];
char devre[1000];
char B_Dosya[1000];
int ctrl=1;
FILE *ptDeger;
FILE *ptDevre;
FILE *ptB_Dosya;
char ch[12];
void Baska_Dosya(){
	ptB_Dosya=fopen("baska_dosya.txt","r");
	int i=0,j=0,k=0;
	do{
		B_Dosya[i]=getc(ptB_Dosya);
		if(B_Dosya[i]!=' '&&B_Dosya[i]!='	')i++;
	}while(!feof(ptB_Dosya));
	for(i=0;B_Dosya[i]!='\0';i++){
		printf("%c",B_Dosya[i]);
	}
	for(i=0;B_Dosya[i]!='\0';i++){
		if(B_Dosya[i]=='.'){
			if(B_Dosya[i+1]=='g'){
				for(j=0;j<3;j++){
					for(k=6;B_Dosya[i+k]!='#';k++){
						if(!isalpha(g2[j])){
							g2[j]=B_Dosya[i+k];
							j++;
						}
					}			
				}
			}
			if(B_Dosya[i+1]=='c'){
				c2=B_Dosya[i+6];
			}
			if(B_Dosya[i+5]=='N'){
					if(B_Dosya[i+6]=='O'){
					char *s;
					struct kapi nor;
					nor.kapi_t='O';
					s=&B_Dosya[i+8];
					nor.giris=atoi(s);
					nor.cikis=B_Dosya[i+9];
					nor.giris_1=B_Dosya[i+10];
					nor.giris_2=B_Dosya[i+11];
					s=&B_Dosya[i+12];
					nor.sure=atoi(s);
					printf("\n%c %d %c %c %c %d ",nor.kapi_t,nor.giris,nor.cikis,nor.giris_1,nor.giris_2,nor.sure);	
					}
					if(B_Dosya[i+6]=='A'){
					char *s;
					struct kapi nand;
					nand.kapi_t='A';
					s=&B_Dosya[i+9];
					nand.giris=atoi(s);
					nand.cikis=B_Dosya[i+10];
					nand.giris_1=B_Dosya[i+11];
					nand.giris_2=B_Dosya[i+12];
					s=&B_Dosya[i+13];
					nand.sure=atoi(s);
					printf("\n%c %d %c %c %c %d ",nand.kapi_t,nand.giris,nand.cikis,nand.giris_1,nand.giris_2,nand.sure);	
					}
				}
			if(B_Dosya[i+5]=='X'){
					char *s;
					struct kapi xor;
					xor.kapi_t='X';
					s=&B_Dosya[i+8];
					xor.giris=atoi(s);
					xor.cikis=B_Dosya[i+9];
					xor.giris_1=B_Dosya[i+10];
					xor.giris_2=B_Dosya[i+11];
					s=&B_Dosya[i+12];
					xor.sure=atoi(s);
					printf("\n%c %d %c %c %c %d ",xor.kapi_t,xor.giris,xor.cikis,xor.giris_1,xor.giris_2,xor.sure);	
					}	
			
			
		}
	}
	
	
}
void K_Y(){
	//devre yükler
	int i=0,j=0,k=0;
	ptDevre=fopen("devre.txt","r");
	do{
		devre[i]=getc(ptDevre);
		if(devre[i]!=' '&&devre[i]!='	')i++;
		
	}while(!feof(ptDevre));
	for(i=0;devre[i]!='\0';i++){
		printf("%c",devre[i]);
	}
	for(i=0;devre[i]!='\0';i++){
		if(devre[i]=='.'){
			if(devre[i+1]=='i'){
				Baska_Dosya();
			}
			if(devre[i+1]=='g'){
				for(j=0;j<3;j++){
					for(k=6;devre[i+k]!='#';k++){
						if(!isalpha(g1[j])){
							g1[j]=devre[i+k];
							j++;
						}
					}		
					
				}
			}
			if(devre[i+1]=='c'){
				c1=devre[i+6];
			}
			if(devre[i+1]=='k'){
			
				if(devre[i+5]=='N'){
					if(devre[i+6]=='A'){
					char *s;
					struct kapi nand;
					nand.kapi_t='A';
					s=&devre[i+9];
					nand.giris=atoi(s);
					nand.cikis=devre[i+10];
					nand.giris_1=devre[i+11];
					nand.giris_2=devre[i+12];
					s=&devre[i+13];
					nand.sure=atoi(s);
					printf("\n%c %d %c %c %c %d ",nand.kapi_t,nand.giris,nand.cikis,nand.giris_1,nand.giris_2,nand.sure);	
					}
				if(devre[i+6]=='O'){
					char *s;
					struct kapi nor;
					nor.kapi_t='O';
					s=&devre[i+8];
					nor.giris=atoi(s);
					nor.cikis=devre[i+9];
					nor.giris_1=devre[i+10];
					nor.giris_2=devre[i+11];
					s=&devre[i+12];
					nor.sure=atoi(s);
					printf("\n%c %d %c %c %c %d ",nor.kapi_t,nor.giris,nor.cikis,nor.giris_1,nor.giris_2,nor.sure);
				}
				}	
				if(devre[i+5]=='X'){
					char *s;
					struct kapi xor;
					xor.kapi_t='X';
					s=&devre[i+8];
					xor.giris=atoi(s);
					xor.cikis=devre[i+9];
					xor.giris_1=devre[i+10];
					xor.giris_2=devre[i+11];
					s=&devre[i+12];
					xor.sure=atoi(s);
					printf("\n%c %d %c %c %c %d ",xor.kapi_t,xor.giris,xor.cikis,xor.giris_1,xor.giris_2,xor.sure);
				}
		 	}
		}
	}
}
void K_I(){
	// ilklendirme
	ptDeger=fopen("deger.txt","r");
	int i=0;
	while(i<12){
	ch[i]=getc(ptDeger);
		if(isdigit(ch[i])){
		i++;
		}
		if(isalpha(ch[i])){
		i++;
		}
	}
	for(i=0;i<12;i++) {
		if(ch[i]=='a'){
			a=ch[i+1]-48;
		}			
		if(ch[i]=='b'){
			b=ch[i+1]-48;
		}		
		if(ch[i]=='c'){
			c=ch[i+1]-48;
		}
		if(ch[i]=='d'){
			d=ch[i+1]-48;
		}
		if(ch[i]=='e'){
			e=ch[i+1]-48;
		}
		if(ch[i]=='f'){
			f=(ch[i+1]-48);
		}	
				
		
	}
		
}
void K_H(char n){
	//GÝRÝLEN UCUN DEGERÝ 1 YAPAR
		
		
		if(n=='a'){
			a=1;
		}			
		if(n=='b'){
			b=1;
		}		
		if(n=='c'){
			c=1;
		}
		if(n=='d'){
			d=1;
		}
		if(n=='e'){
			e=1;
		}
		if(n=='f'){
			f=1;
		}			
		
	
	
	}
void K_L(char n){
	//GÝRÝLEN UCUN DEGERÝ 0 OLUR
		if(n=='a'){
			a=0;
		}			
		if(n=='b'){
			b=0;
		}		
		if(n=='c'){
			c=0;
		}
		if(n=='d'){
			d=0;
		}
		if(n=='e'){
			e=0;
		}
		if(n=='f'){
			f=0;
		}			
	
}
void K_S(){
	//devreyi simule eder
}
void K_G(char n){
	//ÝLGÝLÝ UCUN DEGERÝNÝ BASAR
		if(n=='a'){
		printf("a: %d",a);
		}			
		if(n=='b'){
		printf("b: %d",b);
		}		
		if(n=='c'){
		printf("c: %d",c);
		}
		if(n=='d'){
		printf("d: %d",d);
		}
		if(n=='e'){
		printf("e: %d",e);
		}
		if(n=='f'){
		printf("f: %d",f);
		}			
}
void K_G1(){
printf("a: %d\t b: %d\t c: %d\t d:%d\t e:%d\t f:%d\t\n",a,b,c,d,e,f);
}
void K_C(){
	//benzetimden çýkýþ yapar
	ctrl=0;
}
int main() {
	char n;
	K_G1();
	K_I();
	K_G1();
	K_H('a');
	K_L('c');
	K_G1();
	K_G('d');
	printf("\n");
	K_Y();
	
	return 0;
}
