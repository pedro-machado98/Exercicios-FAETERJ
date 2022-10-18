/*
Desenvolver uma função que, dada uma matriz de inteiros M10x10, troque de posição os elementos da linha L com os valores da coluna C. Caso a troca seja possível, a função deverá retornar a constante TRUE; caso contrário, FALSE.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ORDEM 4
#define TRUE 1
#define FALSE 0

void preencherMatriz (int m[ORDEM][ORDEM], int limite);
void exibirMatriz (int m[ORDEM][ORDEM]);
int questao1 (int matriz[ORDEM][ORDEM], int l, int c);

int questao2 (int matriz[ORDEM][ORDEM], int l, int c){
  int i;
  int vetoraux[ORDEM];

  if ( (matriz[l][c-1] == matriz[l+1][c]) && (l<ORDEM) && (c<ORDEM) ){
    for(int j = 0 ; j < ORDEM ; j++){
      vetoraux[j]=matriz[l][j];
    }
    for (int j = 0 ; j < ORDEM ; j++){
      matriz[l][j]=matriz[j][c];
      matriz[j][c]=vetoraux[j];
    }
    return TRUE;
  }
  else{
    return FALSE;
  }
  return 1;
}

int main(void) {
  int matriz[ORDEM][ORDEM];
  int l = 2; 
  int c = 3; 
  int resp;

  preencherMatriz(matriz, 5);
  exibirMatriz(matriz);
  //resp = questao1(matriz, 2,3);
  resp = questao2(matriz, l, c);

  if(resp){
    printf("\nOperação bem sucedida\n");
  }
  else{
    printf("\nOperação não efetuada\n");
  }
  exibirMatriz(matriz);
  return 0;
}

int questao1 (int matriz[ORDEM][ORDEM], int l, int c){
  int i, j;
  int vetoraux[ORDEM];
    for (j = 0 ; j < ORDEM ; j++){
      vetoraux[j]=matriz[l][j];
      matriz[l][j]=matriz[j][c];
      matriz[j][c]=vetoraux[j];
    }
  return 1;
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
	printf ("\n");
	for (i=0;i<ORDEM;i++){
		for (j=0;j<ORDEM;j++){
			printf ("%3d ", m[i][j]);
		}
		printf ("\n");
	}
	printf ("\n\n");
}
