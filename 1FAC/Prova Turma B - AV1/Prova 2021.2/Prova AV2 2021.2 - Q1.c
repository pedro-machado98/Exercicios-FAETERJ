#include <stdio.h>
#define TAM 2

void descobre_xy(int ano, int *x, int *y) {
  if (ano > 1900 && ano < 2000) {
    *x = 24;
    *y = 5;
  } else {
    if (ano < 2100) {
      *x = 24;
      *y = 5;
    } else {
      if (ano < 2199) {
        *x = 24;
        *y = 6;
      } else {
        *x = 25;
        *y = 7;
      }
    }
  }
}

int descobre_DataPascoa(int ano, int *dia, int *mes) {
  int a, b, c, d, e, x, y;

  descobre_xy(ano, &x, &y);

  a = ano % 19;
  b = ano % 4;
  c = ano % 7;
  d = (19 * a + x) % 30;
  e = (2 * b + 4 * c + 6 * d + y) % 7;

  if (d + e > 9) {
    *dia = (d + e - 9);
    *mes = 4;
    if ((*mes == 4) && (*dia == 26)) {
      *dia = 19;
      return 1;
    }
    if ((*mes == 4) && (*dia == 25) && (d == 28) && (a > 10)) {
      *dia = 18;
      return 1;
    }
    return 1;
  } else {
    if (d + e <= 9) {
      *dia = (d + e + 22);
      *mes = 3;

      return 1;
    }
  }
  return 0;
}

int main(void) {
  int dia, mes, ano = 2022, testaxy, testapascoa;

  testapascoa = descobre_DataPascoa(ano, &dia, &mes);

  if (testapascoa == 1) {
    printf("A pascoa no ano de %d será na data %d/0%d/%d", ano, dia, mes, ano);
  } else {
    printf("A data não pode ser calculada");
  }

  return 0;
}