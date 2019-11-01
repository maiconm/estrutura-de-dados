#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	char dom[100];
	char seg[100];
	char ter[100];
	char qua[100];
	char qui[100];
	char sex[100];
	char sab[100];
	char nivel='*';
	int numero=0;
	
	printf("Digite a temperatura de domingo: ");
	scanf("%d",&numero);
	for(i=0;i<numero;i++){
		dom[i]=nivel;
	}
	numero=0;
	printf("\nDigite a temperatura de segunda: ");
	scanf("%d",&numero);
	for(i=0;i<numero;i++){
		seg[i]=nivel;
	}
	numero=0;
	printf("\nDigite a temperatura de terca: ");
	scanf("%d",&numero);
	for(i=0;i<numero;i++){
		ter[i]=nivel;
	}
	numero=0;
	printf("\nDigite a temperatura de quarta: ");
	scanf("%d",&numero);
	for(i=0;i<numero;i++){
		qua[i]=nivel;
	}
	numero=0;
	printf("\nDigite a temperatura de quinta: ");
	scanf("%d",&numero);
	for(i=0;i<numero;i++){
		qui[i]=nivel;
	}
	numero=0;
	printf("\nDigite a temperatura de sexta: ");
	scanf("%d",&numero);
	for(i=0;i<numero;i++){
		sex[i]=nivel;
	}
	numero=0;
	printf("\nDigite a temperatura de sabado: ");
	scanf("%d",&numero);
	for(i=0;i<numero;i++){
		sab[i]=nivel;
	}
	
	
	printf("\ndom:");
	for(i=0;i<100;i++){
		if(dom[i]=='*'){
			printf(" %c",dom[i]);
		}
		else{
			break;
		}
	}
	printf("\nseg:");
	for(i=0;i<100;i++){
		if(seg[i]=='*'){
			printf(" %c",seg[i]);
		}
		else{
			break;
		}
	}
	printf("\nter:");
	for(i=0;i<100;i++){
		if(ter[i]=='*'){
			printf(" %c",ter[i]);
		}
		else{
			break;
		}
	}
	printf("\nqua:");
	for(i=0;i<100;i++){
		if(qua[i]=='*'){
			printf(" %c",qua[i]);
		}
		else{
			break;
		}
	}
	printf("\nqui:");
	for(i=0;i<100;i++){
		if(qui[i]=='*'){
			printf(" %c",qui[i]);
		}
		else{
			break;
		}
	}
	printf("\nsex:");
	for(i=0;i<100;i++){
		if(sex[i]=='*'){
			printf(" %c",sex[i]);
		}
		else{
			break;
		}
	}
	printf("\nsab:");
	for(i=0;i<100;i++){
		if(sab[i]=='*'){
			printf(" %c",sab[i]);
		}
		else{
			break;
		}
	}
	return 0;
}
