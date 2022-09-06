/*
Implementar uma função que, dada uma matriz M10×8, gere um vetor V de tamanho 8, onde cada elemento do vetor consiste na soma dos elementos de uma coluna de M. Ou seja, o elemento V[0] consiste na soma dos elementos da primeira coluna de M, o elemento V[1] consiste na soma dos elementos da segunda coluna de M, e assim por diante.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoesBase.h"

void somaColunasMatriz2 (int rows, int cols, int matriz[][cols], int vetor[]){
  int i,j;

  for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
     vetor[j]+=matriz[i][j];
    }
  }
}

int main(void) {
  int matriz[10][8];
  int vetor[8];
  inicializaVetor(8, vetor);
  randomizaMatriz(10, 8, matriz);
  printf("\n");
  printf("\n\n\n");
  exibeMatriz(10, 8, matriz);
  somaColunasMatriz(10, 8, matriz, vetor);
  printf("\n\n\n");
  exibeVetor(8, vetor);
  return 0;
}