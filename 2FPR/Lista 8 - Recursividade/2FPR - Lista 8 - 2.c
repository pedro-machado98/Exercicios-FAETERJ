/*
Questão 02: Desenvolver uma função recursiva que exiba todos os múltiplos do número N, inferiores ou iguais ao valor V.
*/
#include <stdio.h>

int exibeMultiplosN (int n, int m, int v){
  if (m>=v){
    return 1;
  }
  else{
    printf("%d, ", m);
    return exibeMultiplosN(n, m+n, v);
  }
}

int main(void) {
  int n, v;
  
  printf("Digite o numero que deseja ver o multiplo: ");
  scanf("%d", &n);
  printf("Digite o valor de limite maximo: ");
  scanf("%d", &v);

  exibeMultiplosN(n, n, v);
  return 0;
}