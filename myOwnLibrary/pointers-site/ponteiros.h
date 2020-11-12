#ifndef PONTEIROS_H_INCLUDED
#define PONTEIROS_H_INCLUDED

//AULA
void limpa();

int addTwoNumbers();

int addNumbers(int*, int*);

void swap(int* , int*);

void swap3nums(int*, int*, int*);

void swap3numsFloat(float*, float*, float*);

void printArray(int*, int);

int contaOcorrenciasVetor(int *arr, int tamanho, int n);

int verificaNumerosUnicos(int *arr, int tamanho);

void somaVetores(int * vet1, int * vet2, int tamanho);

void ordenaArrayV1(int*, int);

void ordenaArrayV2(int*, int);

void ordenaVet(int *vet, int tamanho, int crescente);


// funcoes desenvolvidas na aula de 24 e 25 de setembro
int contaPares(int * vet, int tamanho, int opcao);

void contaParImpar(int *vet, int tam, int * contI, int * contP);

int contaElemento(int * vet, int tam, int el);

void printaUnicos(int * vet, int tam);


#endif /* PONTEIROS_H_INCLUDED */