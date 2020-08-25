#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "filesHandling.h"

/*
modo	descricao
r	abre arquivo texto em modo de leitura
w	abre ou cria arquivo texto em modo de escrita
a	abre ou cria arquivo texto em modo de escrita ADICIONAL
r+	abre arquivo texto em modo de leitura E escrita. Nao cria arquivo
w+	abre ou cria arquivo texto em modo de leitura E escrita.
a+	abre ou cria arquivo texto em modo de leitura E escrita ADICIONAL. 

## opcoes abaixo sao absolutamente as mesmas, mas a leitura dos arquivos eh binaria
rb	opens a binary file in reading mode
wb	opens or create a binary file in writing mode
ab	opens a binary file in append mode
rb+	opens a binary file in both reading and writing mode
wb+	opens a binary file in both reading and writing mode
ab+	opens a binary file in both reading and writing mode
*/

int demoClassPutcGetc(){
    FILE *fp;
    char ch;

    fp = fopen("./aula/one.txt", "w");
    if(fp==NULL){
    	printf("Erro 1\n");
    	return 0;
    }
    while( (ch = getchar()) != EOF)
        fputc(ch, fp);
    fclose(fp);


    fp = fopen("./aula/one.txt", "r");
    if(fp==NULL){
		printf("Erro 2\n");
    	return 0;
    }
    while( (ch = fgetc(fp)) != EOF)
        printf("%c",ch);
    fclose(fp);

    return 1;
}

int demoClassPutsGets(){
    FILE *fp;
    char str[30], *result;
    strcpy(str, "Prova dia 17 e 18-12");

    fp = fopen("./aula/two.txt", "w");
    if(fp==NULL){
        printf("Erro 1\n");
        return 0;
    }

    printf("fputs = %d\n", fputs(str, fp));
    printf("fputs = %d\n", fputs("ferias chegando", fp));
    fclose(fp);

    fp = fopen("./aula/two.txt", "r");
    if(fp==NULL){
        printf("Erro 2\n");
        return 0;
    }
   while( (result = fgets(str, 30, fp))!=NULL ){
        printf("str = %s\n",str);
        printf("result = %s\n",result);
    }

    fclose(fp);

    return 1;
}

int demoClassPrinfScanf(){
    FILE *fp;
    char str_w[20]="Hello_World!", str_r[20], teste[20];
    int vet_w[5] = {1,2,3,4,5}, vet_r[5];
    float float_w=5.5, float_r;

    fp = fopen("./aula/fprintfTest.txt", "w");
    if(fp == NULL){
        printf("ERRO 1\n");
        return 0;
    }
    fprintf(fp, "%s\t%i\t%.2f\n", str_w, vet_w[0], float_w);
    fprintf(fp, "teste_%s\t%i\t%.2f\n", str_w, vet_w[1], float_w/2);

    fclose(fp);

    fp = fopen("./aula/fprintfTest.txt", "r");
    if(fp == NULL){
        printf("ERRO 2\n");
        return 0;
    }
    fscanf(fp, "%s\t%i\t%f\n", str_r, &vet_r[0], &float_r);
    printf("%s\t%i\t%f\n", str_r, vet_r[0], float_r);
    
    fscanf(fp, "%s\t%i\t%f\n", str_r, vet_r+1, &float_r);
    printf("%s\t%i\t%f\n", str_r, *(vet_r+1), float_r);

    fclose(fp);

    return 1;
}


int contaLinhas(char * fileName){
    // a ser desenvolvido em aula
}

int copiarArquivo(char * arqOriginal, char * novoArquivo){
    // a ser desenvolvido em aula
}

int contarLinhas(char * fileName, int lineLenght){
    // a ser desenvolvido em aula
}

int newFileToUpper(char * file){
    // a ser desenvolvido em aula
}

int insertLineAuxFile(char * fileName, char * content, int line){
    // a ser desenvolvido em aula
}

void printFile(char * fileName, int lineLenght){
    // a ser desenvolvido em aula
}
