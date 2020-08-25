#ifndef PONTEIROS_H_INCLUDED
#define PONTEIROS_H_INCLUDED

//AULA
void limpa();

int addTwoNumbers();

int addNumbers(int*, int*);

int* addNumbersPtr(int num1, int num2);

void swap(int*, int*);

int teste(int a, int b);

int verificaNumerosUnicos(int *arr, int tamanho);

int contaOcorrenciasVetor(int *arr, int tamanho, int n);

void printArray(int*, int);

void ordenaArrayV1(int*, int);

void ordenaArrayV2(int*, int);

void somaVetores(int * vet1, int * vet2, int tamanho);

void ordenaVet(int *vet, int tamanho, int crescente);


// funcoes desenvolvidas na aula de 24 e 25 de setembro
void contaParImpar(int *vet, int tam, int * contI, int * contP);


// funcoes desenvolvidas na aula de 26 de setembro
int contaElemento(int * vet, int tam, int el);

void printaUnicos(int * vet, int tam);


#endif /* PONTEIROS_H_INCLUDED */