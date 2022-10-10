/*
Uma pesquisa foi feita e cada entrevistado informou os seguintes dados: nome, gênero e idade. Todas as informações coletadas foram armazenadas sob a forma de um vetor de structs, cada posição armazenando os dados de um entrevistado. Pede-se o desenvolvimento de uma função que, dado um gênero, retorne a posição do entrevistado que atenda aos seguintes requisitos:

a. Deve ser do gênero especificado como parâmetro da função;

b. Caso mais de um entrevistado seja do gênero definido, deverá ser retornada a posição do entrevistado mais novo daquele gênero;

c. Por último, se houver mais de uma pessoa do gênero escolhido e com a menor idade, deverá ser retornada a posição da que possuir o nome que vier primeiro em uma ordem crescente alfabética.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 5

typedef struct{
  char nome[50];
  char genero;
  int idade;
}TEntrevistado;

int questao03 (TEntrevistado vetor[], int quant, char genero){
  int i, j, pos;
  int contGenero=0, contIdade=0, idade=1000;
  char nomeBase=120;

  for ( i=0 ; i<quant ; i++ ){
    if (vetor[i].genero==genero){
      contGenero++;
      pos=i;
    }
  }
  
  if(contGenero==1){
    return pos;
  }
  else{
    for ( i = 0 ; i < quant ; i++ ){
      if( (vetor[i].idade <= idade) && (vetor[i].genero == genero) ){
        if(vetor[i].idade == idade){
          contIdade++;
        }
        else{
          contIdade=1;
          pos=i;
          idade=vetor[i].idade;
        }
      }
    }
    if(contIdade==1){ //fazer flag para retornar se for um ou caso não seja, fazer a outra condicional
      return pos;
    }
    else{
      for ( i = 0 ; i < quant ; i++ ){
        if( (vetor[i].nome[0] < nomeBase) && (vetor[i].genero == genero) && (vetor[i].idade <= idade) ){
          nomeBase=vetor[i].nome[0];
          pos=i;
        }
      }
      return pos;
    }
  }
  return -1;
}

void preencherVetor (TEntrevistado vetor[], int quant){
  
	//1 entrevistado
	strcpy (vetor[0].nome, "JOAO");
	vetor[0].genero = 'M';
	vetor[0].idade = 42;

	//2 entrevistado
	strcpy (vetor[1].nome, "MARIA");
	vetor[1].genero = 'F';
	vetor[1].idade = 33;
	
	//3 entrevistado
	strcpy (vetor[2].nome, "JOSE");
	vetor[2].genero = 'M';
	vetor[2].idade = 35;
	
	//4 entrevistado
	strcpy (vetor[3].nome, "CARLOS");
	vetor[3].genero = 'M';
	vetor[3].idade = 33;
	
	//5 entrevistado
	strcpy (vetor[4].nome, "PEDRO");
	vetor[4].genero = 'M';
	vetor[4].idade = 37;
}

void preencherVetor2 (TEntrevistado vetor[], int quant){
	//1 entrevistado
	strcpy (vetor[0].nome, "JOAO");
	vetor[0].genero = 'M';
	vetor[0].idade = 42;

	//2 entrevistado
	strcpy (vetor[1].nome, "MARIA");
	vetor[1].genero = 'F';
	vetor[1].idade = 33;
	
	//3 entrevistado
	strcpy (vetor[2].nome, "JOSE");
	vetor[2].genero = 'M';
	vetor[2].idade = 35;
	
	//4 entrevistado
	strcpy (vetor[3].nome, "ANA");
	vetor[3].genero = 'F';
	vetor[3].idade = 33;
	
	//5 entrevistado
	strcpy (vetor[4].nome, "PEDRO");
	vetor[4].genero = 'M';
	vetor[4].idade = 37;
}

int main(void) {
	TEntrevistado pesquisa[TAM];
	char genero;
	int posicao;
	
	preencherVetor2 (pesquisa, TAM);
	
	printf ("\nEntre com o genero a ser pesquisado no vetor: ");
	fflush (stdin);
	scanf ("%c", &genero);
	genero = toupper (genero);

	posicao = questao03 (pesquisa, TAM, genero);
	if (posicao >= 0){
		printf ("\nPosicao retornada: %d", posicao);
	}
	else{
		printf ("\nNao foi encontrado entrevistado que atendesse aos filtros.");
	}
  return 0;
}