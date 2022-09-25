/*
04: Pede-se a implementação de uma função recursiva que exiba os n primeiros termos de uma PG (Progressão Geométrica), onde a1 é o seu primeiro termo e q a razão.

Observação: uma PG consiste em uma sequência de valores, iniciadas pelo valor a1. Os demais elementos são definidos como o anterior multiplicado pela razão.

condição de parada: contador==n
*/
#include <stdio.h>

int pgRecursiva(int n, int primeiro, int razao, int contador){
  
  if(contador==n){
    return 0; 
  }
  else{
    printf("%d, ", primeiro);
    return pgRecursiva(n, primeiro*razao, razao, contador+1);
  }
}

int main(void) {
  int n, primeiro, razao, contador;
  n=8;
  primeiro=2;
  razao=2;
  contador=0;
  pgRecursiva(n, primeiro, razao, contador);
  return 0;
}