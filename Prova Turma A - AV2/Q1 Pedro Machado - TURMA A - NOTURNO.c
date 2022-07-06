/*
Pedro Quadro Machado
TURMA A
NOTURNO
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 20
#define PTOS 8


void calculaNota(int vResp[], int vPontuacao[], int *somaponto, int *anula){
  int i;
  (*anula)=0;
  (*somaponto)=0;

  for (i=0;i<TAM;i++){
    if (vResp[i]>=9 || vResp[i]<=0){
      *anula=*anula+1;
    }
    else{
      (*somaponto)=*somaponto+vPontuacao[vResp[i]-1];
    }
  }
}

void exibeSatisfacao(int codPass, int vResp[], int pontuacaoTotal, int qtdAnuladas){
  printf("Codigo do passageiro: %d.\n\n", codPass);
  for (int i=0; i<TAM; i++){
    printf("%d ", vResp[i]);
  }
  if(qtdAnuladas<=6){
    if(pontuacaoTotal>=90){
      printf("\n\nMenos que 6 anuladas, pontuação maior que 90. Muito Satisfeito\n");
    }
    else{
      if(pontuacaoTotal<=89 && pontuacaoTotal>=75){
        printf("\n\nMenos que 6 anuladas, pontuação entre 89 e 75. Satisfeito\n");
      }
      else{
        printf("\n\nMenos que 6 anuladas, abaixo de 75. Insatisfeito\n");
      }
    }
  }
  else{
    if(qtdAnuladas<=12){
      if(pontuacaoTotal>=90){
        printf("\n\nEntre 7 e 12 anuladas, pontuação maior que 90. Satisfeito\n");
      }
      else{
        if(pontuacaoTotal<=89 && pontuacaoTotal>=75){
          printf("\n\nEntre 7 e 12 anuladas, pontuação menor que 89. Insatisfeito\n");
        }
        else{
          printf("\n\nEntre 7 e 12 anuladas, abaixo de 75. Insatisfeito\n");
        }
      }
    }
    else{
      printf("\n\nMais de 12 anuladas, inconclusivo.\n");
    }
  }
  printf("Pontuação Total: %d\n", pontuacaoTotal);
  printf("Questões Anuladas: %d", qtdAnuladas);
}

int main(void) {
  int codEmb=333;
  int vResp[TAM];
  int vPontuacao[PTOS]={1,3,3,3,4,6,6,10};
  int i, pontos, anula;

  srand(time(NULL));
  for (i=0;i<TAM;i++){
    vResp[i]=rand()%11;
  }

  calculaNota(vResp, vPontuacao, &pontos, &anula);
  exibeSatisfacao(codEmb, vResp, pontos, anula);
 
  return 0;
}