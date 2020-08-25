#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "lib.h"

int main (){
	float carroUsado, carroNovo, taxa, limite;
	int ano=2018;

	printf("\n\n  5 * 3 = %i\n", multiplicaRec(5, 3));

	printf("\n\n  15 / 3 = %i\n\n", divisaoRec(15, 3, 0));

	printf("\n\n  15 / 3 = %i\n\n", divisaoRecV2(15, 3));

	printf("\n\n  -5 * 3 = %i\n", multiplicacaoFull(-5, 3));

	printf("\n\n  5 * -3 = %i\n", multiplicacaoFull(5, -3));

	printf("\n\n  -5 * -3 = %i\n\n", multiplicacaoFull(-5, -3));

	numPrintCres(10);
	
	PrintDigitsHexa(6723);

    return 0;
}

