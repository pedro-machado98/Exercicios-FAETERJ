/*Desenvolver uma função que calcule o n-ésimo termo da sequência de Fibonacci.*/
#include <stdio.h>

int calcFibonacci (int n){
  int a=1, b=0, c;
  for (int i=1;i<n;i++){
    printf("%d, ", b);
    c = a + b;
    a = b;
    b = c;
  }
  return b;
}


int main(void) {

  printf("%d ", calcFibonacci(10));
  
  return 0;
}
