#include "dynamicAllocation.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**********************/
/* funcoes auxiliares */
/**********************/

int ehImpar(int a){
    return a%2;
}

void swap(int *ptr1, int *ptr2){
    int temp;

    temp = *ptr1;
    *ptr1= *ptr2;
    *ptr2= temp;
}

void swapChar(char *ptr1, char *ptr2){
    int temp;

    temp = *ptr1;
    *ptr1= *ptr2;
    *ptr2= temp;
}

void printArray(int *arr, int size){

    printf("Size of array: %i \n\n", size);

    printf("Array elements: ");
    for (int i = 0; i < size; i++){
        // *(arr + i) is equivalent to arr[i]
        printf("%d, ", *(arr + i));
    }
    printf("\n\n");
}

// modified search Number on array
int searchInArray(int * arr, int size, int num){
    int i;
    for(i=0;i<size;i++){
        if(*(arr+i)==num){
            return i;
        }
    }
    return -1;
}

int contParImparVetor(int * arr, int size, int impar){
    // 1 - impar --- 0 - par
    int i, cont=0;
    for(i=0; i<size; i++){
        if(ehImpar( *(arr+i) ) && impar){ //arr[i] eh impar?
            cont++;
        }else if(!ehImpar( *(arr+i) ) && !impar){
            cont++;
        }
    }
    return cont;
}

/**********************/
/* funcoes com malloc */
/**********************/

int * gerarVetor(int tamanho){
    int *vet, i;

    vet = (int *) malloc(tamanho*sizeof(int));
    for(i=0; i<tamanho; i++){
        *(vet+i) = tamanho-i;
    }
    return vet;
}

char * subString(char *str, int begin, int end){
	int cont=0, i, tamanho = end - begin + 2;
	char *subStr;

	subStr = (char *)malloc(tamanho * sizeof(char));
	if(subStr == NULL){
		printf("ERRO de memoria\n");
		return NULL;
	} 

	for(i = begin; i <= end; i++){
		*(subStr + cont) = *(str+i);
		cont++;
	}
	*(subStr + cont) = '\0';
	return subStr;
}

//exercicio de aula
int * arrayImpares(int * arr, int size){
}

/****************************************/
/* funcao para ler string dinamicamente */
/****************************************/

char * leStr(){
    char * str, ch;
    int i;

    str = (char *) malloc(1 * sizeof(char));
    if(str==NULL){
        printf("Erro na alocacao de memoria");
        return NULL;
    }
    // ch = getchar();
    i=0;
    ch = getchar();
    while( ch != '\n'){
        *(str+i) = ch;
        i++;
        str = realloc(str, (i+1) * sizeof(char));
        if(str==NULL){
            printf("Erro na REalocacao de memoria");
            return NULL;
        }
        ch = getchar();
    }
    *(str+i) = '\0';
    return str;
}


/**********************/
/* funcoes com realloc */
/**********************/

//from slides
char * subStrRealloc(char *str, int inicio, int fim){
   int tam=fim-inicio+2, i, j=0; 

   for(i=inicio; i<=fim; i++){
      swapChar(str+i, str+j); 
      j++; 
   } 

   str = (char *) realloc(str, tam * sizeof(char)); 

   if(str == NULL) 
      return NULL;

   *(str+tam-1) = '\0'; 

   return str;
} 

//exercicio de aula
//insere numero no final do array
int * insertNumberEndDynArray(int * arr, int num, int size){ //insere numero fim do array
}

//exercicio de aula
//remove numero de qualquer posicao do array
int * removeNumberFromArray(int * arr, int size, int num){
}

