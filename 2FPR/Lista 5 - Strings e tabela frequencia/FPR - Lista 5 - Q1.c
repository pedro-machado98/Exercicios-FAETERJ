/*
Implementar uma função que, dada uma string s, determine a quantidade de
caracteres distintos em s.
*/
#include <stdio.h>
#include <string.h>

int busca(char vetor[], char valor) {
  int i;
  for (i = 0; vetor[i]; i++) { //atualização antes vetor[i] != '\0', depois apenas vetor[i]
    if (vetor[i] == valor) {
      return i;
    }
  }
  return -1;
}

int verificaCaracteresDistintos(char vetor[]) { // este considera 1
  int i, j=0, tamanho, pos;
  char vetoraux[20];
  
  for (i=0; vetor[i]!='\0'; i++){
    pos=busca(vetoraux, vetor[i]);
    if (pos==-1){
      vetoraux[j]=vetor[i];
      j++;
    }
  }
  return j; //o proprio J é o valor dos distintos
}

int main(void) {
  char string[20] = "repeteco"; // 8 caracteres sendo 6 distintos reptco
  int a;
  a = verificaCaracteresDistintos(string);
  printf("%d", a);
  return 0;
}