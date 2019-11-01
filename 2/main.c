#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vetor[20];
	int numero;
	int i;
	int soma=0;
	printf("|");
	for(i=0;i<20;i++){
		vetor[i]=i;
		printf(" %d |",vetor[i]);
	}
	printf("\nDigite um numero: ");
	scanf("%d",&numero);
	printf("\n\n\n|");
	
	for(i=0;i<numero+1;i++){
		soma=soma+vetor[i];
	}
	printf("\n\n%d",soma);
	return 0;
}
