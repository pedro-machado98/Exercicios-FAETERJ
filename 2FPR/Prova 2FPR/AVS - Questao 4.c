/*
Fazer uma função que, dadas duas listas encadeadas L1 e L2, ambas do tipo TLista e com quant elementos, determine se elas possuem os mesmos valores, porém na ordem inversa.
*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef struct no{
 int valor;
 struct no *prox;
}Tno;

typedef Tno *TLista;

int questao4(TLista l1, TLista l2, int quant){

  int cont = 0;
  int contMax = quant;
  TLista aux1;
  TLista aux2;

  aux1 = l1;
  aux2 = l2;
  
  while (contMax > quant/2){
    while(cont < contMax && aux2 -> prox){
      aux2 = aux2 -> prox;
      cont++;
    }
    if (aux1 -> valor != aux2 -> valor){
      return FALSE;
    }
    contMax--;
    aux2 = l2;
  }

  return TRUE;
}

int main(void) {
  TLista l1 = NULL;
  TLista l2 = NULL;
  int quant;

  printf("Quantos numeros vão existir na lista: ");
  scanf("%d", &quant);
  questao4(l1, l2, quant);
  return 0;
}