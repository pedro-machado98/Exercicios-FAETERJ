#include <stdio.h>

int main(void) {
  //Declaração de variantes
  int numSorte, idade;
  char nome[20];
  //Obter valores do usuário
  printf("Qual o seu nome?");
    scanf("%s",nome);
  printf("Qual a sua idade?");
    scanf("%d",&idade);

  numSorte=((((((idade*4)+8)*60)/240)+22)-idade);
  printf("Parabéns %s! Seu número da sorte é %d",nome,numSorte);
  
  return 0;
}