#include <stdio.h>

float calculaMediaAluno(float notaDaProva, float notaMediatrabalho){
  return 0.85*notaDaProva+0.15*notaMediatrabalho;
}

int main(void) {
  int matricula, acimade7=0, abaixode3=0, contamenor=0, contamaior=0, maiorMedia=0, menorMedia=0;
  int contador=0;
  float notaDaProva, notaMediaTrabalho, mediaAluno, somaMediaAluno, menorNota=10, maiorNota=0;
  
  printf("\nDigite a matricula do aluno(0 para finalizar): ");
  scanf("%d", &matricula);

  while(matricula!=0){
    printf("Digite a nota da sua prova: ");
    scanf("%f", &notaDaProva);
    printf("Digite a média dos trabalhos: ");
    scanf("%f", &notaMediaTrabalho);
    mediaAluno = calculaMediaAluno(notaDaProva, notaMediaTrabalho);
    if(mediaAluno<3){
      abaixode3++;
    }
    if(mediaAluno>7){
      acimade7++;
    }
    if(mediaAluno>=maiorNota){
      if(maiorNota==mediaAluno){
        maiorMedia++;
      }
      else{
        maiorNota=mediaAluno;
        maiorMedia=1;
      }
    }
    if(mediaAluno<=menorNota){
      if(menorNota==mediaAluno){
        menorMedia++;
      }
      else{
        menorNota=mediaAluno;
        menorMedia=1;
      }
    }
    contador++;
    somaMediaAluno+=mediaAluno; //somaMediaAluno=somaMediaAluno+mediaAluno;
    printf("\nA média do aluno de matricula %d é: %.2f", matricula, mediaAluno);
  
    printf("\n\n\nDigite a matricula do aluno(0 para finalizar): ");
    scanf("%d", &matricula);
  }
  
  printf("\n\n\nAlunos com nota acima de 7: %d", acimade7);
  printf("\nAlunos com nota abaixo de 3: %d", abaixode3);
  printf("\nMédia da turma: %.2f", somaMediaAluno/contador);
  printf("\n%d alunos tiraram a menor nota: %.2f", menorMedia, menorNota);
  printf("\n%d alunos tiraram a maior nota: %.2f", maiorMedia, maiorNota);
  
  return 0;
}
