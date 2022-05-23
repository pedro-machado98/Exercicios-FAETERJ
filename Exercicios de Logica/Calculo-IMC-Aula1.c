#include <stdio.h>

int main(void){
  int idade;
  float alt, peso, imc;
  
  printf("Insira sua idade: ");
    scanf("%d", &idade);
  
  printf("Insira sua altura com ponto: ");
   scanf("%f", &alt);
      
  printf("Insira seu peso: ");
   scanf("%f", &peso);

  imc =  peso / (alt * alt); 
  
  printf("O seu IMC é %.2f", imc);

  return 0;
}