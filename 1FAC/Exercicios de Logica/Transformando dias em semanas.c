#include <stdio.h>

/*Faça um programa que leia o número de dias decorrido em um evento e exiba na tela o mesmo valor expresso em números de semanas e número de dias. Por exemplo, se um usuário fornecer o valor 19, o programa deve exibir: “2 semanas e 5 dias”.*/

int fsemanas(int fdias) {
  int fsem;

  fsem = fdias / 7;

  return fsem;
}

int main(void) {
  int dias;
  printf("Insira quantos dias de evento serão:\n");
  scanf("%d", &dias);

  if (dias % 7 == 0) {
    printf("O evento irá durar %d semanas", fsemanas(dias));
  } else {
    printf("O evento irá durar %d semanas e %d dias", fsemanas(dias), dias % 7);
  }

  return 0;
}