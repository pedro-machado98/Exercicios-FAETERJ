/*
O dia de matrícula dos calouros depende do curso desejado. Há 34 cursos identificados por
um número qualquer
Faça um programa que capture o número do curso e o dia do mês de janeiro que os alunos
deste curso deverão fazer matrícula.
A seguir, para cada aluno aprovado (matrícula e curso) exiba na tela sua matrícula, curso e dia
que deverá comparecer para se inscrever
*/ 

#include <stdio.h>
#include <stdlib.h>
#define tam 2

int busca_Curso(int n, int vN[], int buscado){
  int i;
    for(i=0;i<n;i++){
      if(vN[i]==buscado){
        return i;
      }
    }
  return -1;
}

int main(void) {
  int vcursos[tam], vDia[tam], matricula, i, pos, curso;

  for(i=0;i<tam;i++){
    printf("\nDigite o numero do seu curso: ");
    scanf("%d", &vcursos[i]);
    printf("\nDigite o dia da matricula: ");
    scanf("%d", &vDia[i]);
  }
  printf("----------------------------------------");
  printf("\nDigite a matricula: ");
  scanf("%d", &matricula);

  while(matricula!=0){

    printf("\nDigite o numero do seu curso: ");
    scanf("%d", &curso);
    pos=busca_Curso(tam, vcursos, curso);
    printf("\n\nMatricula: %d\nCurso: %d\nDia: %d", matricula, curso, vDia[pos]);
    printf("\n\n\nDigite a matricula: ");
    scanf("%d", &matricula);
  }

    
  return 0;
}