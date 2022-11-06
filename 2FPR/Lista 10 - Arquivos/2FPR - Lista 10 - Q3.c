/*
Desenvolver uma função que, dado um arquivo texto, verifique o número de letras existentes no mesmo (entendendo que no arquivo podem existir letras, algarismos e símbolos).
*/

#include <stdio.h>

int leArquivo(char nomeArquivo[]){
  FILE *arquivo;
  char c;
  int cont=0;

  arquivo = fopen(nomeArquivo, "r");

  if (arquivo == NULL) {
    return 0;
  }
  while( fscanf(arquivo, "%c", &c) != EOF ){
    printf("%c", c);
    if( ('a' <= c) && ('z' >= c) || ('A' <= c) && ('Z' >= c) ){
      cont++;
    }
  }
  fclose(arquivo);
  return cont;
}

int main(void) {
  char nomeArquivo[20];

  printf("Digite o nome do arquivo: ");
  scanf(" %[^\n]", nomeArquivo);
  
  printf("\n\n\nResultado: %d", leArquivo(nomeArquivo));
  
  return 0;
}