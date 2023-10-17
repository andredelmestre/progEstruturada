#include "str.h"

#include <stdio.h>
#include <string.h>


void limpa(){
	getchar();
	system("cls|clear");
}

//AULA
char toUpper(char ch){
	if(ch>='a' && ch<='z'){
		ch=ch-32;
	}
	return ch;
}

void strUppercase(char * str){
	int i,res;
	for (i=0;i<strlen(str);i++){
		str[i] = toUpper(str[i]);
		printf("char %c\n", str[i]);
	}
}

void printASCII(){
    unsigned char i;
    printf("\n-----------------\ncod\t= char\n-----------------\n");
    for(i=0; i<255; i++)
        printf("%i\t= %c\n", i, i);
    printf("%i\t= %c\n", 255, 255);
    printf("-----------------\n");
}

int compareString(char *str1, char *str2){
}

int compareStringV2(char *str1, char *str2){
}

int compareStringRec(char *str1, char *str2){
}

void swapChar(char *ptr1, char *ptr2){
    char temp;
    temp = *ptr1;
    *ptr1= *ptr2;
    *ptr2= temp;
}

void reverseString(char * arr){
}

void reverseStringV2(char * str){
}

void insertChar(char * arr, char letter, int pos){
    int i;
    char aux[30];
    for(i=0;i<pos;i++){ 
        *(aux+i) = *(arr+i);
    }
    *(aux+pos)=letter;
    for(i=pos; i < strlen(arr)+1 ;i++){ 
        *(aux+i+1) = *(arr+i);
    }
    // printf("\narr=%s", arr);
    // printf("\naux=%s", aux);
    strcpy(arr, aux);
}

void insertCharV2(char * arr, char letter, int pos){
    int i;
    for(i=pos; i<=strlen(arr); i++){
        swapChar(arr+i, &letter);
    }
    // *(arr+pos) = letter;
}

void insertWord(char * str, char * palavra, int pos){
    char parte1[30],  parte2[30];
    int i, j=0;

    strcpy(parte1, str);
    parte1[pos+1] = '\0';

    for(i=pos+1; i<=strlen(str); i++){
        parte2[j] = *(str+i);
        j++;
    }       

    strcat(parte1, palavra);
    strcat(parte1, parte2);
    strcpy(str,parte1);
}

void insertWordV2(char * str, char * palavra, int pos){
    int i;
    for(i=0; i<strlen(palavra); i++){
        insertCharV2(str, *(palavra+i), pos+i);
    }
}


