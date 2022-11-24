/*Desenvolver uma função que, dado um vetor com quant números inteiros, crie uma lista encadeada L, do tipo TLista, contendo os números do vetor ordenados crescentemente e sem repetição.*/

#include <stdlib.h>
#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define QUANT 10

typedef struct no{
  int valor;
  struct no *prox;
}Tno;

typedef Tno *Tlista;

void exibir (Tlista l){
  
  Tlista aux;
  aux = l;
  
  while (l){
    printf("%d ", l->valor);
    l = l -> prox;
  }
}

int atividade5 (Tlista *l, int vetor[], int qtdpos){

  Tlista aux;
  Tlista novo;
  int i = 0;

  novo = (Tlista*)malloc(sizeof(Tno));

  while (i < qtdpos){
    if(novo){
      
      novo -> valor = vetor[i];
      
      if (*l == NULL){ //Ã© o primeiro no?
        novo -> prox = NULL; 
        *l = novo;
        novo = (Tlista*)malloc(sizeof(Tno));
      }
      else{
        if (novo -> valor < (*l)->valor ){  //o novo Ã© menor que o primeiro valor?
          novo -> prox = *l;
          *l = novo;
          novo = (Tlista*)malloc(sizeof(Tno));
        }
        else{  //inserir no meio ou no final
          aux = *l;

          while ( aux -> prox && novo -> valor > aux -> prox -> valor){
            aux = aux -> prox;
          }
          novo -> prox = aux -> prox;
          aux -> prox = novo;
          novo = (Tlista*)malloc(sizeof(Tno));
        }
      }
    }
    else{
      return FALSE;
    }
    aux = *l;     //reseta o aux para o inicio da lista
    i++;          //anda com o indice do vetor
    while ( aux ){//se aux for nulo, ele nÃ£o precisa verificar se o valor em aux Ã© igual ao vetor
      while (aux -> valor == vetor[i]){
        i++;
      } 
      aux = aux->prox;  //anda mas sÃ³ depois de passar de todos os numeros do vetor iguais ao aux -> valor
    } 
  }
}

int main(void) {

  int vetor[QUANT]={9,9,9,0,5,9,3,0,0,0};
  Tlista l = NULL;
  int resp;
  
  resp = atividade5(&l, vetor, QUANT);

  exibir(l);
  
  return 0;
}


int atividade52(Tlista *l, int vetor[], int qtdpos){
  
  Tlista aux;  //insere na lista
  Tlista sup;  //checa a lista 
  Tlista varre; //le a lista

  int i=0;

  aux = (Tlista*)malloc(sizeof(Tno));
  sup = aux; //inicializando sup

    //inserindo os valores
  for ( int i = 0 ; i < qtdpos ; i++){
    if(aux){
      if (sup -> valor != vetor[i]){
        aux -> valor = vetor[i];
        aux -> prox = *l;
        *l = aux;
        sup = aux;
        aux = (Tlista*)malloc(sizeof(Tno));
      
      }
  
    }
    else{
    return FALSE;
    }
  }
}