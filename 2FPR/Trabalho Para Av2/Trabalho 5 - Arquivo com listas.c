/*
Desenvolver uma função que, dado um arquivo com números inteiros, um por linha,
crie uma lista encadeada L com a seguinte característica:

Cada nó de L terá os seguintes campos: valor (cada número distinto existente no
arquivo), quantidade (quantas vezes o número armazenado no campo valor
encontra-se no arquivo), prox (endereço do próximo nó da lista).
*/

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef struct no {
  int valor;
  int quantidade;
  struct no *prox;
} Tno;

typedef Tno *Tlista;

void exibir(Tlista l) {
  Tlista aux = l;

  while (aux) {
    printf("\n\nValor: %d\nQuantidade: %d", aux->valor, aux->quantidade);
    aux = aux->prox;
  }
}


int atividade1(Tlista *l, char arquivo[]) {

  FILE *arq;
  Tlista novo, aux, aux2;
  int valor;
  int flag=0;
  
  arq = fopen(arquivo, "r");

  if (!arq){
    fclose(arq);
    return FALSE;
  }
  else{

    while (fscanf(arq, "%d", &valor) != EOF ){
      flag = 0;
      aux = *l;
      
      if ( (*l) == NULL ){
      novo = (Tlista)malloc(sizeof(Tno));
      novo -> prox = NULL;
      novo -> valor = valor;
      novo -> quantidade = 1;
      (*l) = novo;
      }
      else{
        while (aux){
          if (aux -> valor == valor){
            aux -> quantidade++;
            flag = 1;
          }
          aux2 = aux;
          aux = aux -> prox;
        }
          if (flag == 0 ){
            novo = (Tlista)malloc(sizeof(Tno));
            novo -> prox = NULL;
            novo -> valor = valor;
            novo -> quantidade = 1;
            while (aux2 -> prox){
              aux2 = aux2 -> prox;
            }
            aux2 -> prox = novo;
          }
          
        
        
      }
      
    }
    return TRUE;
    



      
      
  }
}

int main(void) {

  char arquivo[20];
  Tlista l = NULL;
  int resp;

  printf("Digite o nome do primeiro arquivo a ser lido: ");
  scanf(" %[^\n]", arquivo);

  resp = atividade1(&l, arquivo);

  printf("Resp: %d\n\n\n", resp);
  exibir(l);
  return 0;
}