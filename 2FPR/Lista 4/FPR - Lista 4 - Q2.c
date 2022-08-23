/*
Dada uma string s, desenvolver uma função que determine se s é ou não um palíndromo.

Observação: uma string s será um palíndromo quando seus caracteres formarem a mesma sequência, independente se s é percorrida da esquerda para direita ou vice-versa.
*/

#include <stdio.h>
#include <string.h>

int verificaPalindromo (char vetor[]){
  int i, j;

  for ( i=0, j=strlen(vetor) ; (i<j) && (vetor[i]==vetor[j-1]) ; i++,j-- );

  if (vetor[i]!=vetor[j-1]){
    return 0;
  }
  return 1;
}

int main(void) {
  printf("\n É palindromo ou não? 1 para sim e 0 para não.\n Resultado: %d", verificaPalindromo("ovo"));
  return 0;
}