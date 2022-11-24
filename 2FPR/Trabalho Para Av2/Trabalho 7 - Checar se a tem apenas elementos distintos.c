/*Implementar uma função que, dada uma lista encadeada L, do tipo TLista, determine se todos os seus elementos são distintos.*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef struct no{
 int valor;
 struct no *prox;
}Tno;

typedef Tno *Tlista;

//verificar se sÃ³ tem valores distintos
int atividade7 (Tlista l){
  Tlista aux;

  aux = l;
  while (l){
    while (aux){
      if (l -> valor == aux -> valor){
        return FALSE;
      }
      aux = aux -> prox;
    }
    l = l -> prox;
  }
  return TRUE;
}

int inserir (Tlista *l, int inserido){
  Tlista aux;

  aux = (Tlista*)malloc(sizeof(Tno));

  if (aux){
    aux -> valor = inserido;
    aux -> prox = *l; //o proximo de aux aponta para o endereÃ§o de L
    *l = aux; //l aponta para aux
    return TRUE;
  }
  else{
    return FALSE;
  }
}

void exibir (Tlista l){
  Tlista aux;
  aux = l;
  while (aux){
    printf("%d ", aux -> valor);
    aux = aux-> prox;
  }
}


int main(void) {
  Tlista l = NULL;
  int i=0;
  int resp;
  while (i < 5){
    printf("Digite ai: ");
    scanf("%d", &resp);
    inserir(&l, resp);
    i++;
  }
  
  exibir(l);
  
  printf("\n");
  
  if (atividade7(l)){
    printf("Distintos");
  }
  else{
    printf("Repetidos");
  }
  
  return 0;
}