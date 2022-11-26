/*
Desenvolver uma função que insira um número inteiro N na i-ésima posição de uma lista encadeada L.
Observação: caso a posição i informada seja inválida, a função deverá retornar o valor 0; caso contrário, o retorno será igual a 1.
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


int questao7(Tlista *l, int n){

  Tlista aux1, aux2;
  Tlista novo;
  int cont=2;

  novo = (Tlista)malloc(sizeof(Tno));
  novo -> valor = n;
  aux1 = *l;
  aux2 = (*l) -> prox;

  if (novo){
    // se N não for negativo
    if (n > 0){
      if ( n == 1){
        novo -> prox = *l;
        *l = novo;
        return TRUE; 
        
      } else{
        while (aux1){
          if (cont == n){
            novo -> prox = aux1 -> prox;
            aux1 -> prox = novo;
            return TRUE; 
          }
          cont++;
          aux1 = aux1 -> prox;
          if (aux1 == NULL){
            return FALSE;
          }
        } 
          
        }  
    } else{
      return FALSE;
      }

  } else{
    return FALSE;
  }
}
