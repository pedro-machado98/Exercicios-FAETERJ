/*
Considere uma loja que mantém em uma matriz o total vendido por cada funcionário pelos diversos meses do ano. Ou seja, uma matriz de 12 linhas (uma por mês) e 10 colunas (10 funcionários). Pede-se o desenvolvimento de uma função para cada item abaixo:

a. Calcular o total vendido durante o ano;

b. Dado um mês fornecido pelo usuário, determinar o total vendido nesse mês;

c. Dado um funcionário fornecido pelo usuário, determinar o total vendido por ele durante o ano;

d. Determinar o mês com maior índice de vendas;

e. Determinar o funcionário que menos vendeu durante o ano.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoesBase.h"

int somaTotalMatriz(int rows, int cols, int matriz[][cols]){
  int i,j, total=0;

  for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
      total+=matriz[i][j];
    }
  }
  return total;
}

int somaLinhasMatriz2(int rows, int cols, int matriz[][cols], int linha){
  int j, total=0;

    for(j=0;j<cols;j++){
      total+=matriz[linha][j];
    }
  return total;
}

int somaColunasMatriz2(int rows, int cols, int matriz[][cols], int coluna){
  int i, total=0;

    for(i=0;i<rows;i++){
      total+=matriz[i][coluna];
    }
  return total;
  }

int mediaLinhasMatriz(int rows, int cols, int tamanhoVetor, int matriz[][cols]){
  int i, maiorIndice;
  int vetorMediaVendasMes[12];
  inicializaVetor(12, vetorMediaVendasMes);
  
  for (i=0;i<tamanhoVetor;i++){
    vetorMediaVendasMes[i]+=somaLinhasMatriz2(rows, cols, matriz, i);  
  }
  maiorIndice = determinaMaiorMesVenda(tamanhoVetor, vetorMediaVendasMes);
  return maiorIndice+1;
}

int determinaMaiorMesVenda(int tamanho, int vetorMediaVendasMes[]){
  int i, maiorIndice=0, cont;
  for(i=0; i<tamanho;i++){
    if(vetorMediaVendasMes[i]>maiorIndice){
      maiorIndice=vetorMediaVendasMes[i];
      cont=i;
    }
  }
  return cont;
}

int mediaColunasMatriz(int rows, int cols, int tamanhoVetor, int matriz[][cols]){
  int i, menorIndice;
  int vetorMediaVendasFuncionario[10];
  inicializaVetor(10, vetorMediaVendasFuncionario);
  for (i=0;i<tamanhoVetor;i++){
    vetorMediaVendasFuncionario[i]+=somaColunasMatriz2(rows, cols, matriz, i);
  }
  menorIndice=determinaMenorFuncionarioVenda(tamanhoVetor, vetorMediaVendasFuncionario);
  
  return menorIndice+1;
}

int determinaMenorFuncionarioVenda(int tamanho, int vetorMediaVendasFuncionario[]){
  int i, menorIndice=1000, cont;
  for(i=0;i<tamanho;i++){
    if (vetorMediaVendasFuncionario[i]<menorIndice){
      menorIndice=vetorMediaVendasFuncionario[i];
      cont=i;
    }
  }
  return cont;
}


int main(void) {
  int matriz[12][10];
  int total, totalNoMes, totalPorFuncionario, mesMaiorVenda, funcionarioMenorVenda;
  int vetorChecagemMes[12];
  int vetorChecagemFuncionario[10];
  
  srand(time(NULL));

  randomizaMatriz(12, 10, matriz);
  
  inicializaVetor(12, vetorChecagemMes);
  inicializaVetor(12, vetorChecagemFuncionario);
  

  total = somaTotalMatriz(12, 10, matriz);
  totalNoMes = somaLinhasMatriz2(12,10,matriz,1);
  totalPorFuncionario = somaColunasMatriz2(12, 10, matriz, 1);
  mesMaiorVenda = mediaLinhasMatriz(12, 10, 12, matriz);
  funcionarioMenorVenda=mediaColunasMatriz(12, 10, 10, matriz);

  exibeMatriz(12, 10, matriz);
  
  printf("\n\n\n");
  
  printf("Total vendido no ano: R$%d\n", total);
  printf("Total vendido no mês %d : R$%d\n",2, totalNoMes);
  printf("Total vendido pelo funcionario %d: R$%d\n", 2, totalPorFuncionario);
  printf("Mês com maior indice de venda: %d\n", mesMaiorVenda);
  printf("Funcionario com menor indice de venda: %d\n", funcionarioMenorVenda);



  
 // =================================== TESTES ===============================================//
  somaLinhasMatriz(12, 10, matriz, vetorChecagemMes);
  somaColunasMatriz(12, 10, matriz, vetorChecagemFuncionario);
  
  printf("\n\n\n");
  printf("Vetor com o somatorio de todos os meses para checagem:\n");
  exibeVetor(12, vetorChecagemMes);
  
  printf("\n\n\n");
  printf("Vetor com o somatorio de todos os funcionarios para checagem:\n");
  exibeVetor(10, vetorChecagemFuncionario);
  return 0;
}