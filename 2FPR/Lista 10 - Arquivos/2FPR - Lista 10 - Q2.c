/*
Desenvolver uma função que, dado um arquivo texto, verifique o número de vezes que um determinado caracter aparece no arquivo.
*/

#include <stdio.h>

int leArquivo(char nomeArquivo[], char caractereBuscado){
  FILE *arquivo;
  char c;
  int contCaracter=0;

  arquivo = fopen(nomeArquivo, "r");

  if (arquivo == NULL){
    return 0;
  }
  else{
    while ( fscanf(arquivo, "%c", &c) != EOF ){
      printf("%c", c);
      if ( c == caractereBuscado ){
        contCaracter++;
      }
    }
    fclose(arquivo);
    return contCaracter;
  }
}

int main(void) {

  char nomeArquivo[20];
  char caractereBuscado;
  
  printf("Digite o nome do arquivo: ");
  scanf(" %[^\n]", nomeArquivo);
  printf("Digite o caractere buscado: ");
  scanf(" %c", &caractereBuscado);
  
  printf("\n\n\nResultado: %d", leArquivo(nomeArquivo, caractereBuscado));
  return 0;
}