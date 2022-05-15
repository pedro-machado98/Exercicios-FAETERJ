#include <stdio.h>

float calculopercent (float fing1, float fing2, float fing3){
  return fing1*100/(fing1+fing2+fing3);
}


int main(void) {
  int ingrediente1, ingrediente2, ingrediente3;
  printf("Digite a quantidade do 1° ingrediente: ");
  scanf("%d",&ingrediente1);
  printf("\nDigite a quantidade do 2° ingrediente: ");
  scanf("%d",&ingrediente2);
  printf("\nDigite a quantidade do 3° ingrediente: ");
  scanf("%d",&ingrediente3);

  
  printf("\nO percentual do primeiro ingrediente é %.2f%%", calculopercent(ingrediente1, ingrediente2, ingrediente3));
  printf("\nO percentual do segundo ingrediente é %.2f%%", calculopercent(ingrediente2, ingrediente1, ingrediente3));
  printf("\nO percentual do terceiro ingrediente é %.2f%%", calculopercent(ingrediente3, ingrediente2, ingrediente1));
  return 0;
}