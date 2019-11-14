#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int matA[3][3];
	int matB[3][3];
	int matriz[3][3];
	int i=0,j=0;
	int opcao;
	printf("MATRIZ 1\n\n");
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++){
			matA[i][j]=i+j;
			printf("| %d ",matA[i][j]);
		}
	}
	printf("\n\nMATRIZ 2\n\n");
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++){
			matB[i][j]=i*2;
			printf("| %d ",matB[i][j]);
		}
	}
	printf("\n\n1- soma das matrizes\n2- soma das diagonais de cada matriz\n3- multiplicacao das duas matrizes\n");
	scanf("%d",&opcao);
	switch(opcao){
		case 1:
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					matriz[i][j]=matA[i][j]+matB[i][j];
				}
			}
			system("cls");
			printf("Soma das matrizes\n\n");
			for(i=0;i<3;i++){
				printf("\n\n");
				for(j=0;j<3;j++){
					printf("| %d ",matriz[i][j]);
				}
			}
		break;
		case 2:
			system("cls");
			printf("Soma das diagonais\n\n");
			printf("%d\n",matA[0][0]+matB[0][0]);
			printf("%d\n",matA[1][1]+matB[1][1]);
			printf("%d\n",matA[2][2]+matB[2][2]);
		break;
		case 3:
			system("cls");
			printf("Multiplicacao das matrizes\n\n");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					matriz[i][j]=matA[i][j]*matB[i][j];
				}
			}
			for(i=0;i<3;i++){
				printf("\n\n");
				for(j=0;j<3;j++){
					printf("| %d ",matriz[i][j]);
				}
			}
		break;
	}
	return 0;
}
