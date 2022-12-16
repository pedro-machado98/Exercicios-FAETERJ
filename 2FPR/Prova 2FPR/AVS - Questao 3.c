#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0


typedef struct no {
  int valor;
  struct no *prox;
} Tno;

typedef Tno *TLista;

void troca(int *a, int *b) {
  int k = *a;
  *a = *b;
  *b = k;
}

void trocaListaRec(TLista aux1, TLista aux2) {
  if (aux2) {
    troca(&(aux1->valor), &(aux2->valor));
    if (aux1->prox && aux2 -> prox){
      trocaListaRec(aux2->prox, (aux2->prox)->prox);
    }
  }
}

void questao3(TLista L) { trocaListaRec(L, L->prox); }


int main(void) {
  printf("Hello World\n");
  return 0;
}