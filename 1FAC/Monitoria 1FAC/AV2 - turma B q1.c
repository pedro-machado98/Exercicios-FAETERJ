#include <stdio.h>

void encontraDoisVals (int limiteInferior, int limiteSuperior, int *menorValor, int *maiorValor) {
  int numero;

  printf("Digite um numero: ");
  scanf("%d", &numero);
  
  while (numero >= 0){
    if (numero < limiteInferior || numero > limiteSuperior){
      if (numero < *menorValor){
        *menorValor = numero;
      }
      else{
        if(numero > *maiorValor){
          *maiorValor = numero;
        }
      }
    }
    printf("Digite um numero: ");
    scanf("%d", &numero);
  }

}

int main(void) {
  int limiteInferior = 3;
  int limiteSuperior = 10;
  int menorValor = limiteInferior;
  int maiorValor = limiteSuperior;

  encontraDoisVals(limiteInferior, limiteSuperior, &menorValor, &maiorValor);
  
  printf("Menor valor: %d\n", menorValor);
  printf("Maior valor: %d\n", maiorValor);
  return 0;
}