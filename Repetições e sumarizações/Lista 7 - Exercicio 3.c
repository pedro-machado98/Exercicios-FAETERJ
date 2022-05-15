#include <stdio.h>

float funcaoFatorial (int n){
  int e=1;
  int contador=1;
  
  while (contador<=n){
    e=e*contador;
    contador++;
  }
  return e;
}


int main(void) {
  int n;
  float e;
  printf("\nDigite um numero inteiro e positivo: ");
  scanf("%d", &n);

  e = 1+1/funcaoFatorial(1)+1/funcaoFatorial(2)+1/funcaoFatorial(3)+1/funcaoFatorial(n);

  printf("O valor E de %d é: %.2f", n, e);
  
  return 0;
}