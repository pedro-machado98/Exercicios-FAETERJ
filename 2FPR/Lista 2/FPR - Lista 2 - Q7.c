/*Desenvolver uma função que remova determinado elemento (todas as suas ocorrências) de um vetor de float. Ao final, retornar o número de remoções realizadas.*/
#include <stdio.h>
#define tam 10

void alternaVetor(float v[], float a, float b){
  int cont=0;
  for (int i = 0; i < tam; i++){
    if (v[i]==a){
      v[i]=0;
      cont++;
    }
  }
  printf("%d", cont);
}


int main(void) {
  float v[tam]={1,2,2,2,5,6,2,7,8,9};
  float a = 2;
  float b = 3;
  alternaVetor(v, a, b);
  return 0;
}