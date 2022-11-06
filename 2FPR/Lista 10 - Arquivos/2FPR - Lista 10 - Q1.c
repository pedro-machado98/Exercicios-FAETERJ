/*
Desenvolver uma função que, dado um arquivo texto, verifique o número de caracteres no mesmo.
*/

#include <stdio.h>

int leArquivo(char nomeArquivo[]){
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
      if ( c != '\0' && c != '\n' ){
        contCaracter++;
      }
    }
    fclose(arquivo);
    return contCaracter;
  }
}

int main(void) {

  char nomeArquivo[20];

  printf("Digite o nome do arquivo: ");
  scanf(" %[^\n]", nomeArquivo);
  
  printf("\n\n\nResultado: %d", leArquivo(nomeArquivo));
  return 0;
}