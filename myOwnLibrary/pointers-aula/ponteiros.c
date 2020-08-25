#include "ponteiros.h"

#include <stdio.h>
#include <stdlib.h>

void limpa(){
	getchar();
	system("cls|clear");
}

int addTwoNumbers(){
    int num1, num2, sum;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;
    // ptr1 = NULL;
    // ptr2 = NULL;

    printf("Enter any two numbers: ");
    scanf("%d%d", ptr1, ptr2);

    sum = *ptr1 + *ptr2;

    printf("Sum = %d", sum);

    return sum;
}

int addNumbers(int *ptr1, int *ptr2){
    return (*ptr1 + *ptr2);
}

void swap(int *ptr1, int *ptr2){
    int temp;
   	// printf("swap ENDERECO\n a=%i \n b=%i\n", ptr1, ptr2);
     temp = *ptr1;
    *ptr1= *ptr2;
    *ptr2= temp;
}

int teste(int a, int b){
    printf("teste ENDERECO\n a=%i \n b=%i\n", &a, &b);
    return (a + b);
}

//AULA
int ehImpar(int a){
	return a%2;
}


int vetImparPar(int *vet, int tam, char ctrl){
	int i, impares=0;
	for(i=0; i<tam; i++){
		if( ehImpar( *(vet+i) ) ){
			impares++;
		}
	}
	if(ctrl=='I'){
		return impares;
	}else if(ctrl=='P'){
		return tam-impares;
	}else{
		return -1;
	}
}

void parImpar(int *vet, int tam, int *pares, int *impares){
	int i;
	for(i=0; i<tam; i++){
		if( ehImpar( *(vet+i) ) ){
			(*impares)++; // *impares = *impares + 1
		}else{
			(*pares)++;
		}
	}
}

void somaVetores(int * vet1, int * vet2, int tamanho){
    int i;
    // vet1[i] = vet1[i] + vet2[i];
    for(i=0;i<tamanho;i++)
        *(vet1+i) = *(vet1+i) + *(vet2+i);
}

void printArray(int *arr, int size){
    printf("Size of array: %i \n\n", size);

    printf("Array elements: ");
    for (int i = 0; i < size; i++){
        // *(ptr + i) is equivalent to arr[i]
        printf("%d, ", *(arr + i));
    }
    printf("\n");
}

void ordenaArrayV1(int *arr, int size){
	int aux, i, j;
	/* sorting process */
	for(i=1; i<size; i++)
		for(j=0; j<size-i; j++)
			if( *(arr+j) > *(arr+j+1) ){
				aux=arr[j];
				arr[j] = arr[j+1];
				arr[j+1]=aux;
			}
}

void ordenaArrayV2(int *arr, int size){
	int aux, i, j;
	/* sorting process */
	for(i=1; i<size; i++)
		for(j=0; j<size-i; j++)
			if( *(arr+j) > *(arr+j+1) )
				swap( arr+j, arr+j+1 );
}

void ordenaVet(int *vet, int tamanho, int crescente){
	int i, j;

	if(crescente){
		for(i=0; i<tamanho; i++){
			for(j=0; j<tamanho; j++){
				if( *(vet+j) < *(vet+i) ){
					swap(vet+i, vet+j);
				}
			}
		}
	}else{
		for(i=0; i<tamanho; i++){
			for(j=0; j<tamanho; j++){
				if( *(vet+j) > *(vet+i) ){
					swap(vet+i, vet+j);
				}
			}
		}
	}
	printf("\n");
}

int deletaIndiceVet(int *vet, int tamanho, int indice){
	int i;
	if(indice>=tamanho || indice < 0){
		printf("ERRO - nao foi possivel deletar elements\n");
		return tamanho;
	}
	for(i=indice; i<tamanho-1; i++){
		swap(vet+i, vet+i+1);
		//swap(&vet[i], &vet[i+1]);
	}
	return tamanho-1;
}
