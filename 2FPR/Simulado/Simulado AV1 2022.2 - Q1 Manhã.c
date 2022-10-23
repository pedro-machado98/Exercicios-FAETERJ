/*
Dada uma matriz de inteiros bidimensional M10x20, desenvolver uma função que troque os elementos da linha L1 pelos elementos (em ordem inversa) da linha L2, como ilustrado no exemplo abaixo:

Trocar os elementos da segunda linha - L1 - com os elementos da quarta linha - L2 - (sendo estes últimos invertidos):

Nota: A função deve retornar um inteiro, de acordo com os valores de L1 e L2. Se estes forem válidos, retornar 1; caso contrário, retornar 0.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define row 8
#define col 4

void exibeMatriz(int rows, int cols, int matriz[][cols]){
    int i, j;

  for ( i=0; i<rows ; i++ ){
    for( j=0 ; j<cols ; j++ ){
      printf("%3d ", matriz[i][j]);
    }
    printf("\n");
  }
}

void randomizaMatriz (int rows, int cols, int matriz[][cols]){
  int i, j;

  for ( i=0; i<rows ; i++ ){
    for( j=0 ; j<cols ; j++ ){
      matriz[i][j]=rand() % 5+1;
    }
  }
}

void questao2(int m[][col], int l1, int l2, int l3, int cont){

  if (cont < col){
    m[l3][cont]=m[l1][cont]+m[l2][cont];
    questao2(m, l1, l2, l3, cont+1);
  }
}

int main(void) {

  int matriz[row][col];
  int l1=1;
  int l2=3;
  int l3=6;
  int cont=0;

  srand(time(NULL));
  randomizaMatriz(row, col, matriz);
  exibeMatriz(row, col, matriz);

  questao2(matriz, l1, l2, l3, cont);

  printf("\n");
  printf("\n");
  printf("\n");

  exibeMatriz(row, col, matriz);

  return 0;
}