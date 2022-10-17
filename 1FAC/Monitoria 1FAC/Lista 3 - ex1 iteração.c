/*

MEU CODIGO:

#include <stdio.h>

float litrosPorPeso(int peso) { return 35 * (float)peso / 1000; }

int main(void) {
  int alunos;
  int turmas;
  int peso;
  float qtdAgua;
  int cont = 0;
  int contTurmas = 0;

  printf("\nQuantas turmas tem na escola: ");
  scanf("%d", &turmas);

  while (contTurmas < turmas) {
    printf("\nQuantos alunos existem na turma: ");
    scanf("%d", &alunos);
    while (cont < alunos) {
      printf("\nQual o peso do aluno: ");
      scanf("%d", &peso);
      qtdAgua = litrosPorPeso(peso);
      printf("\nO aluno precisa beber %.2fl", qtdAgua);
      cont++;
    }
    contTurmas++;
    cont = 0;
  }
  return 0;
}


#include <stdio.h>
int main(void) {
  int contaturma = 1, turma, contaluno = 1, aluno;
  float peso;
  printf("\nQuantas Turmas tem esse Honoravel Prof?");
  scanf("%d", &turma);
  while (contaturma <= turma) {
    printf("\nQuantos alunos tem essa turma %d?", contaturma);
    scanf("%d", &aluno);
    while (contaluno <= aluno) {
      printf("\nQual o peso desse do aluno %d?", contaluno);
      scanf("%f", &peso);
      printf("\nEsse aluno %d da turma %d precisa beber %.2f ", contaluno,
contaturma, 35*peso/1000); contaluno++;
    }
    contaturma++;
    contaluno=0;
  }
    return 0;
}

CODIGO DO ALUNO:
*/

#include <stdio.h>
int main(void) {
  int contaturma = 1, turma, contaluno = 1, aluno; //declarando e inicializando a variável de controle
  float peso;
  printf("Quantas Turmas tem esse Honoravel Prof?");
  scanf("%d", &turma);
  while (contaturma <= turma) // Testando a condição da turma
  {
    printf("Quantos alunos tem essa turma %d?", turma);
    scanf("%d", &aluno);
    while (contaluno <= aluno) // Testando a condição do aluno
    {
      printf("Qual o peso desse do aluno %f?", peso);
      scanf("%f", &peso);
      printf("Esse aluno %d da turma %d precisa beber %f *0.035 litros de agua", turma, aluno, peso); // Executando um comando dentro do laço
      contaluno++;                // atualizando a variável de controle
      contaturma++;               // atualizando a variável de controle
    }
    return 0;
  }
}