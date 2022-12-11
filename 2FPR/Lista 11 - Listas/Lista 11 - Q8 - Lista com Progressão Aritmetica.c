/*
Implementar uma função que crie uma lista encadeada (dinâmica) com os N primeiros termos de uma PA (progressão aritmética) de razão R e primeiro termo igual a A1.
*/

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef struct no{
  int valor;
  struct no *prox;
  }Tno;

typedef Tno *TLista;

int questao8(TLista *l, int n, int razao, int a1){

  TLista aux, novo;
  int cont=0;

  while (cont < n){
    novo = (TLista)malloc(sizeof(Tno));
    //se a lista estiver vazio, ou seja, primeiro numero, inserimos a1
    if((*l) == NULL){
      novo -> valor = a1;
      novo -> prox = NULL;
      *l = novo;
      cont++;
    } else{
      aux = (*l);
      novo -> valor = (razao * cont) + a1;
      novo -> prox = NULL;
      while(aux -> prox){
        aux = aux -> prox;
      }
      aux -> prox = novo;
      cont++;
    }
  }
  return TRUE;
}

void exibe (TLista l){

  TLista aux = l;

  while (aux){
    printf("%d ", aux -> valor);
    aux = aux -> prox;
  }
}


int main(void) {
  TLista l = NULL;
  questao8(&l, 5, 2, 4);
  exibe(l);
  return 0;
}