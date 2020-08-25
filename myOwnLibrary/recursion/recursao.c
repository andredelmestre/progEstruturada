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

void numPrintCres(int n){
    static int aux=1;
    if(aux < n){
         printf(" %d ",aux);
         aux++;
         numPrintCres(n);
    }
    return;
}


int multiplicacaoFull(int a, int b){
    if(a==0 || b==0)
          return 0;  //SAIDA
    else if(a>0 && b>0){
        return a+multiplicacaoFull(a,b-1); //++
    }
    else if(a<0 && b<0){
        return multiplicacaoFull(-a,-b); //--
    }
    else if(a>0 && b<0){
        return b+multiplicacaoFull(a-1,b); //+-
    }
    else if(a<0 && b>0){
        return a+multiplicacaoFull(a,b-1); //-+    
    }
}

void PrintDigitsHexa(int n){
    printf("\n\nPrinta digito do numero %x ", n);
    if(n>0)
    {
         printf("= %x ",(n%16) );
         PrintDigitsHexa(n/16);
    }
    return;
}
