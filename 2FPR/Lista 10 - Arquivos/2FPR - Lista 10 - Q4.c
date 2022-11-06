/*
Desenvolver uma função que, dado um arquivo texto contendo números, determine se estes encontram-se ordenados crescentemente.
*/

#include <stdio.h>

int leArquivo(char nomeArquivo[]){
  FILE *arquivo;
  int n1;
  int n2;

  arquivo = fopen(nomeArquivo, "r");

  if (arquivo == NULL) {
    return 0;
  }
  //lendo primeiro valor do arquivo
  fscanf(arquivo, "%d", &n1);

  //lendo o segundo
  while ( fscanf(arquivo, "%d", &n2) != EOF ){
     //exibindo só de meme
    printf("%d\n", n1);
    //comparando se é maior que o anterior
    if( n2 < n1 ){
        return 0;
      }
    n1=n2;
  }
  fclose(arquivo);
  return 1;
}


int main(void) {
  char nomeArquivo[20];

  printf("Digite o nome do arquivo: ");
  scanf(" %[^\n]", nomeArquivo);

  printf("\n\n\nResultado: %d", leArquivo(nomeArquivo));
  
  return 0;
}