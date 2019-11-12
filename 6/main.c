#include <stdio.h>
#include <stdlib.h>

//programa que imprime o proprio codigo

int main(int argc, char *argv[]) {
	FILE *arquivo;
	int i;
	char caractere;
	int parar=0;
	
	arquivo=fopen(__FILE__,"r");
	for(i=0;parar==0;i++){
		caractere=getc(arquivo);
		putchar(caractere);
		if(caractere==EOF){
			parar++;
		}
	}
	fclose(arquivo);
	return 0;
}
