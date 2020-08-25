#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "lib.h"

int main (){
	int *vet=NULL, *vetTeste, i, tamanho, vetor_inteiros[11];
	char *str=NULL, *vet_ch=NULL, ch, str_estatico[20];
	int *a, *vetPares, *teste_din;


	vet = (int *) malloc(5*sizeof(int));
	for(i=0; i<5; i++){
		*(vet+i) = 5-i;
	}
	printArray(vet, 5);

	// free(vet);

	printf("tamanho de tamanho = %i\n", sizeof(tamanho));
	printf("tamanho de int = %i\n", sizeof(int));
	printf("tamanho de 1 = %i\n", sizeof(1));
	printf("tamanho de long = %i\n", sizeof(long));
	printf("tamanho de double = %i\n", sizeof(double));
	printf("tamanho de ch = %i\n", sizeof(ch));
	printf("\n\ntamanho de ponteiro vet = %i\n", sizeof(vet));
	printf("tamanho de ponteiro str = %i\n", sizeof(str));
	//printf("tamanho de vetor teste = %i\n", sizeof(teste));
	printf("tamanho de vetor vetor_inteiros = %i\n", sizeof(vetor_inteiros));

	tamanho = 65;
	ch = 'e';

	printArray(vet, 5);

	printf("Diga o tamanho do vetor\n");
	scanf("%i", &tamanho);

	printf("\n\n### vetTeste %x ###\n", vetTeste);
	vetTeste = gerarVetor(tamanho);
	// *(vetTeste+1)=50;
	printf("pares = %i\n", contParImparVetor(vetTeste, tamanho, 0));
	printf("impares = %i\n", contParImparVetor(vetTeste, tamanho, 1));


	printArray(vetTeste, tamanho);
	teste_din = arrayImpares(vetTeste, tamanho);
	tamanho = contParImparVetor(vetTeste, tamanho, 1);
	printArray(teste_din, tamanho);

	free(vetTeste);


	printf("\n\n### vetTeste %x ###\n", vetTeste);
	vetTeste = gerarVetor(tamanho-1);
	*(vetTeste+2)=50;
	printArray(vetTeste, tamanho-1);
	free(vetTeste);


	printf("\n\n### vetTeste %x ###\n", vetTeste);
	vetTeste = gerarVetor(tamanho+1);
	*(vetTeste+3)=50;
	printArray(vetTeste, tamanho+1);
	free(vetTeste);



	if(str==NULL){
		printf("teste de nulo 1\n");
	}

	printf("\n\n\n######################\n");
	printf("# DEMO MALLOC SLIDES #\n");
	printf("######################\n");


	str=leStr();
	printf("\n\ntamanho: %i string: %s\n\n", strlen(str), str);
	// vet_ch=leStr();
	// printf("\n\ntamanho: %i string: %s\n\n", strlen(vet_ch), vet_ch);
	strcpy(str_estatico, "PROGRAMACAO");


	vet_ch=subString(str_estatico, 2, 6);
	printf("\n\nsubString de variavel estatica %s\n\n", vet_ch);
	printf("sizeof_vet_ch = %i sizeof_str_estatico = %i\n", sizeof(vet_ch), sizeof(str_estatico));
	printf("tam_vet_ch = %i tam_str_estatico = %i\n", strlen(vet_ch), strlen(str_estatico));

	free(vet_ch);

	vet_ch=subString(str, 1, 3);
	printf("\n\nsubString de variavel dinamica %s\n\n", vet_ch);
	printf("tam_vet_ch = %i tam_str_estatico = %i\n", sizeof(vet_ch), sizeof(str_estatico));

	free(vet_ch);
	free(str);



	printf("\n\n\n#######################\n");
	printf("# DEMO REALLOC SLIDES #\n");
	printf("#######################\n");

	str = leStr(); 
	printf("\n\ntamanho: %i string: %s\n\n", strlen(str), str);
	str = subStrRealloc(str, 3, 7);
	printf("\n\nsubString de variavel dinamica com REALLOC\n", str);
	printf("tamanho: %i string: %s\n\n", strlen(str), str);

	free(str); 



    return 0;
}
