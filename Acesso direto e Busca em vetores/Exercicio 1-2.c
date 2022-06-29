/*
Faça um programa que sorteie 20 valores entre 0 e 3000 mostrando a quantidade de ocorrências dos valores pares sorteados
*/


#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 20
#define SORT 20

void inic_vetor(int n, int v[]){
  int i; //sempre se deve inicializar o vetor
  for (i=0;i!=n;i++){
    v[i]=0;
  }
}

void exibe_tabela(int vValores[], int vQtdades[], int lugar){
  int i; //função para exibir os contadores
  printf("\n Numero \t Quantidade");
  for (i=0;i<lugar;i++){
    printf("\n %-6d \t %6d", vValores[i], vQtdades[i]);
  }
}

int busca(int v[], int n, int num){ // realiza busca 
  int i;
  for (i=0;i<n;i++){ //serve para buscar quando não se consegue fazer acesso direto
    if (v[i]==num){
      return i;
    }
  }
  return -1;
}

int main(void) {
  int vValores[TAM];
  int vQtdades[TAM];
  int i, nRandomico, pos, contaRodadas=0, lugar=0;
  
  inic_vetor(TAM, vValores);
  inic_vetor(TAM, vQtdades);
  srand(time(NULL)); //inicializa a função rand
  nRandomico=(rand()%3000);
  
  while (contaRodadas<2000){
    if (nRandomico%250==0){
      pos = busca(vValores, lugar, nRandomico);
      if(pos != -1){
        vQtdades[pos]++;
      }
      else{
        vValores[lugar]=nRandomico;
        vQtdades[lugar]=1;
        lugar++;
      }
    }
    nRandomico=(rand()%2999)+0;
    contaRodadas++;
  }
  exibe_tabela(vValores, vQtdades, lugar);
  return 0;
}