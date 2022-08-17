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

void frepete (int fn){ //repetição da função
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

void frepeteturma (int fm){
  int contador = 1;
  int fn;
  
  while (contador<=fm){
    printf("Digite o numero de alunos da turma %d: ", contador);
    scanf("%d", &fn);
    frepete(fn);
    contador = contador+1;
  }
}

int main(void) {
  int m;
  printf("\nDigite quantas turmas existem professor: ");
  scanf("%d", &m);
  frepeteturma(m);
  
  return 0;
}