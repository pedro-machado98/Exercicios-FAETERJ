/*Uma agência de publicidade deseja promover uma mega festa junina, vendendo ingressos com descontos especiais para empresas. Escolheu a seguinte estratégia de desconto:

O valor do ingresso normal do evento é lido inicialmente do teclado.. Faça um programa MODULARIZADO que capture código da empresa e o número de funcionários da mesma, mostrando para a empresa, seu código, a quantidade de ingressos que tem direito e o valor total a pagar por tais ingressos. A entrada de dados termina com um código de empresa = 0*/


#include <stdio.h>

void qtdingressos (int qtdfuncionarios, float *desconto, int *qtdIngressos){

  if(qtdfuncionarios<=10){
    *qtdIngressos = 0.45 * qtdfuncionarios;
    *desconto=0.1;
  }
  else{
    if(qtdfuncionarios<=50){
      *qtdIngressos = 0.24 * qtdfuncionarios;
      *desconto=0.25;
    }
    else{
      if(qtdfuncionarios<=90){
        *qtdIngressos = 0.32 * qtdfuncionarios;
        *desconto=0.35;
      }
      else{
        *qtdIngressos = 0.40 * qtdfuncionarios;
        *desconto=0.4;
      }
    }
  }
}

int main(void) {
  float vIngresso, aPagarTotal, desconto;
  int funcionarios, codigo, ingresso, qtIngressos;
  
  printf("\nDigite o valor do ingresso: ");
  scanf("%f",&vIngresso);
  printf("\nDigite o codigo da empresa: ");
  scanf("%d",&codigo);
  
  while(codigo!=0){
    printf("\nDigite o numero de funcionarios da empresa: ");
    scanf("%d",&funcionarios);
    qtdingressos(funcionarios, &desconto, &qtIngressos);
    aPagarTotal=vIngresso*(1-desconto)*qtIngressos;
    printf("\n\nEmpresa: %d\nQuantidade de Ingressos: %d\nValor a pagar total: %.2f", codigo, qtIngressos, aPagarTotal);
 
    printf("\n\nDigite o codigo da empresa:");
    scanf("%d",&codigo);
  } 
  return 0;
}