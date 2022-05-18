#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int somaSorteadosNaRodada (){
  int nRandomico, somaRandomicos=0;
  nRandomico=(rand()%199)+2;
  printf("%d ", nRandomico);

  while(nRandomico%6!=0){
  somaRandomicos+=nRandomico;
  nRandomico=(rand()%199)+2;
  printf("%d ", nRandomico);
  }
  
  return somaRandomicos;
}

int main(void) {
  int n, contador=0, contadorPar=0;
  
  srand(time(NULL));
  
  printf("\nDigite quantas rodadas deseja: ");
  scanf("%d", &n);
  
  while(contador<n){
    contador++;
    printf("\nRodada %d\n", contador);
    if(somaSorteadosNaRodada()%2==0){
      contadorPar++;
    }
  }

  printf("\n\nO percentual de rodadas cujo a soma dos valores sorteados é par é: %.2f", contadorPar*100.0/contador);
  return 0;
}