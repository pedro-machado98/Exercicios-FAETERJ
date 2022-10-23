#include <stdio.h>

int buscaBinaria (int v[], int valor, int inicio, int fim){
  int meio = (fim+inicio)/2;

  if(v[meio] == valor){
    return meio;
  }
  else{
    if(valor<v[meio]){
      return buscaBinaria(v, valor, inicio, meio-1);
    }
    else{
      return buscaBinaria(v, valor, meio+1, fim);
    }
  }
}


int main(void) {
  int v[10]={0,10,20,30,40,50,60,70,80,90};

  printf("%d", buscaBinaria(v, 30, 0, 9));
  return 0;
}