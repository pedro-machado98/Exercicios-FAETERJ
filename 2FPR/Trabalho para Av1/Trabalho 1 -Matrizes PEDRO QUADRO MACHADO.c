/*

PEDRO QUADRO MACHADO
Dada uma matriz MLINHAxCOLUNA, onde LINHA e COLUNA são constantes, e uma linha L, desenvolver uma função que retorne um vetor de tamanho COLUNA contendo, em cada posição, a quantidade de vezes que os elementos da linha L encontram-se nas demais linhas da matriz.

*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define col 5
#define row 5

void randomizaMatriz(int matriz[][col], int l, int c){

  for(int i = 0; i < l; i++ ){
    for (int j = 0 ; j < c ; j++ ){
      matriz[i][j]=rand() % (9) + 1;
    }
  }
}

void exibeMatriz (int matriz[][col], int l, int c){
  
  for (int i = 0 ; i < l ; i++ ){
    for (int j = 0 ; j < c ; j++ ){
      printf("%5d", matriz[i][j]);
    }
    printf("\n");
  }
}

void zeraVetor (int vetor[], int c){
  for (int i = 0 ; i < c ; i++ ){
    vetor[i]=0;
  }
}

void exibeVetor(int vetor[], int c){
    for (int i = 0 ; i < c ; i++ ){
    printf("%5d", vetor[i]);
  }
}

void contaLinhaMatriz (int matriz[][col], int l, int c, int linhaBuscada, int vetorContador[]){  
  for (int k = 0 ; k < c ; k++ ){
    for ( int i = 0; i < l ; i++ ){
      for ( int j = 0 ; (j < c) && (i != linhaBuscada) ; j++ ){
        if ( matriz[linhaBuscada][k] == matriz[i][j] ){
            vetorContador[k]++;
        }
      }
    }
  }
}

int main(void) {

  int matriz[row][col];
  int vetor[col];
  int linhaBuscada=4;
  srand(time(NULL));

  zeraVetor(vetor, col);
  randomizaMatriz(matriz, row, col);
  exibeMatriz(matriz, row, col);
  
  printf("\nDigite uma a ser buscada no vetor (1 até %d): ", col);
  scanf("%d", &linhaBuscada);

  contaLinhaMatriz(matriz, row, col, linhaBuscada-1, vetor);
  printf("\n");
  exibeVetor(vetor, col);
  
  return 0;
}