#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//#include "matriz_base.h"

void zeraMatriz(int rows, int cols, int matriz[][cols]){
  int i, j;

  for ( i=0; i<rows ; i++ ){
    for( j=0 ; j<cols ; j++ ){
      matriz[i][j]=0;
    }
  }
}

void geraMatrizTransposta2(int rows, int cols, int matriz[][cols], int matrizTransposta[][rows]){
  int i, j, var;

  for ( i=0; i<rows ; i++ ){
    for( j=0 ; j<cols ; j++ ){
      matrizTransposta[j][i]=matriz[i][j];
    }
  }
}

int comparaMatriz(int rows, int cols, int matriz[][cols], int matrizTransposta[][rows]){  
  int i, j, var;

  for ( i=0; i<rows ; i++ ){
    for( j=0 ; j<cols ; j++ ){
      if(matrizTransposta[i][j]!=matriz[i][j]) //essa comparação não ta funcionando 
      return 0;
    }
  }
  return 1;
}

void exibeMatriz2(int rows, int cols, int matriz[][cols]){
    int i, j;

  for ( i=0; i<rows ; i++ ){
    for( j=0 ; j<cols ; j++ ){
      printf("%3d ", matriz[i][j]);
    }
    printf("\n");
  }
}

int main(void) {
  int matriz[6][6];
  int matrizTransposta[6][6];

  zeraMatriz(6, 6, matriz);

  matriz[1][5]=3;
  geraMatrizTransposta2(6, 6, matriz, matrizTransposta);
  int resultado=comparaMatriz(6,6,matriz,matrizTransposta);

  if(resultado){
    exibeMatriz2(6, 6, matriz);
    printf("\n\n");

    printf("A matriz é simetrica!");
  }
  else{
    exibeMatriz2(6, 6, matriz);
    printf("\n\n");
    printf("A matriz não é simetrica!");
  }
  return 0;
}