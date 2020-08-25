#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

void helloWorld(){
	printf("Hello World!\n");
}

int soma(int a, int b){
	return a+b;
}

void printSoma(int a, int b){
   int z = a+b;
   printf("A soma eh %i\n", z);
}

void leDoisNumsESoma(){
   float a, b;
   printf("Digite dois numeros\n");
   scanf("%f%f", &a, &b);
   printf("A soma eh %f\n", a+b);
}

int multiplica(int a, int b){
	int i, ac=0;
	for (i = 0; i < b; ++i){
		ac = soma(ac, a);
	}
	return ac;
}

int potencia(int a, int b){
	int i, ac=1;
	if(b > MAX){
		printf("ERRO - b não pode ser maior que 5\n");
		return -1;
	}
	for (i = 0; i < b; ++i){
		ac = multiplica(ac, a);
	}
	return ac;
}

float exemplo(float a, float b){
	float res = a+b;
	if(a>b){
		return res;      //variavel
	}else if(a<b){
		return b-a;      //expressao
	}else{
		return 1.5;      //valor
	}
	printf("Esta msg nunca sera executada");
}

void printIncrementa(int i){
	i=i+1;
	printf("Dentro da funcao i=%i\n", i);
}


float somaFloat(float a, float b){
   return a+b;
}

int somaIntervalo(int inicio, int fim){
	int aux, i, soma=0;
	if(inicio > fim){
		aux=inicio;
		inicio=fim;
		fim=aux;
	}
	for(i=inicio; i<=fim; i++){
		soma+=i;
	}
	return soma;
}
