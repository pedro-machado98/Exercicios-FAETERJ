#include <stdio.h>
#define TAM 5
void exibeStringInvertida(char s1[], int quant, int cont){

  if (cont < quant){
    exibeStringInvertida(s1, quant, cont+1);
    printf("%c", s1[cont]);
  }
}

int main(void) {
  char s1[TAM]="abcd";
  int cont=0;
  int quant=TAM;

  exibeStringInvertida(s1, quant, cont);
  
  return 0;
}