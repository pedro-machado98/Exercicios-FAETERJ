/*
Considere a existência de um vetor de structs com quant posições, onde cada uma destas armazena os seguintes dados sobre os funcionários de uma empresa: matricula (int), nome (string), gênero (char) e salário (float). Pede-se uma função que, dado um gênero, desloque todos os funcionários deste gênero para o início do vetor (e, consequentemente, os funcionários do outro gênero ficarão ao final do conjunto).
*/

#include <stdio.h>
#include <string.h>
#define TAM 5

typedef struct {
	int 	matricula;
	char	nome[20];
	char	genero;
	float 	salario; 	
} TFuncionario;

void questao3(TFuncionario v[], char genero, int quant){
  TFuncionario aux;
  int k=0;

  for ( int i = 0 ; i < quant ; i++){
    if( v[i].genero == genero ){
      aux.matricula = v[i].matricula;
      strcpy(aux.nome, v[i].nome);
      aux.genero = v[i].genero;
      aux.salario = v[i].salario;
      for ( int j = i ; j != 0 ; j--){
        v[j].matricula = v[j-1].matricula;
        strcpy(v[j].nome, v[j-1].nome);
        v[j].genero = v[j-1].genero;
        v[j].salario = v[j-1].salario;
      }
      v[k].matricula = aux.matricula;
      strcpy(v[k].nome, aux.nome);
      v[k].genero = aux.genero;
      v[k].salario = aux.salario;
    }
  }
}

void questao32(TFuncionario v[], char genero, int quant){
  TFuncionario aux[TAM];
  int k=0;
  
  for ( int i = 0 ; i < quant ; i++){
    if ( v[i].genero == genero ){
      aux[k].matricula = v[i].matricula;
      strcpy(aux[k].nome, v[i].nome);
      aux[k].genero = v[i].genero;
      aux[k].salario = v[i].salario;
      k++;
    }
  }
  
  for (int i = 0 ; i < quant ; i++ ){
    if (v[i].genero != genero){
      aux[k].matricula = v[i].matricula;
      strcpy(aux[k].nome, v[i].nome);
      aux[k].genero = v[i].genero;
      aux[k].salario = v[i].salario;
      k++;
    }
  }

  for (int i = 0 ; i < quant ; i++){
      v[i].matricula = aux[i].matricula;
      strcpy(v[i].nome, aux[i].nome);
      v[i].genero = aux[i].genero;
      v[i].salario = aux[i].salario;
  }
}
//COUKS COPIA ESSA

void exibirFuncionarios (TFuncionario vetor[], int quant){
	int i;
	printf ("\n\n");
	for (i=0;i<quant;i++){
		printf ("Matricula: %d\n", vetor[i].matricula);
		printf ("Nome: %s\n", vetor[i].nome);
		printf ("Genero: %c\n", vetor[i].genero);
		printf ("Salario: R$ %.2f\n\n", vetor[i].salario);
	}
}

int main(void) {

	TFuncionario vetor[TAM];
	int quantidade = 5;
	char genero='F';
	
	//inicializando o vetor de structs
	vetor[0].matricula = 1234;
	strcpy (vetor[0].nome, "MARIA");
	vetor[0].genero = 'F';
	vetor[0].salario = 5000;
	
	vetor[1].matricula = 2345;
	strcpy (vetor[1].nome, "JOSE");
	vetor[1].genero = 'M';
	vetor[1].salario = 3000;
	
	vetor[2].matricula = 3456;
	strcpy (vetor[2].nome, "JOAO");
	vetor[2].genero = 'M';
	vetor[2].salario = 6000;

	vetor[3].matricula = 4567;
	strcpy (vetor[3].nome, "ANA");
	vetor[3].genero = 'F';
	vetor[3].salario = 8000;	

	vetor[4].matricula = 5678;
	strcpy (vetor[4].nome, "PEDRO");
	vetor[4].genero = 'M';
	vetor[4].salario = 7000;

	//exibindo o vetor antes da chamada à função
	exibirFuncionarios (vetor, quantidade);

	//lendo o genero
	printf ("Entre com o genero desejado: ");
	fflush (stdin);
	scanf ("%c", &genero);
	
	//chamando a função
  questao32(vetor, genero, TAM);
  
	//exibindo o vetor depois da chamada à função
	exibirFuncionarios (vetor, quantidade);	
  
  return 0;
}