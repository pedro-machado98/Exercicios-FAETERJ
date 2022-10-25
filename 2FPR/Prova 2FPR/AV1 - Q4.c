/*
Fazer uma função recursiva que, dado um número inteiro e positivo N, calcule a soma de seus algarismos.
*/
#include <stdio.h>

int questao4 (int n){
  int total=0;
  if(n != 0){
    total = total + (n%10);
    n=n/10;
    return total + questao4(n);
  }
  else{
    return 0;
  }
}

int main(void) {
  int n=1123;
  int soma=0;
  soma=questao4(n);
  printf("%d", soma);
  return 0;
}