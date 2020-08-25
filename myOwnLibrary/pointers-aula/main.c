#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "lib.h"

int main (){

	int vet[5]={4,2,0,1,3}, tamanho=5, i;

    printf("---------- VET ----------\n");
    printArray(vet, tamanho);
    printf("\n\n\n\n\n");

    for(i=0; i<5; i++){
	    x = deletaIndiceVet(vet, tamanho, 2);
	    printf("---------- VET ----------\n");
	    printArray(vet, tamanho);
	}
    return 0;
}