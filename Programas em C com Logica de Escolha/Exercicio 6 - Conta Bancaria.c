#include <stdio.h>

int main(void) {
  int saldo, saque;
  printf("Digite o seu saldo em conta?\n");
  scanf("%d", &saldo);
  printf("Digite o quanto quer sacar?\n");
  scanf("%d", &saque);

  saldo = saldo - saque;

  if (saldo < 0) {
    printf("Você está com um saldo devedor de %dR$.\n", saldo);
    if (saldo <= -10000) {
      printf("O seu saldo devedor está menor que 10.000R$, por favor compareça "
             "a agencia.");
    }
  }

  return 0;
}