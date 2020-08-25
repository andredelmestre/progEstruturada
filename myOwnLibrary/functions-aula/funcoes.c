#include <stdio.h>
#include "funcoes.h"



void helloWorld(){
	printf("Hello World!\n");
}

void parImpar(int a){
	if(a%2)
		printf("%i eh impar\n", a);
	else
		printf("%i eh par\n", a);
}

int ehPar(int a){
	return !(a%2);
}

void triangulo(int a, int b, int c){
	if( (a+b>c) && (a+c>b) && (b+c>a)){
		printf("EH TRIANGULO\n");
		// if(a==b && b==c)
		// 	printf("Triangulo eh Equilatero\n");
		// else if(a==b || b==c || a==c)
		// 	printf("Triangulo eh Isoceles\n");
		// else
		// 	printf("Triangulo eh Escaleno\n");
	}else{
		printf("NAO EH TRIANGULO\n");
	}
}

int maior(int a, int b){
	if(a>b)
		return a;
	return b;
}


int le_nota(int bimestre){
	int nota;
	printf("Digite a nota do aluno no %i bimestre\n", bimestre);
	scanf("%i",&nota);
	return nota;
}

float media(int soma, int quantidade){
	if(quantidade!=0)
		return (float) soma/quantidade;
	else
		printf("ERRO: divisao por zero");
	return 0.0;
}
