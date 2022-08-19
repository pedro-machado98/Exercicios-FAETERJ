/*Fazer uma função que calcule o MDC (máximo divisor comum) entre dois números.*/
#include <stdio.h>

int calcMDC(int n1, int n2) {
  int mdc;
  int aux;
  int i = 1;
  if (n1 < n2) {
    aux = n1;
    n1 = n2;
    n2 = aux;
  }
  while (i < n1/2) { //divisão por dois permite que a a notação seja O(n/2) 
    if (n1 % i == 0 && n2 % i == 0) {
      mdc = i;
    }
    i++;
  }
  return mdc;
}

int main(void) {
  int n1, n2;
  printf("\nDigite o primeiro numero do MDC: ");
  scanf("%d", &n1);
  printf("\nDigite o segundo numero do MDC: ");
  scanf("%d", &n2);
  printf("MDC: %d", calcMDC(n1, n2));

  return 0;
}