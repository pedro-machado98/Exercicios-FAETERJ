#include <stdio.h>

void funcaoexibe (int fvalortotal){
  printf("\n-----------------------------------------");
  printf("\nO conveniado deve pagar %d", fvalortotal);
  printf("\n-----------------------------------------\n");
}


void funcaoEscolha(int idade){
  int valortotal, adicional;
  if (idade<10){
    adicional=80;
  }
  else {
    if (idade<30){
      adicional=50;
    }
    else {
      if (idade<60){
        adicional=95;
      }
      else{
        adicional=130;
      }
    }
  }
valortotal = adicional+100;
funcaoexibe(valortotal);
}

void perguntaIdade(){
  int idade;
  
  printf("\nDigite a idade do conveniado: ");
  scanf("%d", &idade);
  funcaoEscolha(idade);
}

void funcaocontadorconveniados(int fn){
  int contador = 0;
  while (contador<fn){
    contador= contador+1;
    perguntaIdade();
  }
}

int main(void) {
  int n;
  printf("\nDigite quantos conveniados tem na sua familia: ");
  scanf("%d", &n);
  funcaocontadorconveniados(n);
  return 0;
}