/*
1. Uma companhia aérea possui 8 tarifas diferentes para seus vôos. Faça um programa para gerenciar a venda de passagens de um vôo.

a) Construa vetores paralelos com o número da tarifa, valor da tarifa e número de lugares disponíveis no vôo nesta tarifa. O programa deverá permitir que o usuário digite o código da tarifa e a quantidade de lugares desejados e informar se foi possível realizar a venda (atualizando a quantidade de lugares disponíveis).

O programa deve terminar quando o usuário digitar o código 0 (zero) para o código do vôo
Versão a) Considere que as tarifas são codificadas de 1 a 8
  */

#include <stdio.h>
#define tam 3


int main(void) {
  int voo, vNumeroTarifa[tam]={1,2}, vNumeroLugares[tam]={10,5}, i;
  int tarifa, pos, qtdLugares, qtdLugaresFinal;
  float vValorTarifa[tam], valorapagar;


  for (i=0;i<tam;i++){
    printf("Digite o valor da tarifa %d: ", i+1);
    scanf("%f", &vValorTarifa[i]);
    printf("Digite quantos lugares estão disponiveis na tarifa %d: ", i+1);
    scanf("%d", &vNumeroLugares[i]);
  }
  
  printf("\nDigite o codigo do vôo: ");
  scanf("%d", &voo);
  while (voo!=0){
    printf("\nDigite o codigo da tarifa que deseja entre 1 e %d: ", tam);
    scanf("%d", &tarifa);
    pos=tarifa-1;
    printf("\nDigite quantos lugares deseja: ");
    scanf("%d", &qtdLugares);
    
    if (vNumeroLugares[pos]>=qtdLugares){
      printf("\nVenda realizada %d lugares comprados.",qtdLugares);
      valorapagar=qtdLugares*vValorTarifa[pos];
      printf("\nValor total a pagar %.2f", valorapagar);
      vNumeroLugares[pos]=vNumeroLugares[pos]-qtdLugares;
    }
    else{
      printf("\nVenda não realizada, temos apenas %d lugares para a tarifa %d.", vNumeroLugares[pos], tarifa);
    }
  printf("\nDigite o codigo do vôo: ");
  scanf("%d", &voo);  
  }
  
  return 0;
}