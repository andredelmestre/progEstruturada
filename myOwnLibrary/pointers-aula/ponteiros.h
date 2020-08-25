#ifndef PONTEIROS_H_INCLUDED
#define PONTEIROS_H_INCLUDED

//AULA
void limpa();

int addTwoNumbers();

int addNumbers(int*, int*);

int* addNumbersPtr(int num1, int num2);

void swap(int*, int*);

int teste(int a, int b);

int ehImpar(int a);
int vetImparPar(int*, int, char);
void parImpar(int*, int, int*, int*);

void printArray(int*, int);

void ordenaArrayV1(int*, int);

void ordenaArrayV2(int*, int);

void somaVetores(int * vet1, int * vet2, int tamanho);

void ordenaVet(int *vet, int tamanho, int crescente);

int deletaIndiceVet(int *vet, int tamanho, int indice);

#endif /* PONTEIROS_H_INCLUDED */