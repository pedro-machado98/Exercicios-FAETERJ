#include <stdio.h>

int anobi(ano1){

if ((ano1 % 4 == 0) && (ano1 % 100 != 0))
{
return printf("O ano é bissexto e tem 366 dias");
}
  else 
  return printf("O ano não é bissexto e tem 365 dias");
  
}

int main(void) {
  int ano;

  printf("Qual o ano?\n");
  scanf("%d", &ano);
     
  
  printf("O ano é ",anobi(ano));
  return 0;
}