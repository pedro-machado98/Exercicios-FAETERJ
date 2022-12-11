/*
Implementar uma função que, dada uma lista dinâmica do tipo TLista, verifique se os elementos da estrutura encontram-se ordenados de forma crescente ou não.
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

int questao9 (TLista l){

  TLista aux;
  aux = l;

  while (aux -> prox){
    if (aux -> valor > aux -> prox -> valor){
      return FALSE;
    }
    aux =  aux -> prox;
  }
  return TRUE;
}

int inserir (TLista *l, int numero ) {

  TLista novo, aux;
  novo = (TLista)malloc(sizeof(Tno));

  if (novo) {
    novo -> valor = numero;
    novo -> prox = NULL;
    //verifica se a lista está vazia
    if (*l == NULL) {
      *l = novo;
    }
    else{
      aux = *l;
      while (aux->prox){
        aux = aux -> prox;
      }
      aux -> prox = novo;
    }
    return TRUE;
  }
  else{
    return FALSE;
  }
}


int main(void) {
  
  TLista l = NULL;
  int x=5;
  while (x>=0){
    inserir(&l, x);
    x--;
  }

  int resp = questao9(l);
  printf("Resposta: %d", resp);
  return 0;
}