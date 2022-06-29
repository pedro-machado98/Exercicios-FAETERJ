/*
Aluno: Pedro Quadro Machado
TURMA A - Noturno
*/  
#include <stdio.h>
#include <string.h>
#define TAM 7

int tabela_nomes (char vetorNomes[][30]){
  strcpy(vetorNomes[0],"analfabeto");
  strcpy(vetorNomes[1],"primeiro grau");
  strcpy(vetorNomes[2],"segundo grau");
  strcpy(vetorNomes[3],"superior");
  strcpy(vetorNomes[4],"mestrado");
  strcpy(vetorNomes[5],"doutorado");
  strcpy(vetorNomes[6],"outros");
  return 7;
}

void inic_vetor(int n, int v[]){
  int i;
  for (i=0;i!=n;i++){
    v[i]=0;
  }
}

void exibe_tabela(int vIdadeMedia[], int vIdadeMaisVelho[]){
  int i;
  printf("\n Instrução \t Idade Média \t Idade Mais Velho");
  for (i=0;i<7;i++){
    printf("\n %-6d \t %6d \t %13d", i+1, vIdadeMedia[i], vIdadeMaisVelho[i]);
  }
}

int busca_Nomes(char vN[][30], int max, char copia[]){
  int i;
  for (i=0;i<max;i++){
    if (strcmp(vN[i],copia)==0){
      return i;
    }
  }
  return -1;
}

int main(void) {
  int idade,vIdadeMedia[TAM], vIdadeMaisVelho[TAM], i=0, pos, vContadorIdadeMedia[TAM], idadeMedia;
  char vNomesInstrucao[7][30], instrucao[30];
  
  inic_vetor(TAM, vIdadeMedia);
  inic_vetor(TAM, vIdadeMaisVelho);
  inic_vetor(TAM,vContadorIdadeMedia);
  
  //printf("\nDigite seu grau de instrução (1,2,3,4,5,6 ou 7): ");
  //scanf("%d", &instrucao);
  int max=tabela_nomes(vNomesInstrucao);
  printf("Guia de nomes de nivel de instrução:\nanalfabeto\nprimeiro grau\nsegundo grau\nsuperior\nmestrado\ndoutorado\noutros\n\n");
  printf("Digite seu nivel de instrução: ");
  scanf(" %[^\n]",instrucao);
  
  while (strcmp(instrucao,"fim")!=0){
    printf("Digite sua idade: ");
    scanf("%d", &idade);
  
    pos = busca_Nomes(vNomesInstrucao, max, instrucao);
    if(vIdadeMaisVelho[pos]<idade){
      vIdadeMaisVelho[pos]=idade;
    }
    vIdadeMedia[pos]+=idade;
    vContadorIdadeMedia[pos]++;
    idadeMedia=vIdadeMedia[pos]/vContadorIdadeMedia[pos];
    vIdadeMedia[pos]=idadeMedia;
    //printf("\nDigite seu grau de instrução (1,2,3,4,5,6 ou 7): ");
    //scanf("%d", &instrucao);
  printf("Digite seu nivel de instrução: ");
  scanf(" %[^\n]",instrucao);
  }
  exibe_tabela(vIdadeMedia, vIdadeMaisVelho);
  return 0;
}