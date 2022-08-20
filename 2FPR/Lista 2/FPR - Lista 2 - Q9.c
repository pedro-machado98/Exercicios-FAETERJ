/*Implementar a função de inserção de determinado elemento em um vetor ordenado crescentemente*/

#include <stdio.h>
#define tam 10

void mudaValor(float v[], float x){
  for (int i = 0; i < tam; i++){
      if(v[i]>x && v[i-1]<x){
      v[i]=x;
    }
  }
}

void exibeNovoVetor (float v[], float x){
  mudaValor(v, x);
  for (int i = 0; i < tam; i++){
    printf("%.f, ", v[i]);
  }
}

int main(void) {
  float v[tam]={1,2,10,20,30,40,50,55,60,70};
  float x = 3;
  exibeNovoVetor(v, x);
  return 0;
}