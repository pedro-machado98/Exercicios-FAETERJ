#include <stdio.h>
#include <math.h>
/*Faça um programa que leia do teclado as coordenadas de dois pontos (x1, y1), calcule e exiba a
distância entre eles.*/

float squareroot(float x1, float y1, float x2, float y2){
  /*função que representa o calculo da formula d = raiz((x1-x2)² + (y1-y2)²)*/
  float x, y, xy;

  x = pow(x1 - x2, 2); //potencia da subtração de x
  y = pow(y1 - y2, 2); //potencia da subtração de y
  xy = sqrt (x+y); //raiz quadrada da soma de x e y
  
  return xy; 
}

int main(void) {
  float xA, yA, xB, yB, d;
  
  printf("O programa calcula a distancia entre dois pontos\n\n\n");
  printf("Insira a coordenada x do ponto A:\n");
  scanf("%f", &xA);
  printf("Insira a coordenada y do ponto A:\n");
  scanf("%f", &yA);
  printf("Insira a coordenada x do ponto B:\n");
  scanf("%f", &xB);
  printf("Insira a coordenada y do ponto B:\n");
  scanf("%f", &yB);

  
  printf("A distancia entre os dois pontos é de %.2f centímetros", squareroot(xA, yA, xB, yB));
  return 0;
}