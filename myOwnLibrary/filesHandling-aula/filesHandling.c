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

    fp = fopen("./files/one.txt", "w");
    if(fp==NULL){
    	printf("Erro 1\n");
    	return 0;
    }
    while( (ch = getchar()) != EOF)
        fputc(ch, fp);
    fclose(fp);


    fp = fopen("./files/one.txt", "r");
    if(fp==NULL){
		printf("Erro 2\n");
    	return 0;
    }
    while( (ch = fgetc(fp)) != EOF)
        printf("%c",ch);
    fclose(fp);

    return 1;
}

//fread e fwrite
//exericio aula: inserir uma linha

int demoClassPutsGets(){
    FILE *fp;
    char str[30], *result;
    strcpy(str, "Prova dia 17 e 18-12");

    fp = fopen("./files/two.txt", "w");
    if(fp==NULL){
        printf("Erro 1\n");
        return 0;
    }

    printf("fputs = %d\n", fputs(str, fp));
    printf("fputs = %d\n", fputs("ferias chegando", fp));
    fclose(fp);

    fp = fopen("./files/two.txt", "r");
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

int copiaArquivo(char * origem, char * destino){
    FILE *fp_origem = fopen(origem, "r"); 
    FILE *fp_destino = fopen(destino, "w");
    if(fp_origem==NULL || fp_destino==NULL){
    	printf("DEU PAU\n");
    	return 0;
    }

    char *result, str[50];
    while( (result = fgets(str, 50, fp_origem))!=NULL ){
    	fputs(str, fp_destino);
    }


    fclose(fp_origem);
    fclose(fp_destino);
    return 1;
}




int converteTemperatura(char * origem, char * destino){
    FILE *fp_origem = fopen(origem, "r"); 
    FILE *fp_destino = fopen(destino, "w");
    if(fp_origem==NULL || fp_destino==NULL){
        printf("DEU PAU\n");
        return 0;
    }

    float C, K, F;
    while( !feof(fp_origem) ){
        fscanf(fp_origem, "%f\n", &C);
        K = C + 273.15;
        F = C*9/5 + 32;
        fprintf(fp_destino, "%.2f %.2f %.2f\n", C, K, F);
    }

    fclose(fp_origem);
    fclose(fp_destino);
    return 1;
}




int demoClassPrinfScanf(){
    FILE *fp;
    char str_w[20]="Hello_World!", str_r[20], teste[20];
    int vet_w[5] = {1,2,3,4,5}, vet_r[5];
    float float_w=5.5, float_r;

    fp = fopen("./files/fprintfTest.txt", "w");
    if(fp == NULL){
        printf("ERRO 1\n");
        return 0;
    }
    fprintf(fp, "%s\t%i\t%.2f\n", str_w, vet_w[0], float_w);
    fprintf(fp, "teste_%s\t%i\t%.2f\n", str_w, vet_w[1], float_w/2);

    fclose(fp);

    fp = fopen("./files/fprintfTest.txt", "r");
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
    FILE *fp;
    char ch;
    int cont = 1;
    fp = fopen(fileName, "r");
    if(fp==NULL){
        printf("O arquivo nao existe!\n");
        return -1;
    }
    while( (ch = fgetc(fp)) != EOF){
        if(ch == '\n'){
            cont++;
        }
    }
    fclose(fp);
    return cont;
}











int contarLinhas(char * fileName, int lineLenght){
    char caminhoArquivo[50], str[50], *result;
    FILE *fp;
    int numeroLinhas=0;

    strcpy(caminhoArquivo, "./files/");
    strcat(caminhoArquivo, fileName);

    fp = fopen(caminhoArquivo, "r");
    if(fp==NULL){
        printf("Erro na abertura do arquivo\n");
        return 0;
    }

    // result = fgets(str, lineLenght, fp);
    // while( result != NULL ){ //EOF
    //     printf("str = %s\n",str);
    //     printf("result = %s\n",result);
    //     numeroLinhas++;
    //     result = fgets(str, lineLenght, fp);
    // }

    do{
        numeroLinhas++;
        result = fgets(str, lineLenght, fp);
        printf("result = %s\n",result);
    }while(result != NULL);


    printf("numeroLinhas = %i\n",numeroLinhas-1);
    fclose(fp);
    return numeroLinhas-1;
}

int newFileToUpper(char * file){
    FILE *fp, *fout;
    char ch;

    // file = ./files/one.txt
    fp = fopen(file, "r");
    fout = fopen("./files/UPPER.txt", "w");
    if(fp==NULL || fout==NULL){
        printf("Erro 1\n");
        return 0;
    }

    printf("\n\n\nFUNCAO PARA GERAR ARQUIVO EM MAIUSCULAS\n");
    while( (ch = fgetc(fp)) != EOF){
        // if(ch>='a' && ch<='z')
        //     ch=ch-32;
        ch=toupper(ch);
        printf("%c",ch);
        fputc(ch, fout);
    }

    fclose(fp);
    fclose(fout);

    return 1;
}

int insertLineAuxFile(char * fileName, char * content, int line){
    FILE *fp, *faux;
    char str[50];
    int nLinhas=0;

    fp = fopen(fileName, "r+");
    faux = fopen("./files/temp.txt", "w+");
    if(fp==NULL || faux==NULL){
        printf("Erro 2\n");
        return 0;
    }

    //copia cada linha de um arquivo em uma array de strings
    while(fgets(str, 50, fp) != NULL){
        if(nLinhas==line)
            fputs(content, faux);
        fputs(str, faux);
        nLinhas++;
    }    

    fclose(fp);
    fclose(faux);

    /* Delete src file and rename temp file as src */
    remove(fileName);
    rename("./files/temp.txt", fileName);


    // printFile(fileName, 50);
    return 1;
}

void printFile(char * fileName, int lineLenght){
    char str[lineLenght];
    FILE *fp;

    fp = fopen(fileName, "r+");
    if(fp==NULL){
        printf("Erro printFile\n");
    }
    printf("Printing the File %s\n", fileName);
    while(fgets(str, lineLenght, fp) != NULL){
        printf("%s",str);
    }
    printf("\n");
    fclose(fp);
}
