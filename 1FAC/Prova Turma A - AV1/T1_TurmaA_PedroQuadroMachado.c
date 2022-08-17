/*
  NOME: Pedro Quadro Machado
  TURMA: Turma A
*/

#include <stdio.h>

int main(void) {
  float tempo, compra, desconto, descontocompra;
  float percent;
  int idade;
  
  printf("Quanto tempo você é cliente?\n");
  scanf("%f",&tempo);
  printf("Qual foi o valor da compra?\n");
  scanf("%f",&compra);
  
  if (tempo <= 10){
    percent = 0;
  }
  else {
    if (tempo <= 29){
      percent = 0.09;
    }
    else {
      if (tempo <= 45){
        percent = 0.12;
      }
      else {
        percent = 0.15;
      } 
      printf("Qual a sua idade?\n");
      scanf("%d", &idade);
      if (idade >= 60){
        percent = percent+0.05;
      }
    }
  }
  desconto = compra*percent;
  descontocompra = compra - desconto;
      
  printf("Valor comprado: R$ %.2f\n", compra);
  printf("Desconto: R$ %.2f\n", desconto);
  printf("Valor a pagar: R$ %.2f\n", descontocompra);
  return 0;
}