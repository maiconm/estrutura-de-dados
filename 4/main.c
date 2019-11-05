#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mat[3][4]={{3,5,2,12},{1,7,9,6},{8,4,0,10}};
	int i=0,j=0;
	int opcao=0;
	int numero=0;
	
	printf("Matriz: ");
	for(i=0;i<3;i++){
		printf("\n\n");
		for(j=0;j<4;j++){
			printf("| %d ",mat[i][j]);
		}
	}
	
	printf("\nOpcoes: ");
	printf("\n1- Busca sequencial dada uma posicao (l,c) especifica e que retorne o elemento na posicao");
	printf("\n2- Busca sequencial pelo elemento especificado e que retorne a posicao do elemento");
	printf("\n3- Insercao de um elemento em uma dada posicao");
	printf("\n4- Remocao dde um elemento especifico");
	printf("\n5- Impressao da matriz");
	printf("\n6- Saida do programa\n");
	
	scanf("%d",&opcao);
	
	switch(opcao){
		case 1:
			system("cls");
			printf("\nMatriz: ");
			for(i=0;i<3;i++){
				printf("\n\n");
				for(j=0;j<4;j++){
					printf("| %d ",mat[i][j]);
				}
			}
			i=0;
			j=0;
			printf("\nDigite a posicao da linha: ");
			scanf("%d",&i);
			printf("\nDigite a posicao da coluna: ");
			scanf("%d",&j);
			printf("\n%d",mat[i][j]);
		break;
		
		case 2:
			system("cls");
			printf("\nMatriz: ");
			for(i=0;i<3;i++){
				printf("\n\n");
				for(j=0;j<4;j++){
					printf("| %d ",mat[i][j]);
				}
			}
			printf("\nDigite um numero da matriz: ");
			scanf("%d",&numero);
			for(i=0;i<3;i++){
				for(j=0;j<4;j++){
					if(mat[i][j]==numero){
						printf("\nCoordenada desta posicao:");
						printf("\nLinha %d",i);
						printf("\nColuna %d",j);
					}
				}
			}
		break;
		
		case 3:
			system("cls");
			printf("\nMatriz: ");
			for(i=0;i<3;i++){
				printf("\n\n");
				for(j=0;j<4;j++){
					printf("| %d ",mat[i][j]);
				}
			}
			printf("\nDigite um numero: ");
			scanf("%d",&numero);
			printf("\nLinha: ");
			scanf("%d",&i);
			printf("\nColuna: ");
			scanf("%d",&j);
			mat[i][j]=numero;
			system("cls");
			printf("\nMatriz: numero %d inserido na linha %d coluna %d",numero,i,j);
			for(i=0;i<3;i++){
				printf("\n\n");
				for(j=0;j<4;j++){
					printf("| %d ",mat[i][j]);
				}
			}
		break;
		
		case 4:
			system("cls");
			printf("\nMatriz: ");
			for(i=0;i<3;i++){
				printf("\n\n");
				for(j=0;j<4;j++){
					printf("| %d ",mat[i][j]);
				}
			}
			printf("\nDigite um numero");
			scanf("%d",&numero);
			for(i=0;i<3;i++){
				for(j=0;j<4;j++){
					if(mat[i][j]==numero){
						mat[i][j]=00;
					}
				}
			}
			system("cls");
			printf("\nMatriz: numero %d foi retirado",numero);
			for(i=0;i<3;i++){
				printf("\n\n");
				for(j=0;j<4;j++){
					printf("| %d ",mat[i][j]);
				}
			}
		break;
		
		case 5:
			system("cls");
			printf("\nMatriz: ");
			for(i=0;i<3;i++){
				printf("\n\n");
				for(j=0;j<4;j++){
					printf("| %d ",mat[i][j]);
				}
			}
		break;
	}
	return 0;
}
