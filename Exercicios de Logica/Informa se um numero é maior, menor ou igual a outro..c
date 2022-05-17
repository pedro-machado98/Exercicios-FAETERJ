#include <stdio.h>

int main(void) {
  int n1, n2;
printf("Por favor insira dois numeros e o programa irá informar a relação entre eles\n");
printf("\nInsira o primeiro numero\n");
scanf("%d", &n1);
printf("\nInsira o segundo numero\n");
scanf("%d", &n2);
  if (n1 > n2){
    printf("O numero %d é maior que o numero %d!", n1, n2);
}
  else
    if (n1 < n2)
      printf("O numero %d é menor que o numero %d!", n1, n2);
    else
      printf("Os numeros sao iguais!");
  return 0;
}