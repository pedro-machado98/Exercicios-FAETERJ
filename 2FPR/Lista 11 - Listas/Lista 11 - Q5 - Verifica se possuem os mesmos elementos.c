/*
Implementar uma função que, dadas duas listas dinâmicas do tipo TLista, verifique se elas possuem os mesmos elementos, independente da ordem na qual apareçam.
*/

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef struct no {
  int valor;
  struct no *prox;
} Tno;

typedef Tno *Tlista;

int questao5 (Tlista l1, Tlista l2){
  Tlista aux1, aux2;

  aux1 = l1;
  aux2 = l2;

  while (aux1 && aux2){
    if ( aux1 -> valor != aux2 -> valor){
      aux2 = aux2 -> prox;
      if ( aux2 == NULL){ // se entrar aqui é pq este valor não existe na lista
        return 0;
      }
    }
    else{
      aux1 = aux1 -> prox;
      aux2 = l2;
    }
  }
  return 1;
}


int main(void) {
  printf("Hello World\n");
  return 0;
}