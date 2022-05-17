//Programa que calcula a média ponderada recebendo 2 notas, o peso da av1 é 3 e o peso da av 2 é 7

#include <stdio.h>

int main() {
  double av1;
  double av2;
  double media;
  //Entrada de valores
  printf("Insira a nota da AV1 ");
  scanf ("%lf", &av1);
  printf("Insira a nota da AV2 ");
  scanf ("%lf", &av2);
 //Calculo do programa
  media = (av1 * 3 + av2 * 7) / 10;

  //Saida de valores
  printf("A media é %1.1f", media);
  return 0;
}
  