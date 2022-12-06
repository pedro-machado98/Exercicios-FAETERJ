/*
Considerando as implementações de listas encadeadas feitas em aula, apresentar o código das funções de inserção, remoção, alteração, busca e exibição para uma lista cujos elementos estejam ordenados crescentemente, além de permitir repetição de valores.
*/
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0


typedef struct no {
  int valor;
  struct no *prox;
} Tno;

typedef Tno *TLista;

int inserir(TLista *l, int numero){
  TLista novo;
  TLista aux = *l;
  novo=(TLista)malloc(sizeof(Tno));
  novo -> valor = numero;

  if (*l == NULL){ //lista vazia
    novo -> prox = NULL;
    *l = novo;
  }
  else{
    if (numero <= aux -> valor){ //se for o primeiro
      novo -> prox = aux;
      *l = novo;
      
    } else{
      while ( aux -> prox -> valor < numero && aux -> prox ){
        aux = aux-> prox;
      }
      novo -> prox = aux -> prox;
      aux -> prox = novo;
    } 
  }
  return TRUE;
}


int remover(TLista *l, int valor){
  TLista aux1, aux2;
  int cont=0;

  if( (*l)->valor == valor ){
    aux1 = *l;
    *l = (*l) -> prox;
    free(aux1);
    cont++;
  } else{
    aux1= *l;
    aux2 = (*l) -> prox;
    while (aux2 -> valor <= valor){
      if (aux2 -> valor == valor){
        aux1 -> prox = aux2 -> prox;
        free(aux2);
        aux2 = aux1 -> prox;
        cont++;
      } else{
        aux2 = aux2 -> prox;
        aux1 = aux1 -> prox;
      }
    }
    return cont;
  }
}

int alterar(TLista *l, int buscado, int inserido){
  int cont=0;
  int remocoes = remover(&l, buscado);
  while (cont < remocoes){
    cont = cont + inserir(&l, inserido);
  }

  return cont;
}

TLista buscar(TLista l, int valor){
  TLista aux;

  aux = l;

  while (aux -> valor <= valor){
    if (aux -> valor == valor){
      return aux;
    }
  }
  return NULL;
}


void exibir(TLista l){
  TLista aux;
  
  aux = l;
  
  while (aux){
    printf("%d ", aux -> valor);
    aux = aux -> prox;
  }
}


int menu() {
  int opcao;
  printf("\n\n\n");
  // exibindo o meu ao usuário
  printf("Menu de Operacoes:\n\n");
  printf("(1) Inserir\n");
  printf("(2) Remover\n");
  printf("(3) Alterar\n");
  printf("(4) Buscar\n");
  printf("(5) Exibir\n");
  printf("(6) Sair\n\n");

  // lendo a opção do usuário
  printf("Entre com a sua opcao: ");
  scanf("%d", &opcao);

  // retornando a opção escolhida
  return opcao;
}

int main(void) {
  // declaração de variáveis
  TLista L = NULL;
  int num1, num2, op, quant, resp;

  do {

    // exibindo o meu ao usuário
    op = menu();

    // verificando a opção escolhida
    switch (op) {
    // Inserção
    case 1:
      printf("\nEntre com o valor a ser inserido: ");
      scanf("%d", &num1);

      // chamando a função
      if (inserir(&L, num1) == TRUE) {
        printf("\n\tInsercao realizada com sucesso!");
      } else {
        printf("\n\tERRO: insercao nao realizada!");
      }
      break;

    // Remoção
    case 2:
      printf("\nEntre com o valor a ser removido: ");
      scanf("%d", &num1);

      // chamando a função
      quant = remover(&L, num1);

      if (quant > 0) {
        printf("\n\t%d remocoes realizadas!", quant);
      } else {
        printf("\n\tERRO: remocao nao realizada!");
      }
      break;

    // Alteração
    case 3:
      printf("\nEntre com o valor a ser alterado: ");
      scanf("%d", &num1);

      printf("\nEntre com o novo valor: ");
      scanf("%d", &num2);

      // chamando a função
      quant = alterar(L, num1, num2);

      if (quant > 0) {
        printf("\n\t%d alteracoes realizadas!", quant);
      } else {
        printf("\n\tERRO: alteracao nao realizada!");
      }
      break;

    // Busca
    case 4:
      printf("\nEntre com o valor a ser buscado: ");
      scanf("%d", &num1);

      // chamando a função
      resp = buscar(L, num1);

      if (resp == TRUE) {
        printf("\n\tO valor %d foi encontrado na lista!", num1);
      } else {
        printf("\n\tO valor %d NAO foi encontrado na lista!", num1);
      }
      break;

    // Exibir
    case 5:
      exibir(L);
      break;

    // Saída
    case 6:
      printf("\n\nPrograma finalizado!");
      break;

    default:
      printf("\n\nOpcao invalida! Tente novamente.");
    }

  } while (op != 6);
}