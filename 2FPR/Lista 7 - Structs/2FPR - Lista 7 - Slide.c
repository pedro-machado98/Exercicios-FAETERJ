#include <stdio.h>
  typedef struct {
    char nome[15];
    float av1,av2,media;
    int situacao;
  } TAluno;
  

void leitura(TAluno vetor[], int qtdAluno){
  for(int i=0;i<qtdAluno;i++){
    vetor[i].media= (vetor[i].av1 + vetor[i].av2)/2;
  }
}

void exibeStruct(TAluno vetor[], int qtdAluno){
  for(int i=0;i<qtdAluno;i++){
  printf("\n");
  printf("%s\t", vetor[i].nome);
  printf("%.2f\t", vetor[i].av1);
  printf("%.2f\t", vetor[i].av2);
  printf("%.2f\t", vetor[i].media);
  printf("%d\t", vetor[i].situacao);
  printf("\n");
  }
}

void exibeSituacaoAluno(TAluno vetor[], int qtdAluno, int situacao){
  for(int i=0;i<qtdAluno;i++){
    if(vetor[i].situacao==situacao){
      printf("%s\n", vetor[i].nome);
    }
  }
}

int main(void) {
  int i;
  TAluno vetor[3];
  int qtdAlunos=3;
  
  for(i=0;i<qtdAlunos;i++){
    printf("Nome: ");
    scanf(" %[^\n]", vetor[i].nome);
    fflush(stdin);
    printf("Nota AV1: ");
    scanf("%f", &vetor[i].av1 );
    printf("Nota AV2: ");
    scanf("%f", &vetor[i].av2);
    printf("Situação: ");
    scanf("%d", &vetor[i].situacao);
    printf("\n");
  }
  
  leitura(vetor, qtdAlunos);
  exibeSituacaoAluno(vetor, qtdAlunos, 1);
  
  return 0;
  }