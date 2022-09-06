/*
Desenvolver uma função que gere a seguinte matriz M 5x5:

1   2   3   4   5
2   3   4   5   6
3   4   5   6   7
4   5   6   7   8
5   6   7   8   9
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "matriz_base.h"

void exibeMatriz2(int rows, int cols, int matriz[][cols]){
    int i, j;

  for ( i=0; i<rows ; i++ ){
    for( j=0 ; j<cols ; j++ ){
      printf("%3d ", matriz[i][j]);
    }
    printf("\n");
  }
}

void colocaMatrizOrdem(int rows, int cols, int matriz[][cols]){
  int i=0, j, k=1;

  for ( i=0; i<rows ; i++ ){
    for( j=0 ; j<cols ; j++ ){
      matriz[i][j]=k;
      k=k+1;
    }
    k=k-cols;
    k++;
  }
}

int main(void) {
  int matriz[5][5];
  colocaMatrizOrdem(5,5,matriz);
  exibeMatriz2(5, 5,matriz);
  printf("\n");
  return 0;
}