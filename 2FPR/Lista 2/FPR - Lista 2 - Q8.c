/*
Dado um vetor de reais (cujo os elementos estão ordenados crescentemente) e um número x, retornar a posição da primeira ocorrência de x (caso encontre-se no vetor) ou a posição na qual deveria estar (caso contrário).
*/
#include <stdio.h>
#define tam 10

int alternaVetor(float v[], float x){
  for (int i = 0; i < tam; i++){
    if (v[i]==x){
     return i+1;
    }
    else{
      if(v[i]>x){
        return i;
      }
    }
  }
}

int main(void) {
  float v[tam]={1,2,10,20,30,40,50,55,60,70};
  float x = 3;
  printf("Posição do numero %.f: %d°",x ,alternaVetor(v, x));
  return 0;
}