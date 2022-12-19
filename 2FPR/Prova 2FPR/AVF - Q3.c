/*
Implementar uma função que, dadas duas listas encadeadas A e B, ambas do tipo TLista, gere uma nova lista C (também do tipo TLista), com todos os elementos de A que não estejam em B (respeitando a ordem na qual aparecem na primeira lista).
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


void questao3( TLista l1, TLista l2){
  
  TLista l3 = NULL;

  TLista aux1, aux2, aux3 , novo;

  aux1 = l1;
  aux2 = l2;

  
  while (aux1 != NULL){
    if (aux1 -> valor == aux2 -> valor){
      aux1 = aux1 -> prox;
      aux2 = l2;
    }
    else{
      aux2 = aux2 -> prox;
      if (aux2 == NULL){
        novo = (TLista)malloc(sizeof(Tno));
        novo->valor = aux1 -> valor;
        novo->prox = NULL;
        if (l3 == NULL) {
          l3 = novo;
          aux3 = l3;
        }
        else{
          if( aux3 -> prox == NULL){
            aux3->prox = novo;
          }
          else{
            aux3 = aux3 -> prox;
            aux3 -> prox = novo;
          }
        }
        aux2 = l2;
        aux1 = aux1 -> prox;
        
      }
    }
  }
}


int main(void) {
  printf("Hello World\n");
  return 0;
}