/*Desenvolver uma função que determine o número de ocorrências de um número inteiro x em um vetor A.*/
#include <stdio.h>

void buscaNumero(int v[], int tam, int x){
  int cont=0;
  for(int i=0;i<tam;i++){
    if (v[i]==x){
      cont++;
    }
  }
  printf("%d", cont);
}

int main(void) {
  int x;
  printf("\nDigite um numero a ser encontrado no vetor: ");
  scanf("%d", &x);
  int tam = 5;
  int v[5] = {2,3,3,3,3};
  buscaNumero(v, tam, x);
  return 0;
}