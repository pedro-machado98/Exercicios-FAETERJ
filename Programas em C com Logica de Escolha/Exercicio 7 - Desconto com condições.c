#include <stdio.h>

int main(void) {
  int unidades;
  float custoUni, total, descontoTotal, descontoTotal2;
  descontoTotal = 0;
  descontoTotal2 = 0;
  
  printf("Quantos itens você comprou?\n");
  scanf("%d", &unidades);
  printf("Quanto você pagou por unidade\n");
  scanf("%f", &custoUni);

  total = unidades * custoUni;

  if ((unidades > 15) && (total > 100)){
    descontoTotal = total * 0.1;
    total = total - descontoTotal;
    descontoTotal2 = total * 0.2;
    total = total - descontoTotal2;
    printf("Valor gasto total: %.2fR$\n", total + descontoTotal + descontoTotal2);
    printf("Total de desconto: %.2fR$\n", descontoTotal + descontoTotal2);
    printf("Total a pagar: %.2fR$\n", total);
    } else if (unidades > 15){
      descontoTotal = total * 0.1;
      total = total - descontoTotal;
      printf("Valor gasto total: %.2fR$\n", total + descontoTotal);
      printf("Total de desconto: %.2fR$\n", descontoTotal);
      printf("Total a pagar: %.2fR$\n", total);
      } else if (total > 100){
        descontoTotal = total * 0.2;
        total = total - descontoTotal;
        printf("Valor gasto total: %.2fR$\n", total + descontoTotal);
        printf("Total de desconto: %.2fR$\n", descontoTotal);
        printf("Total a pagar: %.2fR$\n", total);
        } else{
          printf("Você não tem direito a desconto, o valor a pagar é %.2f", total);
          }
  
  return 0;
}