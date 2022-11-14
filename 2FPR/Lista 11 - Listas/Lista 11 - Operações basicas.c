#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0


typedef struct no {
  int valor;
  struct no *prox;
} Tno;

typedef Tno *TLista;

//inserindo no inicio da lista (pilha)
int inserir(TLista *l, int numero){
  
  TLista aux;
  aux = (TLista*) malloc(sizeof(Tno));

  //checar se alocou memoria direitinho
  if (aux == NULL){
    return FALSE;
  }
  else{
    //colocando o numero
    aux -> valor = numero;
    //fazendo o aux apontar para onde o L aponta
    aux -> prox = *l;
    //fazendo o L apontar para o aux
    *l = aux;
    return TRUE;
  }
}

//inserindo no final da lista (fila)
int inserir2 (TLista *l, int numero ) {

  TLista novo, aux;
  novo = (TLista*)malloc(sizeof(Tno));

  if (novo) {
    novo -> valor = numero;
    novo -> prox = NULL;
    //verifica se a lista está vazia
    if (*l == NULL) {
      *l = novo;
    }
    else{
      aux = *l;
      while (aux->prox){
        aux = aux -> prox;
      }
      aux -> prox = novo;
    }
    return TRUE;
  }
  else{
    return FALSE;
  }
}

int remover(TLista *l, int removido){

  TLista aux1, aux2;
  int cont = 0;

  if ( (*l) -> valor == removido ){
    aux1 = (*l);
    (*l) = (*l) -> prox;
    free(aux1);
    cont++;
  }

  if(*l){  //ou seja se *l não for null continue executando
    aux1 = (*l);
    aux2 = (*l) -> prox;
    while(aux2){
      if (aux2 -> valor == removido){
        aux1 -> prox = aux2 -> prox;
        free (aux2);
        cont++;
        aux2 = aux1 -> prox;
      }
      else{
        aux1 = aux2;
        aux2 = aux2 -> prox;
      }
    }
  }
  return cont;
}


TLista buscar(TLista l, int buscado){
  
  while (l != NULL){
    if (l -> valor ==  buscado){
      return l;
    }
    else{
      l = l -> prox;
    }
  }
  return NULL;
}

int alterar(TLista l, int buscado, int substituto){
  int cont;
  
  TLista aux = buscar(l, buscado);
  //nesse caso não existe numeros iguais na lista
  if (aux){
    aux -> valor = substituto;
    cont++;
  }
  else{
    return cont;
  }
  return cont;
}

void exibir (TLista l){
  
  TLista aux;
  aux = l;
  
  while (l){
    printf("%d ", l->valor);
    l = l -> prox;
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
      if (inserir2(&L, num1) == TRUE) {
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