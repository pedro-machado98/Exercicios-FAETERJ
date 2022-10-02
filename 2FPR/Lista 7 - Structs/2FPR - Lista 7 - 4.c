/*

Suponha a existência de um vetor de tamanho TAM, cada posição armazenando o nome da pessoa e a sua data de aniversário (representada por um struct do tipo TData, contendo os campos dia e mes). Pede-se o desenvolvimento das seguintes funções:

- Determinar a quantidade de pessoas que fazem aniversário no mês M;
- Exibir os nomes de todas pessoas que fazem aniversário entre as datas d1 e d2, ambas do tipo TData.

*/

#include <stdio.h>
#include <string.h>
#define TAM 4

typedef struct{
int dia;
int mes;
}TData;

typedef struct{
char nome[30];
TData aniversario;
}Tstruct;

int exibeQTDPessoasAniversarioMes(Tstruct vetor[], TData mes){
  int contador=0;
  for (int i=0; i<TAM ; i++ ){
    if (mes.mes == vetor[i].aniversario.mes){
      contador++;
    }
  }
  return contador;
}

void exibeNomeDasPessoasDoPeriodo(Tstruct vetor[], TData dia1, TData dia2){
  
  for(int i=0 ; i<TAM ; i++){
    if( (vetor[i].aniversario.mes>dia1.mes) && (vetor[i].aniversario.mes<dia2.mes) ){
      printf("\n%s", vetor[i].nome);
    }
    else{
      if(  ((vetor[i].aniversario.mes==dia1.mes) || (vetor[i].aniversario.mes==dia2.mes)) && ((vetor[i].aniversario.dia>=dia1.dia) || (vetor[i].aniversario.dia<=dia2.dia)) ){
        printf("\n%s", vetor[i].nome);
      }
    }
  }
}

int main(void) {
  TData mes;
  TData dia1;
  TData dia2;
  Tstruct vetor[TAM];
  int qtdpessoas;

  //preenchdendo struct
  strcpy(vetor[0].nome, "Pedro");
  vetor[0].aniversario.dia=22;
  vetor[0].aniversario.mes=02;
  strcpy(vetor[1].nome, "Gabriela");
  vetor[1].aniversario.dia=19;
  vetor[1].aniversario.mes=06;
  strcpy(vetor[2].nome, "Thales");
  vetor[2].aniversario.dia=16;
  vetor[2].aniversario.mes=01;
  strcpy(vetor[3].nome, "Matheus");
  vetor[3].aniversario.dia=13;
  vetor[3].aniversario.mes=10;

  // Função a
  printf("\nDigite o mês do aniversario que deseja consultar: ");
  scanf("%d", &mes.mes);
  qtdpessoas=exibeQTDPessoasAniversarioMes(vetor, mes);
  printf("Existem %d pessoas que fazem aniversario no mês %d", qtdpessoas, mes.mes);
  printf("\n");
  //Função b
  printf("\nDigite o primeiro dia do periodo que deseja consultar: ");
  scanf("%d", &dia1.dia);
  printf("\nDigite o primeiro mes do periodo que deseja consultar: ");
  scanf("%d", &dia1.mes);
  printf("\nDigite o segundo dia do periodo que deseja consultar: ");
  scanf("%d", &dia2.dia);
  printf("\nDigite o segundo mes do periodo que deseja consultar: ");
  scanf("%d", &dia2.mes);
  
  exibeNomeDasPessoasDoPeriodo(vetor, dia1, dia2);
  
  return 0;
}
