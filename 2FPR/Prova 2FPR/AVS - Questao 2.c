/*
Supondo a existência de um arquivo texto contendo números inteiros, um por linha, sem repetições, desenvolver uma função que determine o maior e o segundo maior elementos do arquivo.
*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

int questao2(char nomeArquivo[], int *maior, int *segundoMaior){
  
  FILE *arquivo;
  int n1;

  
  arquivo = fopen(nomeArquivo, "r");
  *maior = -99999;
  *segundoMaior = -99999;

  if (arquivo == NULL) {
    return FALSE;
  }
  else{
    
    while (fscanf(arquivo, "%d", &n1) != EOF ){

      if(n1 > *maior){
        *maior = n1;
      }
    }
    rewind(arquivo);

    while (fscanf(arquivo, "%d", &n1) != EOF ){

      if(n1 > *segundoMaior && n1 != *maior){
        *segundoMaior = n1;
      }
    }
    
  }
  return TRUE;
}


int main(void) {

  char nomeArquivo[20];
  int maior, segundoMaior;

  printf("Digite o nome do 1° arquivo: ");
  scanf(" %[^\n]", nomeArquivo);
  
  printf("\n\n\nResultado: %d\n\nMaior: %d\n\nSegundo Maior: %d", questao2(nomeArquivo, &maior, &segundoMaior), maior, segundoMaior);
  return 0;
}

  
