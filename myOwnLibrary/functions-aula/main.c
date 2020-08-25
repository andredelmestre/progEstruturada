#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "lib.h"

int main (){

	int xis=7, cont=3, i, aux;

	helloWorld();

	printf("\n\n### PAR/IMPAR ###\n\n");
	parImpar(3);
	parImpar(4);
	parImpar(5);
	parImpar(6);
	parImpar(xis);
	printf("diga um numero\n");
	scanf("%d", &i);
	parImpar(i);


	printf("\n\n### TRIANGULO ###\n\n");
	triangulo(1,2,3);
	triangulo(3,4,5);

	aux = maior(3,5);
	printf("aux=%i\n", aux);
	printf("maior entre 7 e 2 eh %i\n", maior(7,2));

	printf("\n\n### MAIOR DE TRES NUMS ###\n\n");
	int x=3, y=5, z=7, w=9;
	aux=maior(x,y);
	printf("aux=%i\n", aux);
	aux=maior(aux,z);
	printf("aux=%i\n", aux);
	aux=maior(aux,w);
	printf("aux=%i\n", aux);

	printf("\n\n### MAIOR NUM EM VETOR ###\n\n");
	int vet[10] = {3,6,2,5,7,8,4,2,78,9};
	aux=vet[0];
	for(i=1;i<10;i++){
		printf("rep %i aux = %i\n", i, aux);
		aux=maior(aux,vet[i]);
	}

	
	printf("\n\n### EH PAR? ###\n\n");
	printf("\n\n%i eh impar? %i\n", x, !ehPar(x));
	
	printf("%i eh par? %i\n", x, ehPar(x));





    return 0;
}