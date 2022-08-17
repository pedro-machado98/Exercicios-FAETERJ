#include <stdio.h>

int main(){
int codigo;
 
  printf("Digite o codigo do produto:\n");
  scanf("%d",&codigo);

  int codigoxx = codigo / 100 ; //separar os 2 primeiros numeros
  float codigoyy = ((codigo/ 10) % 10) * 10 + (codigo % 10); //separa os 2 ultimos numeros
  int preco_base = codigoxx * 15.00 + codigoyy; //calcula o preço base
  float percent = codigoyy / 100; //calculo da porcentagem de desconto
  float total =  preco_base - (preco_base * percent); //aplica o desconto no valor total
  
  printf("\n\nPreço: %d.00 x 15.00 + %0.f.00 = %d.00\n", codigoxx, codigoyy, preco_base);
  printf("Desconto: %0.f%% de %d = %.2f \n", percent*100, preco_base, preco_base * percent);
  printf("\nO total a pagar é %.2fR$.\n", total);

  return 0;
}

