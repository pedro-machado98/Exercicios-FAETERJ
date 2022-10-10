/*
Desenvolver uma função que receba duas matrizes de inteiros, ambas de ordem 10, com as seguintes características:

a. M1: matriz contendo números inteiros
quaisquer;
b. M2: matriz contendo apenas os valores 0 ou 1.

Desenvolver uma função que a partir destas matrizes gere a matriz M3, também de ordem 10, cujos elementos são definidos da seguinte forma:
M2ij = 0 → M3ij = M1ij
M2ij = 1 → M3ij = soma dos elementos da linha i com os da coluna j da matriz.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ORDEM 10

//prototipos de funções
void questao01 (int m1[ORDEM][ORDEM], int m2[ORDEM][ORDEM], int m3[ORDEM][ORDEM]);

void preencherMatriz (int m[ORDEM][ORDEM], int limite);
void exibirMatriz (int m[ORDEM][ORDEM]);

//main
int main (void){
	//declaração de variaveis
	int matriz1[ORDEM][ORDEM], matriz2[ORDEM][ORDEM], matriz3[ORDEM][ORDEM];
		
	//preenchendo a primeira matriz com numeros aleatorios com 
	//numeros de 0 a 5
	preencherMatriz (matriz1, 5);

	//preenchendo a segunda matriz aleatoriamente com 0s e 1s
	preencherMatriz (matriz2, 1);
	
	//exibindo a primeira matriz
	exibirMatriz (matriz1);

	//exibindo a segunda matriz
	exibirMatriz (matriz2);

	//chamando a função
	questao01 (matriz1, matriz2, matriz3);
	
	//exibindo a terceira matriz, recem-gerada
	exibirMatriz (matriz3);

}

void questao01 (int m1[ORDEM][ORDEM], int m2[ORDEM][ORDEM], int m3[ORDEM][ORDEM]){
  int i, j, k, l;
  int acumulador=0;
  
  for (i=0; i<ORDEM; i++){
    for (j=0; j<ORDEM; j++){
      if(m2[i][j]==0){
        m3[i][j]=m1[i][j];
      }
      else{
        for (k=0; k<ORDEM; k++){
          acumulador+=m1[i][k];
        }
        for (k=0; k<ORDEM; k++){
          acumulador+=m1[k][j];
        }
          acumulador-=m1[i][j];
          m3[i][j]=acumulador;
          acumulador=0;
      }
    }
  }
}

void preencherMatriz (int m[ORDEM][ORDEM], int limite){
	int i, j;
  
	srand (time(NULL));
	
	for (i=0;i<ORDEM;i++){
		for (j=0;j<ORDEM;j++){
			m[i][j] = rand()%(limite + 1);
		}
	}
}

void exibirMatriz (int m[ORDEM][ORDEM]){
	int i, j;
	for (i=0;i<ORDEM;i++){
		for (j=0;j<ORDEM;j++){
			printf ("%3d ", m[i][j]);
		}
		printf ("\n");
	}
	printf ("\n\n");
}
