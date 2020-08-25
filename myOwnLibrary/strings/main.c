#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #include <conio.h>

#include "lib.h"

int main (){
	char ch, palavra2[30]="Andre2";
	char palavra1[20]={'A', 'n', 'd', 'r', 'e', '\0'};
	char palavra3[50];

	char palavras[3][30]={"Mauricio", "Thomas", "Joao"};


	printf("\n\n\n##################\n");
	printf("# PARTE 1 - CHAR #\n");
	printf("##################\n");


	char atendimento[30] = "vItoRia";
	printf("ANTES DA F() = %s\n", atendimento);
	strUppercase(atendimento);
	printf("DEPOIS DA F() = %s\n", atendimento);


	printASCII();

	ch='c';
	printf("Char: %c, int: %i, hex: 0x%x, HEX: 0x%X\n\n", ch, ch, ch, ch);
	printf("Char: %c, int: %i, hex: %x, HEX: %X\n\n", palavra1[2], palavra1[2], palavra1[2], palavra1[2]);
	printf("string = %s\n\n", palavra1); 
	printf("string = %s\n\n", palavra2); 

	printf("string = %s, %s, %s \n\n", palavras[0], palavras[1], palavras[2]); 


	printf("Enter a string : ");
	gets(palavra1);
	printf("You entered: %s and %s", palavra1, palavra2);


	puts("\n\nEnter a string  AGAIN: ");
	gets(palavra1);
	// printf("You entered: %s and %s", palavra1, palavra2);
	puts("A palavra eh: ");
	puts(palavra1);
	puts("\n");

	// ch=getc(stdin);
	// printf("%c", ch); 
	// ch=getchar();
	// printf("%c", ch); 
	// ch=getchar();
	// printf("%c", ch); 
	// ch=getchar();
	// printf("%c", ch); 
	// ch=getchar();
	// printf("%c", ch); 

	// scanf("%c", &ch);
	// printf("%c", ch); 
	// scanf("%c", &ch);
	// printf("%c", ch); 
	// scanf("%c", &ch);
	// printf("%c", ch); 
	// scanf("%c", &ch);
	// printf("%c", ch); 


	//Apenas para Windows: funcoes getch() e getche() funcionam melhor em C. Incluir biblioteca conio.h

    limpa();

	printf("\n\n\n######################\n");
	printf("# PARTE 2 - string.h #\n");
	printf("######################\n");

	//DEMO strlen
	char str1[20]={'A', 'n', 'd', 'r', 'e', '\0'};
	char str2[20]={'G', 'e', 'f', 'f', 'e', 'r', 't', 'o', 'n', '\0'};
	char strmtx[3][30]={"Mauricio", "Thomas", "Joao"};
	int tamanho;

	tamanho = strlen(str1);
	printf("tamanho de %s eh %i\n", str1, tamanho);
	printf("tamanho de %s eh %i\n", strmtx[2], strlen(strmtx[2]));
	for(int i=0; i<strlen(str2); i++){
		printf("%c - %i\n", str2[i], str2[i]);
	}

	// //DEMO strcpy
	strcpy(str1, "Lilia");	//str1 = "Lilia";
	printf("\nstr1 = %s\n", str1);

	strcpy(str2, str1);	//str2 = Lilia;
	printf("str2 = %s\n", str2);

	strcpy(strmtx[0], str2);	//strmtx[0] = Lilia;
	printf("\nstrmtx[0] = %s\n", strmtx[0]);

	strmtx[1][0] = str2[0];
	printf("\nstrmtx[1] = %s\n", strmtx[1]);


	// //DEMO strcat
	strcpy(str1, "Programacao");	//str1 = "Programacao";
	strcpy(str2, "Estruturada");
	//str1 = "Programacao Estruturada";
	strcat(str1, " ");
	strcat(str1, str2);
	printf("\nstr1 = %s\n", str1);
	printf("str2 = %s\n", str2);

	// //DEMO strcmp
	int aux=strcmp(str1, "Estruturada");
	printf("\nstr1 = \"Estruturada\"? %i\n", aux);
	aux=strcmp(str2, "Estruturada");
	printf("\nstr2 = \"Estruturada\"? %i\n", aux);


	char *ptr_ch;
	ptr_ch=str1;
	if( str2 == str1 ){
		printf("\n\n str2 == str1 sao iguais!");
	}
	if( str1 == ptr_ch ){
		printf("\n\n str1 == ptr_ch sao iguais!");
	}

    limpa();

	printf("\n###################\n");
	printf("# RECURSAO E STRINGS #\n");
	printf("###################\n\n\n");

	printf("str1 = %s\nstr2 = %s\n\n", str1, str2);

	printf("\ncompara str1 e \"Estruturada\" - %i\n", compareStringRec(ptr_ch, "Estruturada"));
	if( compareStringRec(ptr_ch, "Estruturada") ){
		printf("string sao iguais!\n");
	}else{
		printf("string sao diferentes!\n");
	}

	printf("\ncompara str2 e \"Estruturada\" - %i\n", compareStringRec(str2, "Estruturada"));
	if( compareStringRec(str2, "Estruturada") ){
		printf("string sao iguais!\n");
	}else{
		printf("string sao diferentes!\n");
	}

	printf("\ncompara str1 e str2 - %i\n", compareStringRec(ptr_ch, str2));
	if( compareStringRec(ptr_ch, str2) ){
		printf("string sao iguais!\n");
	}else{
		printf("string sao diferentes!\n");
	}


    limpa();

	printf("\n#######################");
	printf("\n# exemplos dos slides #");
	printf("\n#######################\n\n\n");


	printf("\n\npalavra ANTES do swap = %s\n", palavra1);
    swapChar(palavra1+0, palavra1+1);
    swapChar(palavra1+4, palavra1+3);
	printf("palavra DEPOIS do swap = %s\n", palavra1);


    strcpy(palavra1,"Andre Luis");
    printf("\n\nANTES do swap=%s\n", palavra1);
    reverseString(palavra1);
    printf("DEPOIS do swap=%s\n", palavra1);


    strcpy(palavra2,"Andre");
    printf("\n\nANTES do swap=%s\n", palavra2);
    reverseString(palavra2);
    printf("DEPOIS do swap=%s\n", palavra2);


    strcpy(palavra1,"programacao");
    printf("\n\ninsertChar on %s ......... \n", palavra1);
	insertChar(palavra1, 'X', 6);
    printf("insertChar result %s ......... \n", palavra1);


    strcpy(palavra2,"Bressan");
    printf("\n\ninsertChar on %s ......... \n", palavra2);
	insertCharV2(palavra2, '?', 4);
    printf("insertChar result %s ......... \n", palavra2);


    strcpy(palavra3,"Tecnologia_Internet");
    printf("\n\ninsertWord on %s ......... \n", palavra3);
	insertWord(palavra3, "Sistemas_", 11);
    printf("insertWord result %s ......... \n", palavra3);

    strcpy(palavra3,"Eng._Automacao");
    printf("\n\ninsertWord on %s ......... \n", palavra3);
	insertWordV2(palavra3, "Controle_", 5);
    printf("insertWord result %s ......... \n", palavra3);


    return 0;
}