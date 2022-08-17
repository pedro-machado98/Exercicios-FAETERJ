#include <stdio.h>

float montaFracao (float numerador, float denominador){
  float resultado=numerador/denominador;
  return resultado;
}

int main(void) {
  float x, y;
  printf("\nDigite o primeiro valor float: ");
  scanf("%f", &x);
  printf("Digite o segundo valor float: ");
  scanf("%f", &y);

  printf("\n\n%.2f / %.2f = %.2f", x, y, montaFracao(x,y));
  printf("\n%.2f / %.2f = %.2f", y, x, montaFracao(y,x));
  return 0;
}