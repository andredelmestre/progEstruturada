#include <stdio.h>
#include <stdlib.h>

#include "ponteiros.h"

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
   	//printf("swap ENDERECO\n a=%i \n b=%i\n", ptr1, ptr2);
     temp = *ptr1;
    *ptr1= *ptr2;
    *ptr2= temp;
}

void swap3nums(int *ptr1, int *ptr2, int *ptr3){
	swap(ptr1, ptr2);	// a=5, b=3, c=7;
	swap(ptr1, ptr3);	// a=7, b=3, c=5;
}

//AULA
void somaVetores(int * vet1, int * vet2, int tamanho){
    int i;
    // vet1[i] = vet1[i] + vet2[i];
    for(i=0;i<tamanho;i++)
        *(vet1+i) = *(vet1+i) + *(vet2+i);
}

void printArray(int *arr, int size){
    printf("Tamanho do array: %i \n\n", size);

    printf("Array: ");
    for (int i = 0; i < size; i++){
        // *(ptr + i) is equivalent to arr[i]
        printf("%d, ", *(arr + i));
    }
    printf("\n\n");
}

int contaOcorrenciasVetor(int *arr, int tamanho, int n){
	int i, cont=0;
	for(i=0; i<tamanho; i++){
		if(n == *(arr+i)){
			cont++;
		}
	}
	return cont;
}

int verificaNumerosUnicos(int *arr, int tamanho){
	int i;
	for(i=0; i<tamanho; i++){
		if(contaOcorrenciasVetor(arr, tamanho, *(arr+i))>=2){
			return 0;
		}
	}
	return 1;
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
				swap( (arr+j), (arr+j+1) );
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


// funcoes a serem desenvolvidas em aula
int contaPares(int * vet, int tamanho, int opcao){
}

void contaParImpar(int *vet, int tam, int *contI, int *contP){
}

int contaElemento(int * vet, int tam, int el){
}

void printaUnicos(int * vet, int tam){
}

