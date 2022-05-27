#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int funcaorandomica (){
  int randomico=rand()%101;
  return randomico;
}

int main(void) {
  int n, contador=0, numerorandomico, nDentroIntervalo=0, nForaIntervalo=0, somaDeTodosOsNumeros=0, somaDosNumerosForaDoIntervalo=0;
  
  srand(time(NULL));
  printf("Digite quantos valores deseja sortear: ");
  scanf("%d", &n);
  while(n>contador){
    numerorandomico=funcaorandomica();
    if (numerorandomico<15||numerorandomico==0){
      printf("\nO numero %d está dentro do intervalo", numerorandomico);
      nDentroIntervalo++;
    }
    else{
      printf("\nO numero %d não está dentro do intervalo", numerorandomico);
      nForaIntervalo++;
      somaDosNumerosForaDoIntervalo+=numerorandomico;
    }
    contador++;
    somaDeTodosOsNumeros+=numerorandomico;
  }
  printf("\n\nNumeros dentro do intervalo: %d", nDentroIntervalo);
  printf("\nNumeros fora do intervalo: %d", nForaIntervalo);
  printf("\nSoma dos numeros gerados: %d", somaDeTodosOsNumeros);
  printf("\nMédia dos numeros sorteados: %d",somaDeTodosOsNumeros/contador);
  printf("\nMédia dos numeros fora do intervalo: %d", somaDosNumerosForaDoIntervalo/nForaIntervalo);
  return 0;
}