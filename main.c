#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vetor[19];
	int i=0;
	int numero;
	int verificador=0;
	
	printf("|");
	for(i=0;i<19;i++){
		vetor[i]=i;
		printf(" %d |",vetor[i]);
	}
	printf("\nDigite um numero: ");
	scanf("%d", &numero);
	
	if(numero>vetor[10]){
		for(i=10;i<19;i++){
			if(vetor[i]==numero){
				verificador++;
			}
		}
		for(i=10;i>-1;i--){
			if(vetor[i]==numero){
				verificador++;
			}
		}
	}
	else{
		for(i=10;i>-1;i--){
			if(vetor[i]==numero){
					verificador++;
			}
		}
		for(i=10;i<19;i++){
			if(vetor[i]==numero){
				verificador++;
			}
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
