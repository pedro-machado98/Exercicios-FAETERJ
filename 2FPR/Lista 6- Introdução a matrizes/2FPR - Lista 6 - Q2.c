/*
Desenvolver uma função que, dada uma matriz M15×20, determine se um número X se encontra na linha L da matriz.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "matriz_base.h"

int buscaMatriz2 (int rows, int cols, int matriz[][cols], int valor, int rowSearched){
  int i, j, cont=0;

  for( j=0 ; j<cols ; j++ ){
    if(matriz[rowSearched][j]==valor){
      return 1;
    }
  }
  return 0;
}

int main(void) {
  int matriz[15][20];
  int var;
  int buscado=100;
  int linha=0;

  srand(time(NULL));
  
  randomizaMatriz(15, 20, matriz);
  exibeMatriz(15, 20,matriz);
  printf("\n\n\n");
  var=buscaMatriz2(15, 20, matriz, buscado, linha);
  if(var){
    printf("Valor %d encontrado na matriz!!", buscado);
  }
  else{
    printf("Valor %d não está presente na linha!", buscado);
  }
  
  return 0;
}