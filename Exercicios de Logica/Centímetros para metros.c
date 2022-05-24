#include <stdio.h>

/*Faça um programa que leia a altura (em centímetros) de uma pessoa e exiba-a em metros e centímetros.*/

int fcalculo(int faltura) {
  int alturacm, alturam;

  alturacm = faltura % 100;
  alturam = (faltura - alturacm) / 100;

  if (alturacm == 0) {
    return printf("Sua altura é %dm.", alturam);

  } else {
    return printf("Sua altura é %dm %dcm.", alturam, alturacm);
  }
}

int main(void) {
  int altura;

  printf("Insira sua altura em centimetros\n");
  scanf("%d", &altura);

  printf("", fcalculo(altura));

  return 0;
}