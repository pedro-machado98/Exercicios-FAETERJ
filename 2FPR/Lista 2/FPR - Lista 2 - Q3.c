/*Pede-se a implementação de uma função que, dado um vetor contendo números reais, determine se o mesmo encontra-se ordenado de forma crescente.*/

#include <stdio.h>

int troca (float v[], int tam){
 for (int i=0;i<tam;i++){
   if(v[i]>=v[i+1]){
     return 0;
   }
 }
 return 1;
}

void exibeResposta (float v[], int tam){
  if (troca(v, tam)){
    printf("Vetor em ordem crescente");
  }
  else{
    printf("Vetor não está em ordem crescente");
  }
}

int main(void) {
  int tam = 5;
  float v[5] = {1,2,3,4,5};
  exibeResposta(v, tam);
  return 0;
}