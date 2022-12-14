/*
Fazer uma função que, dada uma lista encadeada L, do tipo TLista, e duas posições p1 e p2, remova todos os elementos de L existentes entre estas posições.
*/


#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0


typedef struct no {
  int valor;
  struct no *prox;
} Tno;

typedef Tno *TLista;

int questao4(TLista *l, int p1, int p2){
  TLista aux1;
  TLista aux2;
  int cont = 1;
  aux1 = *l;
  aux2 = (*l) -> prox;

  if ( (p2 < p1) || (p1 < 1) || (p2 < 1) ){
    return FALSE;
  }

  while ( aux1 -> prox ){
    aux1 = aux1 -> prox;
    cont++;
  }
  
  if (cont < p2){
    return FALSE;
  }

  aux1 = *l;
  cont = 1;  //talvez mudar depois para excluir inclusivo
  
    while (cont < p1-1){
      aux1 = aux1 -> prox;
      cont++;
    }
    while (cont < p2){
      aux2 = aux1 -> prox;
      aux1 -> prox = aux2 -> prox;
      free(aux2);
      aux2 = aux1 -> prox;
      cont++;
    }
  
  
  return TRUE;
}


int main(void) {
  printf("Hello World\n");
  return 0;
}