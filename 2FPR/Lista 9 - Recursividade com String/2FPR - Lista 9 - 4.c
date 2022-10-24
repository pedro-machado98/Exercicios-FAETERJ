/*
Desenvolver uma função recursiva que, dada uma string, exiba-a invertida.
*/

#include <stdio.h>

void exibeStringInvertidaAux(char s1[], int cont){

  if (s1[cont]){
    exibeStringInvertidaAux(s1, cont+1);
    printf("%c", s1[cont]);
  }
}

void exibeStringInvertida(char s[]){
  exibeStringInvertidaAux(s, 0);
}

int main(void) {

  exibeStringInvertida("teste");
  
  return 0;
}
