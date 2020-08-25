#ifndef STR_H_INCLUDED
#define STR_H_INCLUDED

//AULA

void limpa();
void strUppercase(char * str);
void printASCII();

int compareString(char*, char*);

int compareStringV2(char *str1, char *str2);

int compareStringRec(char *str1, char *str2);

void swapChar(char *ptr1, char *ptr2);

void reverseStringV2(char *);

void reverseString(char * arr);

void insertChar(char * arr, char letter, int pos);

void insertCharV2(char * arr, char letter, int pos);

void insertWord(char * str, char * palavra, int pos);

void insertWordV2(char * str, char * palavra, int pos);

#endif /* STR_H_INCLUDED */