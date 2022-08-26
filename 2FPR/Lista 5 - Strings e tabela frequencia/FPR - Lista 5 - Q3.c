/*
Desenvolver uma função, em C, que, dada uma string s e dada uma posição p desta string, crie duas novas strings: s1 com os caracteres de s das posições 0 a p-1; e s2 com os caracteres de s da posição p à última.

Nota: Caso p seja uma posição inválida, a função deverá retornar o valor 0; caso contrário, procederá com a criação das duas strings e retornará o valor 1.

p sendo posição invalida é p<0; p>tamanhoString
*/
#include <stdio.h>
#include <string.h>

void exibeString(char s1[], char s2[]){
  printf("s1: %s\n", s1);
  printf("s2: %s", s2);
}

int criaString(char mainstring[], int p){
  int i,j;
  char s1[20];
  char s2[20];
  
  if(p<0 || p>strlen(mainstring)){
    return 0;
  }
  for ( i=0, j=p ; mainstring[i]!='\0' ; i++, j++ ){
    s1[i]=mainstring[i];
    s2[i]=mainstring[j];
  }
  s1[p]='\0';
  exibeString(s1,s2);
  return 1;
}

int main(void) {
  char stringS[20]="abacate   teste";
  int p=5;
  criaString(stringS,p);
  return 0;
}