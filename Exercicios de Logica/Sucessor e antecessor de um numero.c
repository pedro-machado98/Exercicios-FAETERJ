#include <stdio.h>
//Faça um programa que mostre o sucessor e o antecessor de um número inteiro fornecido pelo usuário

int main(void) {
  int n1;
  
  printf("Digite um numero:\n");
  scanf("%d", &n1);

  printf("O numero antecessor de %d é %d e o sucessor é %d", n1, n1-1, n1+1);
  return 0;
}