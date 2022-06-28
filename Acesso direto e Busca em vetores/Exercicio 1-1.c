/*
Faça um programa em C que permita informar a quantidade de ocorrências de cada número entre 20 e 30.
*/


#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 11

void inic_vetor(int n, int v[]){
  int i; //sempre se deve inicializar o vetor
  for (i=0;i!=n;i++){
    v[i]=0;
  }
}

void exibe_contadores(int n, int v[]){
  int i; //função para exibir os contadores
  for (i=0;i<n;i++){
    printf("\n Numero: %d", i+20); 
    printf(" Ocorrencias: %d",v[i]);
  }
}

int busca(int n, int num, int v[]){ // realiza busca 
  int i;
  for (i=0;i<n;i++){ //serve para buscar quando não se consegue fazer acesso direto
    if (v[i]==num){
      return i;
    }
  }
  return -1;
}


int main(void) {
  int vContadores[TAM];
  int vNums[TAM]={20,21,22,23,24,25,26,27,28,29,30}; // um vetor usado na busca
  int i, nRandomico, pos;
  
  inic_vetor(TAM, vContadores);
  srand(time(NULL)); //inicializa a função rand
  nRandomico=(rand()%99)+1;

  while (nRandomico!=1){
    if (nRandomico>=20 && nRandomico<=30){
      pos=busca(TAM,nRandomico, vNums);
      if (pos!=-1){
      vContadores[pos]++;
      }
    }
    nRandomico=(rand()%99)+1;
  }
  exibe_contadores(TAM, vContadores);
  return 0;
}