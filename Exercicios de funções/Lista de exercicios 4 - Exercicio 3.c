#include <stdio.h>

void exibeEmpate (){
  printf("\n------------------------------------");
  printf("\nO jogo empatou");
  printf("\n------------------------------------\n");
}

void exibeVitoria (int ftime, int fpontosvitoria, int fpontosderrota){
  printf("\n------------------------------------");
  printf("\nO time %d ganhou de %d a %d.", ftime, fpontosvitoria, fpontosderrota);
  printf("\n------------------------------------\n");
}

void funcaoPartidas (int fnumerodeGols1, int fcodigotime1, int fnumerodeGols2, int fcodigotime2){
 
  if(fnumerodeGols1 == fnumerodeGols2){
    exibeEmpate();
  }
  else{
    if (fnumerodeGols1>fnumerodeGols2){
    exibeVitoria(fcodigotime1, fnumerodeGols1, fnumerodeGols2);
    }
    else{
    exibeVitoria(fcodigotime2, fnumerodeGols2, fnumerodeGols1);
    }
  }
}

void perguntaPlacar (){
  int codigotime1, codigotime2, numerodeGols1, numerodeGols2;
  
  printf("\nQual o codigo do 1° time e o numero de gols: ");
  scanf("%d %d", &codigotime1, &numerodeGols1);
  printf("\nQual o codigo do 2° time e o numero de gols: ");
  scanf("%d %d", &codigotime2, &numerodeGols2);
  funcaoPartidas(numerodeGols1, codigotime1, numerodeGols2, codigotime2);
}

void contadorpartidas (int fn){
  int contador=0;
  while (contador<fn){
    contador=contador+1;
    perguntaPlacar();
  }
}
  
int main(void) {
  int n;
  printf("Digite o numero de partidas jogadas: ");
  scanf("%d", &n);
  contadorpartidas(n);
  return 0;
}