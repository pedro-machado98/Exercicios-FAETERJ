/*
Implementar uma função que, dados dois arquivos textos arquivoA e arquivo, contendo números inteiros, um por linha, sem repetições, determine o número de elementos comuns entre os dois arquivos.
*/
#include <stdio.h>

int questao2(char nomeArquivo1[], char nomeArquivo2[]){
  FILE *arquivo1;
  FILE *arquivo2;
  int n1;
  int n2;
  int cont=0;

  arquivo1 = fopen(nomeArquivo1, "r");
  arquivo2 = fopen(nomeArquivo2, "r");

  if (arquivo1 == NULL || arquivo2 == NULL) {
    return 0;
  }
  else{
    while ( fscanf(arquivo1, "%d", &n1) != EOF ){
      while ( fscanf(arquivo2, "%d", &n2) != EOF ){
        if (n1 == n2){
          cont++;
        }
      }
      rewind(arquivo2);
    }
  }
  fclose(arquivo1);
  fclose(arquivo2);
  return cont;
}


int main(void) {
  char nomeArquivo1[20];
  char nomeArquivo2[20];

  printf("Digite o nome do 1° arquivo: ");
  scanf(" %[^\n]", nomeArquivo1);
  printf("Digite o nome do 2° arquivo: ");
  scanf(" %[^\n]", nomeArquivo2);
  
  printf("\n\n\nResultado: %d", questao2(nomeArquivo1, nomeArquivo2));
  return 0;
}