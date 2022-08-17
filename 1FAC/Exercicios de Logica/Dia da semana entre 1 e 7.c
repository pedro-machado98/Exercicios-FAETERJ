#include <stdio.h>

int main (void){
  int diasemana;

  printf("Insira o dia da semana de 1 até 7\n");
  scanf("%d", &diasemana);

  if (diasemana > 7 || diasemana <= 0){
  printf("A entrada não é valida, precisa ser um numero de 1 até 7");  
}
   else if (diasemana > 1 && diasemana <= 6){
     printf("Esse é um dia da semana\n");
     if (diasemana == 2)
     printf("Delícia!!! Hoje tem 1FAC");
}     
       else  
              printf("Esse é um dia de final de semana, aproveite!");

  return 0;
}