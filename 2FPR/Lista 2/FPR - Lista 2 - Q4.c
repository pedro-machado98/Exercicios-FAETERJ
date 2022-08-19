/*
Fazer uma função que armazene em um vetor os 50 primeiros termos da seguinte sequência:
S = 1, 2, 4, 7, 11, 16, ...

Nota: observem que a diferença entre o 1o e 2o elementos é igual a 1, entre o 2o e 3o é igual a 2, entre o 3o e o 4o é igual a 3, e assim sucessivamente.
*/
#include <stdio.h>
#define tam 50

void preencheVetor(int v[]){
  int j=1;
  v[0]=1;   //perguntar ao professor se tem como resolver sem inicializar
  for (int i=0;i<tam;i++){
    v[j]=j+v[i];
    printf("%d, ", v[i]);
    j++;
  }
}

int main(void) {
  int v[tam];
  preencheVetor(v);
  return 0;
}