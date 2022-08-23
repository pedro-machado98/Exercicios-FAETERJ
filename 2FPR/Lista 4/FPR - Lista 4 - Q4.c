/*
Implementar uma função que remova todas as ocorrências de determinado caracter em uma string.
*/

#include <stdio.h>
#include <string.h>

void removeLetra(char vetor[], char letraExcluida){
  char vetoraux[50];
  int i,j;

  for ( i=0, j=0 ; vetor[i] != '\0' ; i++ ){
    if (vetor[i]!=letraExcluida){
      vetoraux[j]=vetor[i];
      j++;
    }
  }
  strcpy(vetor,vetoraux);
}

int main(void) {
  char vetor[50]="algoritmo";
  char letraExcluida='o';
  
  removeLetra(vetor, letraExcluida);

  printf("Vetor: %s", vetor);
  return 0;
}