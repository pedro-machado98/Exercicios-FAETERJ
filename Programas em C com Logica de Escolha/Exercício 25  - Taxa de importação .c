#include <stdio.h>

int main(void) {
  float valorcompra, modelo, importacao, circulacao, entrega;
  printf("Valor da compra: \n");
  scanf("%f", &valorcompra);
  printf("Digite 1 para nacional e 2 para importado:\n");
  scanf("%f", &modelo);

  if(modelo == 2){
    importacao = valorcompra*0.5;
    circulacao = (importacao+valorcompra) * 0.03;
    entrega = (valorcompra*0.1) + (circulacao*0.02);
    printf("Imposto de importação: %.2f \n", importacao);
   printf("Imposto de circulacao de mercadoria: %.2f \n", circulacao);
  printf("Taxa de entrega: %.2f \n", entrega);
  } else {
    circulacao = valorcompra*0.03;
    entrega = (valorcompra*0.1) + (circulacao*0.02);
      printf("Imposto de circulacao de mercadoria: %.2f \n", circulacao);
  printf("Taxa de entrega: %.2f \n", entrega);
  }

  return 0;
}