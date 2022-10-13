/*
Determinada instituição de ensino armazena, sob a forma de vetores (de structs), as seguintes informações:
- Alunos: nome, matrícula;
- Disciplinas do curso: nome, código;
- Inscrições realizadas: matrícula do aluno, código da disciplina, semestre da inscrição (semestre/ano).

Pede-se o desenvolvimento de funções que realizem as seguintes operações: 

a: Exibir, para cada aluno, o total de inscrições já realizadas;
b: Dado um semestre, informar para cada disciplina o número de alunos inscritos.
*/

#include <stdio.h>
#include <string.h>
#define NUM_ALUNOS 5
#define NUM_DISCIPLINAS 4
#define NUM_INSCRICOES 10

typedef struct{
char nome[10];
int matricula;
}TAlunos;

typedef struct{
char nome[50];
char codigo[10];
}TDisciplinas;

typedef struct{
int semestre;
int ano;
}TData;

typedef struct{
int matricula;
char codigo[10];
TData semestre;
}TIncricoes;

//prototipos de funções
void preencherInscricoes(TIncricoes vetor[]);
void preencherAlunos(TAlunos vetor[]);
void preencherDisciplinas(TDisciplinas vetor[]);

void zeravetor(int vetor[], int limite);

void exibeTotalInscricoes (TIncricoes inscricoes[], TAlunos alunos[], int qtdAlunos, int qtdInscricoes);
void exibeNumeroDeIncritosPorSemestre(TIncricoes incricoes[], TDisciplinas disciplinas[], TAlunos alunos[], int qtdInscricoes, int qtdDisciplinas, int qtdAlunos, TData semestreAno);

int main(void) {
  TIncricoes vetorInscricoes[NUM_INSCRICOES];
  TDisciplinas vetorDisciplinas[NUM_DISCIPLINAS];
  TAlunos vetorAlunos[NUM_ALUNOS];
  TData semestreAno;
  
  preencherInscricoes(vetorInscricoes);
  preencherAlunos(vetorAlunos);
  preencherDisciplinas(vetorDisciplinas);

  printf("\nInforme o ano que deseja consultar: ");
  scanf("%d", &semestreAno.ano);
  printf("\nInforme o semestre que deseja consultar: ");
  scanf("%d", &semestreAno.semestre);
  exibeNumeroDeIncritosPorSemestre(vetorInscricoes, vetorDisciplinas, vetorAlunos, NUM_INSCRICOES , NUM_DISCIPLINAS, NUM_ALUNOS, semestreAno);
  
  return 0;
}

void exibeNumeroDeIncritosPorSemestre(TIncricoes incricoes[], TDisciplinas disciplinas[], TAlunos alunos[], int qtdInscricoes, int qtdDisciplinas, int qtdAlunos, TData semestreAno){
  int i, j;
  int contInscricao=0;
  
  for( i = 0; i < qtdDisciplinas ; i++ ){
    for ( j = 0 ; j < qtdInscricoes ; j++ ){
      if( (semestreAno.ano == incricoes[j].semestre.ano) && (semestreAno.semestre == incricoes[j].semestre.semestre) && ( strcmp(disciplinas[i].codigo, incricoes[j].codigo) == 0)){
        contInscricao++;
      }
    }
    printf("\nDisciplina: %s\nIncrições: %d\n\n", disciplinas[i].nome, contInscricao);
    contInscricao=0;
  }
}

void exibeTotalInscricoes (TIncricoes inscricoes[], TAlunos alunos[], int qtdAlunos, int qtdInscricoes){
  int i, j;
  int contIncricao=0;

  for( i = 0 ; i < qtdAlunos ; i++ ){
    for (j = 0 ; j < qtdInscricoes ; j++ ){
      if( alunos[i].matricula == inscricoes[j].matricula ){
        contIncricao++;
      }
    }
    printf("Aluno matricula: %s\nIncrições: %d\n\n", alunos[i].nome, contIncricao);
    contIncricao=0;
  }
}

void preencherInscricoes (TIncricoes inscricoes[]){
	//inscrição 1
	inscricoes[0].matricula = 12345;
	strcpy (inscricoes[0].codigo, "1FAC");
	inscricoes[0].semestre.semestre = 1;
	inscricoes[0].semestre.ano = 2021;
	
	//inscrição 2
	inscricoes[1].matricula = 12345;
	strcpy (inscricoes[1].codigo, "1ORG");
	inscricoes[1].semestre.semestre = 1;
	inscricoes[1].semestre.ano = 2021;
	
	//inscrição 3
	inscricoes[2].matricula = 12345;
	strcpy (inscricoes[2].codigo, "2FPR");
	inscricoes[2].semestre.semestre = 2;
	inscricoes[2].semestre.ano = 2021;
	
	//inscrição 4
	inscricoes[3].matricula = 12345;
	strcpy (inscricoes[3].codigo, "3ESD");
	inscricoes[3].semestre.semestre = 1;
	inscricoes[3].semestre.ano = 2022;
	
	//inscrição 5
	inscricoes[4].matricula = 23456;
	strcpy (inscricoes[4].codigo, "1FAC");
	inscricoes[4].semestre.semestre = 2;
	inscricoes[4].semestre.ano = 2021;
	
	//inscrição 6
	inscricoes[5].matricula = 23456;
	strcpy (inscricoes[5].codigo, "1ORG");
	inscricoes[5].semestre.semestre = 2;
	inscricoes[5].semestre.ano = 2021;
	
	//inscrição 7
	inscricoes[6].matricula = 23456;
	strcpy (inscricoes[6].codigo, "2FPR");
	inscricoes[6].semestre.semestre = 1;
	inscricoes[6].semestre.ano = 2022;
	
	//inscrição 8
	inscricoes[7].matricula = 34567;
	strcpy (inscricoes[7].codigo, "1FAC");
	inscricoes[7].semestre.semestre = 2;
	inscricoes[7].semestre.ano = 2021;
	
	//inscrição 9
	inscricoes[8].matricula = 45678;
	strcpy (inscricoes[8].codigo, "1ORG");
	inscricoes[8].semestre.semestre = 1;
	inscricoes[8].semestre.ano = 2022;
	
	//inscrição 10
	inscricoes[9].matricula = 56789;
	strcpy (inscricoes[9].codigo, "2FPR");
	inscricoes[9].semestre.semestre = 1;
	inscricoes[9].semestre.ano = 2022;
}

void preencherAlunos (TAlunos alunos[]){
	//aluno 1
	strcpy (alunos[0].nome, "JOAO");
	alunos[0].matricula = 12345;
	
	//aluno 2
	strcpy (alunos[1].nome, "MARIA");
	alunos[1].matricula = 23456;
	
	//aluno 3
	strcpy (alunos[2].nome, "ANA");
	alunos[2].matricula = 34567;
	
	//aluno 4
	strcpy (alunos[3].nome, "PEDRO");
	alunos[3].matricula = 45678;
	
	//aluno 5
	strcpy (alunos[4].nome, "CLARA");
	alunos[4].matricula = 56789;
}

void preencherDisciplinas (TDisciplinas disciplinas[]){
	//disciplina 1
	strcpy (disciplinas[0].nome, "ORGANIZACAO DE COMPUTADORES");
	strcpy (disciplinas[0].codigo, "1ORG");

	//disciplina 2
	strcpy (disciplinas[1].nome, "FUNDAMENTOS DE ALGORITMOS DE COMPUTACAO");
	strcpy (disciplinas[1].codigo, "1FAC");

	//disciplina 3
	strcpy (disciplinas[2].nome, "FUNDAMENTOS DE PROGRAMACAO");
	strcpy (disciplinas[2].codigo, "2FPR");

	//disciplina 4
	strcpy (disciplinas[3].nome, "ESTRUTURAS DE DADOS");
	strcpy (disciplinas[3].codigo, "3ESD");
}