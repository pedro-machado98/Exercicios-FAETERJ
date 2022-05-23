#include <stdio.h>

int fordenar(int num1, int num2, int num3){
int var;
  
  if (num1>num3){
  var = num1;
  num1 = num3;
  num3 = var;
  }

  if (num1>num2){
  var = num1;
  num1 = num2;
  num2 = var;
  }

  if (num2>num3){
  var = num2;
  num2 = num3;
  num3 = var;
  }
    
 return printf("Os numeros em ordem crescente ficam %d, %d e %d", num1, num2, num3);
}


int main(void){
  int n1, n2, n3;
  
  printf("Informe o primeiro numero\n");
  scanf("%d", &n1);
  printf("Informe o segundo numero\n");
  scanf("%d", &n2);  
  printf("Informe o terceiro numero\n");
  scanf("%d", &n3);

  printf("", fordenar(n1, n2, n3));
  return 0;
}