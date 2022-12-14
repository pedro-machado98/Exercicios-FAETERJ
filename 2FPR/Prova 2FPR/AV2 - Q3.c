/*
Dada uma lista encadeada L, do tipo TLista, desenvolver uma função que exiba seus elementos na ordem inversa. Ou seja, se o ponteiro L estiver apontando para um nó que contém o valor 10, o 10 será o último a ser exibido pela função.
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

void questao3(TLista l){

  TLista aux;
  TLista parada = NULL;
  int cont = 0;
  int voltas;
  aux = l;

  if (aux == NULL){
    printf("Lista Vazia!");
  }
  else{
    while(aux){
      cont++;
      aux = aux -> prox;
    }
    
    while (cont != 0){
      aux = l;
      voltas = 1;
      while (voltas < cont){
        aux = aux -> prox;
        voltas++;
      }
      printf("%d ", aux -> valor);
      cont--;
    }
  }
}

int main(void) {
  printf("Hello World\n");
  return 0;
}