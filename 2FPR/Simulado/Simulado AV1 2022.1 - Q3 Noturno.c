/*
Considere a existência do tipo TAluno contendo as seguintes informações sobre um aluno: nome, nota na AV1, nota na AV2, média e situação.
Dado, portanto, um vetor do tipo TAluno, contendo quant posições, fazer uma função que verifique se o vetor está ordenado, conforme os seguintes critérios:
1. As médias devem estar ordenadas de forma decrescente;
2. No caso de médias iguais, os respectivos nomes dos alunos devem estar ordenados crescentemente.
Caso o vetor esteja ordenado conforme regras citadas acima, a função deverá retornar a constante TRUE; caso contrário, FALSE.
*/


#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#define QUANT 2
  
typedef struct{
  char nome[10];
  float av1;
  float av2;
  char situacao[15];
  float media;
}TAluno;

//prototipo de funcao;
int questao3(TAluno vetor[], int qtdAlunos);

int verificaMedia(float m){
  if(m>=7)
    return 1;
  else if(m>=4)
    return 2;
  else
    return 0;
}

void preencheStruct(TAluno aluno[]){
  int i;
  for(i=0;i<QUANT;i++){
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]",aluno[i].nome);
    printf("Digite a nota da AV1: ");
    scanf("%f",&aluno[i].av1);
    printf("Digite a nota da AV2: ");
    scanf("%f",&aluno[i].av2);
    aluno[i].media=(aluno[i].av1+aluno[i].av2)/2;
    switch(verificaMedia(aluno[i].media)){
      case 1:
        strcpy(aluno[i].situacao,"Aprovado");
        break;
      case 2:
        strcpy(aluno[i].situacao,"Em final");
        break;
      default:
        strcpy(aluno[i].situacao,"Reprovado");
        break;
    }
    printf("\n");
  }
}

int main(void) {
  TAluno vetor[QUANT];
  preencheStruct(vetor);
  int resp=questao3(vetor, QUANT);
  if(resp){
    printf("Vetor ordenado");
  }
  else{
    printf("Vetor não ordenado");
  }
  return 0;
}

int questao3(TAluno vetor[], int qtdAlunos){

  for (int i = 0 ; i < qtdAlunos-1 ; i++){
    if( vetor[i].media < vetor[i+1].media ){
      return FALSE;
    }
    else{
      if ( vetor[i].media == vetor[i+1].media){
        if(strcmp(vetor[i].nome, vetor[i+1].nome) > 0){
          return FALSE;
        }
      }
    }
  }
  return TRUE;
}
