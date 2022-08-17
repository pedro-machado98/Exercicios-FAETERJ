#include <stdio.h>

int main(void) {
  float horatrabalhada, valorhora, total;
  
  printf("Digite quantas horas você trabalhou:\n");
  scanf("%f", &horatrabalhada);

  printf("Quanto custa cada hora:\n");
  scanf("%f", &valorhora);

  total = horatrabalhada*valorhora;
  
  if(50 < horatrabalhada){
    
   total = horatrabalhada * valorhora + 10*(valorhora * 0.5);
    
  } else if (80 < horatrabalhada){
    total = horatrabalhada * valorhora + 40*(valorhora * 0.5)+ 0.1 * 40 *(valorhora*0.5);
  } 

  printf("Você vai receber %.2fR$", total);
  
  return 0;
}