#include <stdio.h>

int main(void) {
  float totalcomprado, numparcelas, parcelamaior, taxacredito, valorparcelas, entrada;
  
  printf("Digite o valor total comprado:\n");
  scanf("%f", &totalcomprado);
  printf("Digite o numero de parcelas que deseja:\n");
  scanf("%f", &numparcelas);


  if (numparcelas < 10){
    parcelamaior = totalcomprado * 0.7;
    valorparcelas = parcelamaior / numparcelas;
    entrada = totalcomprado - parcelamaior; 
    printf("O valor de entrada é: %.2f\n", entrada);
    printf("Serão %.1f parcelas de %.2fR$", numparcelas, valorparcelas);

  } else{
    parcelamaior = totalcomprado * 0.7;
    parcelamaior = parcelamaior + (parcelamaior * 0.2);
    valorparcelas = parcelamaior / numparcelas;
    printf("O valor de entrada é: %.2f\n", entrada);
    printf("Serão %.1f parcelas de %.2fR$", numparcelas, valorparcelas);
  }
  
  
  return 0;
}