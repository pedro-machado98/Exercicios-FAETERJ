#include <stdio.h>

void tabuada(int num){
  int mult;
  mult=1;
  while(mult<=10){
    printf("\n%d x %d = %d", mult, num, num*mult);
    mult++;
  }
}


int main(void) {
  int num;
  int contador, contadorpar;
  contador=0;
  contadorpar=0;
  
  printf("\nDigite o numero ou digite 0 para cancelar: ");
  scanf("%d", &num);

  while(num>0){
    tabuada(num);
      if(num%2==0){
        contadorpar++;
      }
    printf("\n\nDigite o numero ou digite 0 para cancelar: ");
    scanf("%d", &num);
    contador++;
  }

    printf("\nForam digitados %d numeros", contador);
    printf("\nForam digitados %d numeros pares", contadorpar);
    printf("\nA porcentagem de numeros pares é: %.1f%%",contadorpar*100.0/contador);

  return 0;
}