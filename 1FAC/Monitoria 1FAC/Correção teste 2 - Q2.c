/*

De acordo com a tabela em vigor pela Empresa JJJJ na cidade do Riozinho, para um táxi comum, a tarifa inicial - ou bandeirada - custa R$4,30 e para um táxi especial custa R$5,70.  O valor cobrado por cada quilômetro percorrido é determinado pela tabela abaixo:

Nos horários noturnos (de 0:00h às 4:59h e de 22:00h às 23:59) é cobrado um adicional de 20% no valor da tarifa básica e 8% no valor do quilômetro percorrido.

Escreva um programa que pergunte quantas corridas foram realizadas pelos taxis da Empresa JJJ e, para cada corrida, obtenha o tipo de corrida (que pode receber os valores 1 – Comum,2 – Taxi Especial), a hora da corrida (inteiro) e a distância percorrida pelo táxi (em quilômetros). Seu programa deve exibir, para cada corrida, o valor pago pelo passageiro. No final seu programa deverá mostrar o percentual de corridas em taxis especiais e o valor médio das corridas por tipo de taxi.

*/

#include <stdio.h>

int main(void) {
  int cont=0, contEspeciais=0, contNormal=0;
  float valorTotalEspecial=0, valorTotalNormal=0;
  float tarifaBasicaNormal=4.30;
  float tarifaBasicaEspecial=5.70;
  int corridasRealizadas;
  int tipoDeCorrida=1;
  int hora=2;
  float kmRodados=6;
  float valorpago;

  printf("Digite corridas foram realizadas: ");
  scanf("%d", &corridasRealizadas);

  while (cont < corridasRealizadas){
    
  printf("\nDigite o tipo desta corrida (1 para comum e 2 para especial): ");
  scanf("%d", &tipoDeCorrida);
  printf("Digite a hora a corrida (0 até 24): ");
  scanf("%d", &hora);
  printf("Digite quantos KM foram rodados: ");
  scanf("%f", &kmRodados);

    if( (hora < 5)  || (hora > 22 && hora < 24) ){
      if (tipoDeCorrida == 1){
        tarifaBasicaNormal = tarifaBasicaNormal + (tarifaBasicaNormal * 0.2);
        contNormal++;
        if (kmRodados > 5){
          valorpago = kmRodados*1;
        }
        else{
          valorpago = kmRodados*1.25;
        }
        valorpago = valorpago + (valorpago*0.08) + tarifaBasicaNormal;
        valorTotalNormal+=valorpago;
      }
      else{
        tarifaBasicaEspecial=tarifaBasicaEspecial + (tarifaBasicaEspecial * 0.2);
        contEspeciais++;
        if (kmRodados > 5){
          valorpago = kmRodados*1.8;
        }
        else{
          valorpago = kmRodados*2;
        }
        valorpago= valorpago + (valorpago*0.08) + tarifaBasicaEspecial;
        valorTotalEspecial+=valorpago;
      }
    }
    else{
      if (tipoDeCorrida == 1){
        contNormal++;
        if (kmRodados > 5){
          valorpago = kmRodados*1;
        }
        else{
          valorpago = kmRodados*1.25;
        }
        valorpago = valorpago + tarifaBasicaNormal;
        valorTotalNormal+=valorpago;
      }
      else{
        contEspeciais++;
        if (kmRodados > 5){
          valorpago = kmRodados*1.8;
        }
        else{
          valorpago = kmRodados*2;
        }
        valorpago = valorpago + tarifaBasicaEspecial;
        valorTotalEspecial+=valorpago;
      }
    }
    printf("\nValor pago pelo passageiro: %.2f\n", valorpago);
    cont++;
  }
  
  printf("\nPercentual de corridas em taxis especiais: %.2f", (contEspeciais*100.0) / corridasRealizadas);
  printf("\nValor medio corridas normais: %.2f", valorTotalNormal/contNormal);
  printf("\nValor médio corridas especiais: %.2f", valorTotalEspecial/contEspeciais);
  
  return 0;
}

//5.16