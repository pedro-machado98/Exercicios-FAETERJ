/*
Considere um vetor que armazene alguns dados coletados de um grupo de pessoas em uma pesquisa, a saber: nome, gênero, idade e altura.

Desenvolver uma função que receba os parâmetros gênero, faixa de idade (idade inicial e idade final) e faixa de altura (altura inferior e altura superior) e retorne a quantidade de pessoas que atendem aos filtros por ele representados.

Nota: caso o gênero especificado seja igual a M, serão considerados os homens que estiverem nas faixas de idade e altura especificadas; o mesmo ocorrerá com as mulheres, quando o gênero for F. Porém, se o gênero contiver qualquer valor diferente de M ou F, todas as pessoas que atenderem aos filtros de idade e altura serão contabilizadas.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 3

typedef struct{
char nome[25];
char genero;
int idade;
int altura;
}Tpessoas;

//prototipos
void preencheStruct(Tpessoas vetor[]);
int buscaPessoas (Tpessoas vetor[], char genero, int idadeInicial, int idadeFinal, int alturaInferior, int alturaSuperior);


int main(void) {
  Tpessoas vetor[3];
  char genero;
  int idadeInicial=20, idadeFinal=32;
  int alturaInferior=100, alturaSuperior=200;
  int x;

  preencheStruct(vetor);
  
  printf("\nDigite o genero a ser buscado (M ou F): ");
  scanf(" %[^\n]", &genero);
  
  printf("\nDigite a idade inicial: ");
  scanf("%d", &idadeInicial);
  
  printf("\nDigite a idade final: ");
  scanf("%d", &idadeFinal);
  
  printf("\nDigite a altura a ser buscada em cm: ");
  scanf("%d", &alturaInferior);
  
  printf("\nDigite a altura a ser buscada em cm: ");
  scanf("%d", &alturaSuperior);

  
  x = buscaPessoas(vetor, toupper(genero), idadeInicial, idadeFinal, alturaInferior, alturaSuperior);

  printf("\n%d", x);
  return 0;
}

int buscaPessoas (Tpessoas vetor[], char genero, int idadeInicial, int idadeFinal, int alturaInferior, int alturaSuperior){
  int cont=0;
  
  for (int i = 0; i < TAM ; i++ ){
    if ( genero == 'M' || genero == 'F' ){
      if ( (genero == vetor[i].genero)  && (idadeInicial < vetor[i].idade) && (idadeFinal > vetor[i].idade) && (alturaInferior < vetor[i].altura) && (alturaSuperior > vetor[i].altura) ){
        cont++;
      }
    }
    else{
      if ( (idadeInicial < vetor[i].idade) && (idadeFinal > vetor[i].idade) && (alturaInferior < vetor[i].altura) && (alturaSuperior > vetor[i].altura) ){
        cont++;
      }
    }
  }
  return cont;
}

void preencheStruct(Tpessoas vetor[]){
  strcpy(vetor[0].nome, "Pedro");
  vetor[0].genero = 'M';
  vetor[0].idade=23;
  vetor[0].altura=180;
  
  strcpy(vetor[1].nome, "Laura");
  vetor[1].genero = 'F';
  vetor[1].idade=18;
  vetor[1].altura=160;
  
  strcpy(vetor[2].nome, "Matheus");
  vetor[2].genero = 'M';
  vetor[2].idade=30;
  vetor[2].altura=170;
  
  //strcpy(vetor[0].nome, "");
  //vetor[0].genero = '';
  //vetor[0].idade=;
  //vetor[0].altura=;
  
  
}