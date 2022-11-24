/*
Fazer uma função que, dados uma lista encadeada L, do tipo TLista, cujos elementos estão ordenados crescentemente, e um número n, remova todas as ocorrências de n em L.
*/

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1;
#define FALSE 0;

typedef struct no {
  int valor;
  struct no *prox;
} Tno;

typedef Tno *Tlista;

int atividade8(Tlista *l, int n) {
  Tlista aux1, aux2;
  int cont = 0;
  
  aux1 = *l;
  aux2 = (*l)->prox;
  
  while (*l){
    // se for o primeiro que deve ser removido
    if ( (*l)->valor == n ) {
      aux1 = *l;
      *l = (*l) -> prox;
      free(aux1);
      cont++;
    }
    //se for  qualquer outro no resto da lista
    else {
      if ( aux2 && (aux2 -> valor == n) ){
        aux1 -> prox = aux2 -> prox;
        free(aux2);
        aux2 = aux1 -> prox;
        cont++;
      }
      else{
        aux1 = aux2;
        aux2 = aux2 -> prox;
      } 
    }

    if ( (aux2 -> valor > n) || (aux2 == NULL) ){
      return cont;
    }
  }
}

int main(void) {

  Tlista l = NULL;
  int n = 1;

  if (atividade8(&l, n)) {
    printf("Removido!");
  } else {
    printf("Não existe ou não removido");
  }

  return 0;
}