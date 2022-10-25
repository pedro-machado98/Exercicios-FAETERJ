/*
Dada uma matriz MLxC, onde L e C são constantes, desenvolver uma função que verifique se os elementos da matriz estão ordenados de forma crescente. Para isto, as seguintes regras devem ser atendidas:

a. Os elementos de cada linha devem estar ordenados crescentemente (ou seja, cada elemento será maior ou igual àquele da mesma linha, porém da coluna anterior – caso exista);
b. O primeiro elemento de cada linha deve ser maior ou igual ao último da linha anterior (caso exista).
Caso a matriz M atenda aos critérios definidos, o valor 1 deverá ser retornado pela função; caso contrário, 0.
*/


#include <stdio.h>
#define L 8
#define C 4

int questao1 (int m[L][C]){
  
  for ( int i = 0 ; i < L ; i++){
    for ( int j = 0 ; j < C ; j++){
      if ( (j == C-1) && (i != L-1) ){
        if(m[i][j] > m[i+1][0]){
          return 0;
        }
      }
      if ( (m[i][j] > m[i][j+1]) && (j!=C-1) ) {
        return 0;
      }
    }
  }
  return 1;
}

void exibirMatriz (int M[L][C]){
  
	int i, j;
	printf ("\nElementos da matriz:\n\n");
	for (i=0;i<L;i++){
		for (j=0;j<C;j++){
			printf ("%3d ", M[i][j]);
		}
		printf ("\n");
	}
	printf ("\n\n");
}

int main(void) {
	int matriz1[L][C] = {{ 1,  2,  3,  4},
	                     { 5,  6,  7,  8},
	                     { 8,  8,  9,  9},
	                     { 9, 10, 11, 12},
	                     {13, 13, 14, 15},
	                     {18, 19, 21, 22},
	                     {22, 23, 23, 24},
	                     {25, 28, 28, 30}};

	int matriz2[L][C] = {{ 1,  2,  3,  4},
	                     { 5,  6,  7,  8},
	                     { 8,  8,  9,  9},
	                     { 8, 10, 11, 12},
	                     {13, 13, 14, 15},
	                     {18, 19, 21, 22},
	                     {22, 23, 23, 24},
	                     {25, 28, 28, 30}};

  //------------ Testando a matriz 1

	//exibindo a matriz 1 antes da chamada à função
	exibirMatriz (matriz1);
	
	//chamando a função e exibindo se a matriz 1 atende ou não aos critérios
  printf("\nMatriz 1: %d\n",questao1(matriz1));


	//------------ Testando a matriz 2

	//exibindo a matriz 2 antes da chamada à função
	exibirMatriz (matriz2);
  printf("\nMatriz 2: %d\n",questao1(matriz2));
	
	//chamando a função e exibindo se a matriz 2 atende ou não aos critérios

  return 0;
}