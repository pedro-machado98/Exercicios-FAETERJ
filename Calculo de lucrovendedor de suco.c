#include <stdio.h>



/*Um vendedor ambulante utiliza concentrado de uva para produzir suco e refresco de uva. Ele utiliza as seguintes proporções para o preparo do suco e do refresco:
suco: 1 de concentrado para 2 de água;
refresco: 1 de concentrado para 4 de água;
O vendedor utiliza copos de 100 ml; 
Faça um programa que leia a litragem do concentrado que o vendedor irá comprar e o preço pago por este concentrado e informe ao vendedor ambulante:*/

int main(void) {
  float concentrado, preco_concentrado, refresco, suco, valorrefresco,
      valorsuco, porcentrefresco, porcentsuco;

  printf("Quantos litros de concentrado você comprou?\n");
  scanf("%f", &concentrado);
  printf("\nQuanto você pagou por cada litro de concentrado?\n");
  scanf("%f", &preco_concentrado);

  preco_concentrado =
      preco_concentrado * concentrado; // ajusta o preço total da compra

  refresco = concentrado * 4 + concentrado; // calculos de quanto vai render em litros
  suco = concentrado * 2 + concentrado;

  printf(
      "\nPodem ser produzidos %.1fL de refresco e %.1fL de suco com %.1fL de "
      "concentrado.\n\n",
      refresco, suco, concentrado);

  valorrefresco = refresco * 10; // calculo do lucro maximo caso venda tudo
  valorsuco = (suco * 10) * 2;

  printf(
      "Você vai receber %.2fR$ se fizer refresco e %.2fR$ se fizer suco.\n\n",
      valorrefresco, valorsuco);
  // porcentagem de lucro no refresco e no suco.
  porcentrefresco = (valorrefresco - preco_concentrado) / (valorrefresco / 100);
  porcentsuco = (valorsuco - preco_concentrado) / (valorsuco / 100);

  printf("Você terá %.1f%% de lucro vendendo refresco.\n", porcentrefresco);
  printf("Você terá %.1f%% de lucro vendendo suco.\n", porcentsuco);
  return 0;
}