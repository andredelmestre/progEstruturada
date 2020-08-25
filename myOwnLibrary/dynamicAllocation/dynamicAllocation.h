#ifndef DYNALLOCATION_H_INCLUDED
#define DYNALLOCATION_H_INCLUDED

//funcoes de projetos anteriores
int ehImpar(int a);
int contParImparVetor(int * arr, int size, int impar);
void printArray(int *arr, int size);
void swap(int *ptr1, int *ptr2);
void swapChar(char *ptr1, char *ptr2);
int searchInArray(int * arr, int size, int num);

// malloc
char * subString(char *str, int begin, int end);

int * gerarVetor(int tamanho);

int * arrayImpares(int * arr, int size);


// realloc
char * leStr();

char * subStrRealloc(char *str, int inicio, int fim);

int * insertNumberEndDynArray(int * arr, int num, int size);

int * removeNumberFromArray(int * arr, int size, int num);


#endif /* DYNALLOCATION_H_INCLUDED */



