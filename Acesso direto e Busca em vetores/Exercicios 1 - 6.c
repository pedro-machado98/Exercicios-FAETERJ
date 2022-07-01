/*
Faça um programa para gerenciar a atualização do preço da passagem de diversos
vôos.

Construa vetores paralelos com o número do vôo, valor atual da passagem, a
capacidade do avião, número de lugares ocupados no vôo. O programa deverá
mostrar os preços (atuais ou modificados) das passagens. O preço da passagem é
acrescido de 30% caso o vôo esteja com 80% da ocupação.

Seu programa deve utilizar a função:
void modifica_passagem(...): que recebe o preço atual da passagem, a capacidade
do avião e o número de lugares ocupados e modifica o preço da passagem se for o
caso.
*/

#include <stdio.h>
#define TAM 2

void modifica_passagem(float vPassagem[], int vCapacidade[], int vOcupacao[], int pos) {
  int i;
  float passagemAcrescimo = 0;

  vPassagem[pos] = vPassagem[pos] * 1.3;
  passagemAcrescimo = vPassagem[pos];
}

void inic_vetor(int vN[], int contador) {
  int i;
  for (i = 0; i < contador; i++) {
    vN[i] = 0;
  }
}

int main(void) {
  int numeroDoVoo, vNumeroDoVoo[TAM], vCapacidade[TAM], vOcupacao[TAM],
      vContadorPassagem[TAM], i, pos, passagem, vContaPassagem[TAM];
  float valorPassagem, vPassagem[TAM];

  inic_vetor(vContaPassagem, TAM);

  for (i = 0; i < TAM; i++) {
    printf("\nRegistre o numero do voô de 1 a 8: ");
    scanf("%d", &numeroDoVoo);
    pos = numeroDoVoo - 1;
    printf("Registre o valor atual da passagem do voô %d: ", numeroDoVoo);
    scanf("%f", &vPassagem[pos]);
    printf("Registre quantos assentos existem no avião do voô %d: ",
           numeroDoVoo);
    scanf("%d", &vCapacidade[pos]);
    printf("Registre quantos lugares estão ocupados no voô %d: ", numeroDoVoo);
    scanf("%d", &vOcupacao[pos]);
  }

  printf("\n\n\nDigite o numero do voô que deseja comprar de 1 a 8: ");
  scanf("%d", &numeroDoVoo);

  while (numeroDoVoo > 0 && numeroDoVoo < 8) {
    pos = numeroDoVoo - 1;
    printf("Digite quantas passagens deseja comprar: ");
    scanf("%d", &passagem);

    if (vCapacidade[pos] >= passagem) {
      vOcupacao[pos] += passagem;
      if (vOcupacao[pos] > vCapacidade[pos] * 0.8 && vContaPassagem[pos] == 0) {
        modifica_passagem(vPassagem, vCapacidade, vOcupacao, pos);
        vContaPassagem[pos]++;
      }
      printf("\nO preço da passagem do voô %d está: R$%.2f", numeroDoVoo,
             vPassagem[pos]);
      printf("\nO valor total é: R$%.2f", vPassagem[pos] * passagem);
    } else {
      printf("\n\nVenda não realizada. Temos %d passagens para o voô %d",
             vCapacidade[pos], numeroDoVoo);
    }

    printf("\n\nDigite o numero do voô que deseja comprar de 1 a 8: ");
    scanf("%d", &numeroDoVoo);
  }

  return 0;
}