#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "lib.h"

int main (){
	FILE *fp;

	fp = fopen("./aula/permissaoEscrita.txt", "w");
	if(fp == NULL){
		printf("ERRO AO ABRIR O ARQUIVO\n");
		return 0;
	}

	// ...

	printf("ARQUIVO ESTA ABERTO\n");
	fclose(fp);

	demoClassPutcGetc();
	
	demoClassPutsGets();

	demoClassPrinfScanf();

	// printf("n-linhas = %d\n\n", contaLinhas("./files/aula.txt"));

	// printf("n-linhas = %d\n\n", copiarArquivo("./files/aula.txt", "./files/copia.txt"));

	// insertLineAuxFile("./files/copia.txt", "TESTE\n", 3);

	// printf("\n%d\n\n", contaLinhas("./files/temperatura.txt"));

	// newFileToUpper("./files/one.txt");

	//printf("\n\nnLinhas no main() = %i", contarLinhas("aula.txt", 50));

	
    return 0;
}