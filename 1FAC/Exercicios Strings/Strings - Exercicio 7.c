#include <stdio.h>
#include <string.h>
#define TAM 60

void fillUpArray (char departamento[], char disciplina[]){
  printf(" Digite o codigo do departamento: ");
  scanf(" %[^\n]", departamento);
  printf("Digite o codigo da disciplina: ");
  scanf(" %[^\n]", disciplina);
}

void fillUpURL (char departamento[], char disciplina[], char url[TAM]){
  strcat(url,"www.");
  strcat(url,departamento);
  strcat(url, ".puc-rio.br/~");
  strcat(url, disciplina);
}

int main(void) {
  char departamento[TAM], disciplina[TAM], URL[TAM];
  fillUpArray(departamento, disciplina);
  fillUpURL(departamento, disciplina, URL);
  printf("%s", URL);
  return 0;
}