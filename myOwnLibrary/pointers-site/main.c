#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "lib.h"

int main (){
	int *ptr, *ptr2, num, num2, tamanho=5;

	/***********************/
	/* Parte 1 - Ponteiros */
	/***********************/

	ptr = &num;
	num=1;
    printf("VALORES\n num=%i \n ptr=%i\n", num, *ptr);
    printf("ENDERECO\n num=%X \n ptr=%X\n", &num, ptr);

	num=20;
    printf("\n\nVALORES\n num=%i \n ptr=%i\n", num, *ptr);
    printf("ENDERECO\n num=%X \n ptr=%X\n", &num, ptr);

	*ptr = 10;
    printf("\n\nVALORES\n num=%i \n ptr=%i\n", num, *ptr);
    printf("ENDERECO\n num=%X \n ptr=%X\n", &num, ptr);

	ptr = &num2;
	*ptr = 30;
    printf("\n\nVALORES\n num=%i \n ptr=%i\n", num, *ptr);
    printf("ENDERECO\n num=%X \n ptr=%X\n", &num, ptr);

	ptr = &num;
	num=1;
    printf("\n\nVALORES\n num=%i \n ptr=%i\n", num, *ptr);
    printf("ENDERECO\n num=%X \n ptr=%X\n", &num, ptr);

    limpa();

	/*************************************/
	/* Parte 2 - Operacoes com Ponteiros */
	/*************************************/

    num2 = *(&num); //num2 = num
    ptr2 = &(*ptr); //ptr2 = ptr

    if(ptr2 == ptr){
    	printf("Ponteiros apontam para o mesmo endereco\n");
	    printf("ptr=%X \n ptr2=%X\n", ptr, ptr2);
    }else{
    	printf("Ponteiros apontam para enderecos diferentes\n");
	    printf("ptr=%X \n ptr2=%X\n", ptr, ptr2);
    }

    limpa();

	char *ptr_ch=NULL, num_ch='A';
    float *ptr_fl=NULL, num_fl=1.5;
    double *ptr_db=NULL, num_db=4.5;

	ptr_ch = &num_ch;
    ptr_fl = &num_fl;
    ptr_db = &num_db;

    printf("\n\nVALORES\n num_ch=%c \n num_fl=%f\n num_db=%lf\n", num_ch, num_fl, num_db);
    //printf("ENDERECO\n ptr_ch=%i \n ptr_fl=%i\n", ptr_ch, ptr_fl);
    printf("ENDERECO\n ptr_ch=%i \n ptr_fl=%i\n ptr_db=%i\n", ptr_ch, ptr_fl, ptr_db);

    (*ptr_ch)++; (*ptr_fl)++; (*ptr_db)++;

    printf("\n\nVALORES\n num_ch=%c \n num_fl=%f\n num_db=%lf\n", num_ch, num_fl, num_db);
    printf("ENDERECO\n ptr_ch=%i \n ptr_fl=%i\n ptr_db=%i\n", ptr_ch, ptr_fl, ptr_db);

    ptr_ch++; ptr_fl++; ptr_db++;

    printf("\n\nVALORES\n num_ch=%c \n num_fl=%f\n num_db=%lf\n", num_ch, num_fl, num_db);
    printf("ENDERECO\n ptr_ch=%i \n ptr_fl=%i\n ptr_db=%i\n", ptr_ch, ptr_fl, ptr_db);

    limpa();
    
	/*********************************/
	/* Parte 3 - Ponteiros e Funcoes */
	/*********************************/

	num=3; num2=5; 
	int a=3, b=5, c=7;

    printf("\n\nVALORES\n num=%i \n num2=%i\n", num, num2);
    printf("ENDERECO\n num=%i \n num2=%i\n", &num, &num2);
	swap(&num, &num2);


    printf("\n\nVALORES\n num=%i \n num2=%i\n", num, num2);
    printf("ENDERECO\n num=%i \n num2=%i\n", &num, &num2);

    limpa();

    printf("\n\nVALORES ANTES DAS TROCAS\n a=%i \n b=%i \n c=%i\n", a, b, c);


	swap3nums(&a,&b,&c);

	// a=7, b=3, c=5;

    printf("\n\nVALORES DEPOIS DAS TROCAS\n a=%i \n b=%i \n c=%i\n", a, b, c);

    limpa();

	/*********************************/
	/* Parte 4 - Ponteiros e Vetores */
	/*********************************/

	int ptr_array[5]={4,2,0,1,3}, ptr_teste[5]={7,9,5,6,8};

    ptr=ptr_array;

    printf("ptr_array[0]=%i \t", *ptr_array);
    printf("ptr_array[0]+4=%i \t", *ptr_array+4);
    printf("ptr_array[4]=%i \n\n\n\n\n", *(ptr_array+4) );

	somaVetores(ptr_teste, ptr_array, 5);

    printf("---------- PTR_TESTE ----------\n");
    printArray(ptr_teste, 5);
    printf("\n\n\n\n\n");

    printArray(ptr, 5);

    printf("\n\n\n\n\n");

    printf("contaOcorrenciasVetor ptr_teste \n");
    printf("%i\n", contaOcorrenciasVetor(ptr_teste, 5, 11));

    printf("contaOcorrenciasVetor ptr_array \n");
    printf("%i\n", contaOcorrenciasVetor(ptr_array, 5, 11));

	swap(ptr+0, ptr+4);
	swap(ptr+1, ptr+3);
	swap(ptr_array+3, ptr_array);

    printArray(ptr_array, 50);

    limpa();

	int vet_nao_ordenado[5] = {4,2,3,5,1};

    printf("---------- vetor nao ordenado ----------\n");
    printArray(vet_nao_ordenado, 5);

    printf("\n\n\n\n\n");
    ordenaVet(vet_nao_ordenado, 5, 1);

    printf("---------- vetor ordenado crescente ----------\n");

    printArray(vet_nao_ordenado, 5);

    printf("\n\n\n\n\n");
    ordenaVet(vet_nao_ordenado, 5, 0);

    printf("---------- vetor ordenado DEcrescente ----------\n");

    printArray(vet_nao_ordenado, 5);

    printf("\n\n\n\n\n");

    limpa();

    /**************************************************/
    /* Parte 5 - Codigos do video/Exercicios de aula  */
    /**************************************************/
    // int vetorAula[TAM]={4,3,1,5,2, 7,6,8,9,1}, pares, impares;

    // pares = contaPares(vetorAula, TAM, 0);
    // impares = contaPares(vetorAula, TAM, 1);

    // // printf("... qtd pares = %i\n", pares);
    // // printf("... qtd impares = %i\n", impares);

    // // limpa();

    // int vetorAula_2[5]={4,3,1,5,2}, *ptr_impares; 
    // pares=0; impares=0;

    // ptr_impares=&impares;

    // contaParImpar(vetorAula_2, 5, &pares, ptr_impares);
    // // printf("por referencia qtd pares = %i\n", pares);
    // // printf("por referencia qtd impares = %i\n", impares);




    // int cont;

    // printf("\n\n\n##############################\n");

    // cont = contaElemento(vetorAula, TAM, 1);
    // printf("1 encontrado %i vezes\n", cont);

    // cont = contaElemento(vetorAula, TAM, 2);
    // printf("2 encontrado %i vezes\n", cont);

    // cont = contaElemento(vetorAula, TAM, 10);
    // printf("10 encontrado %i vezes\n", cont);


    // printf("##############################\n\n\n");

    // printArray(vetorAula, TAM);


    // int outroVetor[6] = {4, 4, 3, 2, 2, 1};

    // printf("outroVetor\n");
    // printaUnicos(outroVetor, 6);    

    // printf("vetorAula\n");
    // printaUnicos(vetorAula, TAM);    

    // printf("vetorAula_2\n");
    // printaUnicos(vetorAula_2, 5);    




    return 0;
}