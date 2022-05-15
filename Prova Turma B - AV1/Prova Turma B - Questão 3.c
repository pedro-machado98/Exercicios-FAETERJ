#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int qualMaiorSorteadoNaRodada(int fn){
  int num, maior;
  int contador;
  contador=0;
  maior=0;
  srand(time(NULL));
  while(contador<fn){
    num=rand()%199+2;
    contador++;
    printf("%d ", num);
    if(maior<num){
      maior=num;
    }
  }
  return maior;
}

int main(void) {
  int n, nDeRodadas, nDeSorteios;
  float somatorioMaiorNumero=0;
  int contador = 0;
  int contadormultiplo=0;
  printf("Rodada 1");
  printf("\nDigite quantos numeros deseja sortear: ");
  scanf("%d", &nDeSorteios);
  while(nDeSorteios!=0){
    contador++;
    n = qualMaiorSorteadoNaRodada(nDeSorteios);
    printf("\nO maior numero da rodada foi: %d\n", n);
    somatorioMaiorNumero = somatorioMaiorNumero+n;
    if(n%contador==0){
      contadormultiplo++;
    }
    printf("\nRodada %d", contador+1);
    printf("\nDigite quantos numeros deseja sortear: ");
    scanf("%d", &nDeSorteios);
  }
  printf("\n\n\nO valor médio das rodadas é: %.2f", somatorioMaiorNumero/contador);
  printf("\nO percentual de rodadas cujo maior valor sorteado é multiplo do numero da rodada é: %.2f%%", contadormultiplo*100.0/contador);
  return 0;
}