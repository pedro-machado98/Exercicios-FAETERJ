#include <stdio.h>
#include <math.h>

float calculaST (float velocidadevento, float temperatura){
  float st;
  st = 33+(10*sqrt(velocidadevento)+10.45-velocidadevento)*(temperatura-33)/22;
  return st;
}

void exibeST (float fst, int contador){
  printf("\n----------------------------------------------");
  printf("\nA sensação termica na %d° hora é de %.1f",contador ,fst);
  printf("\n----------------------------------------------");
}

void sensacaocadadia (){
 int contador = 1;
 float fvelVento, ftemperatura, fsensacao;

  while(contador<=24){
    printf("\nQual a temperatura em celcius: ");
    scanf("%f", &ftemperatura);
    printf("\nQual a velocidade do vento em Km/H: ");
    scanf("%f", &fvelVento);
    fsensacao = calculaST(fvelVento, ftemperatura);
    exibeST(fsensacao, contador);
    contador = contador+1;
  }
}


int main(void) {
  sensacaocadadia();
  return 0;
}