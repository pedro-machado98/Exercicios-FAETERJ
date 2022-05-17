#include <stdio.h>

float calculaagua(float fpeso){ //calculo da agua por dia
  float laguadia;
  laguadia = (35*fpeso)/1000;
  return laguadia;
}
void exibe (float fagua){
  printf("------------------------------------------\n");
  printf("Quantidade de agua em litros %.2f l/dia\n", fagua);
  printf("------------------------------------------\n\n");
}

float frepete (int fn){ //repetição da função
int contador = 0;
float peso, agua;
while (contador<fn){ 
  printf("Peso do aluno em Kg: ");
  scanf("%f", &peso);
  agua = calculaagua(peso);
  exibe(agua);
  contador = contador+1; //acrescimo do contador
}
  
}

int main(void) {
  int n;
  printf("Digite quantos alunos existem na turma: ");
  scanf("%d", &n);
  frepete(n);
  return 0;
}