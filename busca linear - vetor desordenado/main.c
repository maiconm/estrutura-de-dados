#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vetor[]={90,15,16,3,66,22,75,48,33,1};
	int i;
	int numero;
	int verificador=0;
	printf("|");
	for(i=0;i<10;i++){
		//vetor[i]=i+1;
		printf(" %d |",vetor[i]);
	}
	printf("\n\n");
	printf("Digite um numero");
	scanf("%d", &numero);
	
	for(i=0;i<10;i++){
		if(vetor[i]==numero){
			verificador++;
		}
	}
	if(verificador>0){
		printf("\nEste numero esta no vetor");
	}
	else{
		printf("\nEste numero nao esta no vetor");
	}	
	return 0;
}
