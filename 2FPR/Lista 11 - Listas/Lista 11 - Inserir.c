#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef struct no {
  int valor;
  struct no *prox;
} Tno;

typedef Tno *Tlista;
// insere no inicio
int inserir(Tlista *l, int inserido) {

  Tlista aux;

  aux = (Tlista *)malloc(sizeof(Tno));

  if (aux) {
    aux->valor = inserido;
    aux->prox = *l; // o proximo de aux aponta para o endereço de L
    *l = aux;       // l aponta para aux
    return TRUE;
  } else {
    return FALSE;
  }
}

// INSERE NO FINAL

int inserirFinal(Tlista *l, int inserido) {
  Tlista aux, sup;

  aux = (Tlista *)malloc(sizeof(Tno));

  if (aux) {
    aux->valor = inserido; // coloca o valor que queremos inserir no lugar
    aux->prox = NULL; // como inserimos no final, o proximo sempre será NULL
    if (*l) {         // a lista está vazia? (*l==null) ou seja, false
      sup = *l; // usar variavel de suporte para não perder o endereço da lista
      while (sup->prox != NULL) { // andando com a lista até o final
        sup = sup->prox;
      }
      sup->prox = aux; // chegamos no final e agora o proximo endereço do final
                       // é o nó aux
      return TRUE;
    } else {
      *l = aux; // estando vazia voce aloca o primeiro nó e retorna, apenas.
      return TRUE;
    }
  } else {
    printf("Deu não fml");
    return FALSE;
  }
}

int main(void) {
  printf("Hello World\n");
  return 0;
}