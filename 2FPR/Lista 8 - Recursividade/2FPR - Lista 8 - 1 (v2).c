/*
Desenvolver uma função recursiva que exiba todos os múltiplos do número N, inferiores ou iguais ao valor V.
*/


#include <stdio.h>

void exibeMultiplos(int n, int v){

  if (v==0){
    printf("%d, ", v);
  }
  else{
    if(v%n==0){
      exibeMultiplos(n, v-1);
      printf("%d, ", v);
    }
    else{
      exibeMultiplos(n, v-1);
    }
  }
}

int main(void) {
  int n = 6;
  int v = 25;
  exibeMultiplos(n,v);
  return 0;
}