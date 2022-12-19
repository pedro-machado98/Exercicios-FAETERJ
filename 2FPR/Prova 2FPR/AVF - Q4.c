#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef struct no {
	int valor;
	struct no* prox;
} Tno;

typedef Tno* TLista;

int inserir(TLista *l, int numero) {

  TLista novo, aux;
  novo = (TLista)malloc(sizeof(Tno));

  if (novo) {
    novo->valor = numero;
    novo->prox = NULL;
    if (*l == NULL) {
      *l = novo;
    } 
    else{
      aux = *l;
      while (aux->prox) {
        aux = aux->prox;
      }
      aux->prox = novo;
    }
    return TRUE;
  } else {
    return FALSE;
  }
}


int empilhar (TLista *P, int numero) {

	TLista aux;
		
	aux = (TLista) malloc (sizeof(Tno));
	
	if (aux == NULL) {
		return FALSE;
	}
	else {
		aux->valor = numero;
		aux->prox = *P;		
		*P = aux;
		return TRUE;
	}
}

int desempilhar (TLista *P, int *numero) {
	TLista aux;
  TLista l1 = NULL;
	
	if (*P == NULL) {
		return FALSE;
	}
	else {
		aux = (*P)->prox;
		*numero = (*P)->valor;  		
  	free (*P);  		
  	*P = aux;   
    
		return TRUE;
	}
}

int questao4(TLista *P){
  TLista l = NULL;
  int numero;
  
  while( *P  ){
    if(desempilhar(&*P, &numero)){
      inserir(&l, numero);
    }
    else{
      return FALSE;
    }
  }

  while(l){
    if(empilhar(&*P, l -> valor)){
      l = l -> prox;
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