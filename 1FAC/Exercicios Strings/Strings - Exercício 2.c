#include <stdio.h>
#include <string.h>


void mistura(char nome[], char sobrenome[], int n, char misturado[]){
  int i, tamanho, k, j=0;
//'\0'
  for (i=0;i<n;i++){
    misturado[j]=nome[i];
    misturado[j+1]=sobrenome[i];
    j+=2;
  }
  for(k=i;nome[k]!='\0';k++){
    misturado[j]=nome[k];
    j++;
  }
  for(k=i;sobrenome[i]!='\0';i++){
    misturado[j]=sobrenome[i];
    j++;
  }
}

int main (void){
  char nome[30]=("Pedro"), sobrenome[9]=("Machado"), misturado[60];
  int n=2;
  
  printf("Digite seu nome: ");
  scanf(" %[^\n]", nome);
  printf("Digite seu sobrenome: ");
  scanf(" %[^\n]", sobrenome);
  printf("Digite quantos caracteres quer intercalar: ");
  scanf("%d", &n);
  

  
  mistura(nome, sobrenome, n, misturado);

  printf("Intercalação dos dois nomes: %s", misturado);

  return 0;
}