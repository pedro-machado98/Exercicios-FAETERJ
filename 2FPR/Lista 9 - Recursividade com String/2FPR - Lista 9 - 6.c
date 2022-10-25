/*
Implementar uma função recursiva que, dados uma string str e um caracter ch, remova de str todas as ocorrências de ch, retornando o total de remoções realizadas.
*/

#include <stdio.h>
#include <string.h>

#define TAM 20

void deslocaCaracter(int i,char s[]){
  if(s[i]){
    s[i]=s[i+1];
    deslocaCaracter(i+1,s);
  } 
}

int removeCaracterRec(int i,char c,char s[]){
  if(s[i]){
    if(s[i]==c){
      deslocaCaracter(i,s);
      return 1+removeCaracterRec(i,c,s);
    }
    return removeCaracterRec(i+1,c,s);
  }
  return 0;
}

int removeCaracter(char c,char s[]){
  return removeCaracterRec(0,c,s);
}

int main(void) {
  char string[TAM],caracter;
  int result;
  printf("Digite a string: ");
  scanf(" %[^\n]",string);
  printf("Digite o caracter que deseja remover: ");
  scanf(" %c",&caracter);
  //caracter='a'; //strcpy(string,"abacaxi");
  result=removeCaracter(caracter,string);
  if(result)
    printf("Foram removidos %d caracteres. A nova string é %s.",result,string);
  else
    printf("Não foram realizadas remoções. A string original é %s.",string);
  return 0;
}