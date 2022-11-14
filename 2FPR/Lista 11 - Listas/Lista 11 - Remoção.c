#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  int valor;
  struct no *prox;
} Tno;

typedef Tno *Tlista;

int remover(Tlista *l, int removido) {

  Tlista aux1, aux2;
  int cont = 0;

  // preciso revisar quando é o primeiro caso!!!!
  if ((*l)->valor == removido) { // se ja aponta para o valor
    aux1 = *l;
    (*l) = (*l)->prox; // anda para o proximo
    free(aux1);
    cont++;
  } else {

    if (*l) { // se não for nulo
      aux1 = *l;
      aux2 = (*l)->prox;

      while (aux2) {
        if (aux2->valor == removido) {
          aux1->prox = aux2->prox;
          free(aux2);
          aux2 = aux1->prox;
        } else {
          aux1 = aux2;
          aux2 = aux2->prox;
        }
      }
    }
  }
}

int main(void) {
  printf("Hello World\n");
  return 0;
}