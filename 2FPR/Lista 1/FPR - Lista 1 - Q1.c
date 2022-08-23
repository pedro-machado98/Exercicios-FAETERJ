/*QUESTÃO 01: Desenvolver uma função que exiba os múltiplos de N compreendidos no intervalo definido por A e B. */

#include <stdio.h>

void showMultiple (int n, int a, int b){

  while (a<b){
    if (a%n==0 && a<=b){
      printf("%d ", a);
      a++;
    }
    else{
      a++;
    }
  }
}



int main(void) {
  int n, a, b;
  n=3;
  a=5;
  b=10;
  showMultiple(n, a, b);
  //printf("Hello World\n");
  return 0;
}