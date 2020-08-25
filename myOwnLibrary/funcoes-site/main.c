#include <stdio.h>
#include <stdlib.h>

#include "lib.h"


int main (){
	int x=4, y=2, z;
	float res, X, Y=9.0;

    int nova_var;

    printf("printSoma\n");
    printSoma(5,3);
    printSoma(nova_var,7);
    printf("A soma eh = %i\n", nova_var);

    printf("\n\nsoma\n");
    nova_var = soma(5,3);
    nova_var = soma(nova_var,7);
    printf("A soma eh = %i\n", nova_var);


	printf("###################\n");
	printf("###### DEMOS ######\n");
	printf("###################\n");
	printf("# exemplo slide 7 #\n");
	res=soma(2.0, Y);
	printf("A soma eh %f\n", res);


	printf("\n\n\n# exemplo slide 8 #\n");
	printf("Digite dois numeros\n");
	scanf("%f%f", &X, &Y);
	res=soma(X, Y);
	printf("A soma de %f e %f eh %f\n", X, Y, res);


	printf("\n\n\n# exemplo slide 9 #\n");
	//printf("Global i=%i\n", i);

	int i=5;

	printf("Antes da funcao i=%i\n", i);
	printIncrementa(i);
	printf("Depois da funcao i=%i\n", i);



	printf("\n\n\n# exemplo slide 11 #\n");
	leDoisNumsESoma();
	printSoma(2.0, 2.0);
	res=somaFloat(3.5, 0.5);
	printf("A soma eh %f\n", res);



	printf("\n\n\n# exemplo slide 17 #\n");
	x = somaIntervalo(1,5);
	printf("O somatorio dos numeros entre 1 e 5 eh %i\n", x);
	printf("O somatorio dos numeros entre 7 e 9 eh ");
	printf("%i\n", somaIntervalo(7,9));



	printf("\n\n\n# exemplo slide 22 #\n");
	printf("# soma = %i\n", soma(x, y));
	printf("# multiplica = %i\n", multiplica(x, y));
	printf("# potencia = %i\n", potencia(x, y));

    return 0;
}
