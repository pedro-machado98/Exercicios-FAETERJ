/*
Desenvolver uma função que, dada uma lista L1, crie uma nova lista L2, cópia de L1.
*/

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef struct no{
  int valor;
  struct no *prox;
}Tno;

typedef Tno *Tlista;



int questao6(Tlista l1, Tlista *l2){

  Tlista aux1 = l1;
  Tlista auxNovo;
  Tlista novo;


  while (aux1){
    novo = (Tlista) malloc (sizeof(Tno));
  
    if (novo){
      
      novo -> valor = aux1 -> valor;
      novo -> prox = NULL;
      
      if (*l2 == NULL){
        *l2 = novo;
        auxNovo = novo;
      }
      else{
        auxNovo -> prox = novo;
        auxNovo = novo;
      }      
      aux1 =  aux1 -> prox;
    }
    else{
      return FALSE;
    }
  }
  return TRUE;
}


int main(void) {
  printf("Hello World\n");
  return 0;
}