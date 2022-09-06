/*
Faça uma função que, dada uma matriz M8×5 de
reais, gere a matriz M, sua transposta.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "matriz_base.h"

void geraMatrizTransposta2(int rows, int cols, int matriz[][cols], int matrizTransposta[][rows]){
  int i, j, var;

  for ( i=0; i<rows ; i++ ){
    for( j=0 ; j<cols ; j++ ){
      matrizTransposta[j][i]=matriz[i][j];
    }
  }
}


int main(void) {
  int matriz[8][5];
  int matrizTransposta[5][8];
  
  srand(time(NULL));


  randomizaMatriz(8, 5, matriz);
  exibeMatriz(8, 5, matriz);
  geraMatrizTransposta2(8, 5, matriz, matrizTransposta);
  printf("\n\n\n\n");
  
  exibeMatriz(5, 8, matrizTransposta);
  return 0;
}