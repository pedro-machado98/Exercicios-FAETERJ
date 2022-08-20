/*Faça uma função que, dado um vetor de reais, altere todas as ocorrências do número A pelo número B.*/
#include <stdio.h>
#define tam 10

void alternaVetor(float v[], float a, float b){
  for (int i = 0; i < tam; i++){
    if (v[i]==a){
      v[i]=b;
    }
    printf("%.2f, ", v[i]);
  }
}


int main(void) {
  float v[tam]={1,2,2,4,5,6,7,7,8,9};
  float a = 2;
  float b = 3;
  alternaVetor(v, a, b);
  return 0;
}