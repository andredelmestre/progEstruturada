#ifndef FILESHANDLING_H_INCLUDED
#define FILESHANDLING_H_INCLUDED

// aula

int contaLinhas(char * fileName);

int copiaArquivo(char * origem, char * destino);

int converteTemperatura(char * origem, char * destino);

int contarLinhas(char * fileName, int lineLenght);

int demoClassPutcGetc();

int demoClassPutsGets();

int demoClassPrinfScanf();

int insertLineAuxFile(char * fileName, char * content, int line);

int newFileToUpper(char * file);

void printFile(char * fileName, int lineLenght);
//functuion from previous subjects

#endif /* FILESHANDLING_H_INCLUDED */



