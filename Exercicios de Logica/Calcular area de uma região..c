#include <stdio.h>
// Função que calcula a area
double funcao_area(double lado) { return lado * lado; }

int main(void) {
  double lado_terreno, lado_piscina, area_terreno, area_piscina, area;
  // Entrada de dados
  printf("Insira o lado do terreno ");
  scanf("%lf", &lado_terreno);
  printf("Insira o lado da piscina ");
  scanf("%lf", &lado_piscina);
  // Calculo
  area_terreno = funcao_area(lado_terreno);
  area_piscina = funcao_area(lado_piscina);

  area = area_terreno - area_piscina; // calculo da area

  // Saida dos dados
  printf("A area do terreno restante para por as cadeiras é %0.fm2", area);
  return 0;
}