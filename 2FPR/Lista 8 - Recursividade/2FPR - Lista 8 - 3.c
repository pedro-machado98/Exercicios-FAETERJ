/*
Fazer uma função recursiva que, dado um número inteiro N, exiba o mesmo na base 2 (binária).

condição de parada: se n<2;

*/

#include <stdio.h>



void inteiroParaBinario(int n){

  if(n<2){
    printf("%d", n);
  }
  else{
    inteiroParaBinario(n/2);
    printf("%d",n%2);
  }
}

int main(void) {
  int n;

  
  printf("\nDigite um numero para transformar em binario: ");
  scanf("%d", &n);

  inteiroParaBinario(n);

  return 0;
}