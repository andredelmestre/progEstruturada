#include "recursao.h"
#include <stdio.h>

int findFactorial(int n){
   if(n==1)
       return 1;
   else
       return(n*findFactorial(n-1));// calling the function findFactorial to itself recursively
}

int multiplicaRec(int a, int b){
  if(b>0){
    return a + multiplicaRec(a, b-1);
  }else{
    return 0;
  }
}

int divisaoRec(int a, int b, int ctrl){
  if(a>=b){
    return divisaoRec(a-b, b, ctrl+1);
  }else{
    return ctrl;
  }
}

int divisaoRecV2(int a, int b){
  if(a>=b){
    return 1+divisaoRecV2(a-b, b);
  }else{
    return 0;
  }
}

//exercicios para serem desenvolvidos em aula/videos
void numPrintCres(int n){
}


int multiplicacaoFull(int a, int b){
}

void PrintDigitsHexa(int n){
}
