/*
O histórico de um aluno é representado por um vetor de structs onde cada posição armazena o código da disciplina cursada, semestre e ano que a cumpriu e a média final na disciplina.
Implementar uma função que exiba o histórico do aluno com o seguinte formato:
NomeDisciplina1 (código1) MédiaDisciplina1
NomeDisciplina2 (código2) MédiaDisciplina2
                  .
                  .
                  .
NomeDisciplinaN (códigoN) MédiaDisciplinaN
Coeficiente de rendimento: CR

Observações:
1. Para obter os dados da disciplina, um outro vetor de structs deve ser consultado. Este, por sua vez, armazena para cada disciplina do curso as seguintes informações: código, nome e número de créditos;
2. O coeficiente de rendimento consiste em uma média ponderada de todos os graus atribuídos às disciplinas cursadas, onde os pesos são representados pelo número de créditos da disciplina;
3. Todos os dados em negrito apresentados noformato do histórico devem ser obtidos a partir dos vetores.
*/

#include <stdio.h>
#include <string.h>
#define HISTORICO 3
#define DISCIPLINA 3


typedef struct{
  int ano;
  int semestre;
}Tdata;

typedef struct{
  int codigo;
  Tdata semestre;
  float mediafinal;
}Thistorico;

typedef struct{
  int codigo;
  char nome[10];
  int creditos;
}Tdisciplina;

void preencheHistorico (Thistorico historico[]);
void preencheDisciplinas (Tdisciplina disciplinas[]);
void exibeHistoricoAluno (Tdisciplina disciplinas[], Thistorico historico[], int qtdHistorico, int qtdDisciplinas);

int main(void) {
  Tdisciplina disciplina[DISCIPLINA];
  Thistorico historico[HISTORICO];

  preencheDisciplinas(disciplina);
  preencheHistorico(historico);

  exibeHistoricoAluno(disciplina, historico, HISTORICO, DISCIPLINA);

  return 0;
}

void exibeHistoricoAluno (Tdisciplina disciplinas[], Thistorico historico[], int qtdHistorico, int qtdDisciplinas){
  int somatorioCR=0;
  float somatorioMedias=0;
  int vetorAux;
  
  for (int i = 0 ; i < qtdHistorico ; i++){
    for (int j = 0 ; j < qtdDisciplinas; j++){
      if (historico[i].codigo == disciplinas[j].codigo ){
        printf("%s\t(%d)\t%.2f\n", disciplinas[j].nome, disciplinas[j].codigo, historico[i].mediafinal);
        somatorioCR += disciplinas[j].creditos;
        somatorioMedias = somatorioMedias + (historico[i].mediafinal * disciplinas[j].creditos);
      }
    }
  }
  printf("Coeficiente de rendimento: %.2f", somatorioMedias/somatorioCR);
}

void preencheHistorico (Thistorico historico[]){
  historico[0].codigo=123;
  historico[0].semestre.ano=2021;
  historico[0].semestre.semestre=2;
  historico[0].mediafinal=5;

  historico[1].codigo=456;
  historico[1].semestre.ano=2022;
  historico[1].semestre.semestre=1;
  historico[1].mediafinal=10;

  historico[2].codigo=789;
  historico[2].semestre.ano=2022;
  historico[2].semestre.semestre=1;
  historico[2].mediafinal=10;
/*
  historico[3].codigo=456;
  historico[3].semestre.ano=2022;
  historico[3].semestre.semestre=1;
  historico[3].mediafinal=7;

  historico[4].codigo=789;
  historico[4].semestre.ano=2022;
  historico[4].semestre.semestre=1;
  historico[4].mediafinal=9;
*/
}

void preencheDisciplinas (Tdisciplina disciplinas[]){
  disciplinas[0].codigo=123;
  strcpy(disciplinas[0].nome, "port");
  disciplinas[0].creditos=4;
  
  disciplinas[1].codigo=456;
  strcpy(disciplinas[1].nome, "mate");
  disciplinas[1].creditos=2;
  
  disciplinas[2].codigo=789;
  strcpy(disciplinas[2].nome, "biol");
  disciplinas[2].creditos=4;
  
}