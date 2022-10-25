/*
Desenvolver uma função recursiva que, dado um vetor V com quant números inteiros, determine se seus elementos estão dispostos de maneira a representar uma progressão aritmética.
*/

#include <stdio.h>
#define TAM 5

int progressaoAritmeticaAux(int v[], int i, int quant){

  if ( i < quant ){
    if (v[i+1]-v[i] != v[i+2]-v[i+1]){
      return 0;
    }
    else{
      return progressaoAritmeticaAux(v, i+1, quant);
    }
  }
  else{
    return 1;
  }
}

int progressaoAritimetica (int v[]){
  
  return progressaoAritmeticaAux(v, 0, TAM);
}

int progressaoAritimeticaIterativa(int v[], int quant){

  for ( int i = 0 ; i < quant-1 ; i++){
    if (v[i+1]-v[i] != v[i+2]-v[i+1]){
      return 0;
    }
  }
  return 1;
}


int main(void) {
  int vetor[TAM]={0,2,4,6,8};
  int quant=TAM;
  
  printf("Resultado iterativa: %d", progressaoAritimeticaIterativa(vetor, quant));
  printf("\n\n");
  printf("Resultado recursiva: %d", progressaoAritimetica(vetor));
  return 0;
}