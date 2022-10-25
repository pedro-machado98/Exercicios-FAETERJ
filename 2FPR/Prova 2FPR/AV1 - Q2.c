/*
Dadas duas strings s1 e s2, implementar uma função que verifique se s1 é uma substring de s2 (retornando 1 caso seja ou 0, se não for).
*/

#include <stdio.h>
#include <string.h>
#define TAM 10


int questao2 (char s1[], char s2[]){
  int k=0;
  
  for ( int i = 0 ; s2[i] ; i++){
    if(s1[k] == s2[i]){
      k++;
      if(k==strlen(s1)){
        return 1;
      }
    }
    else{
      k=0;
    }
  }
  return 0;
}

int main(void) {
  char s1[TAM]="abc";
  char s2[TAM]="123abc456";

  printf("Resultado: %d", questao2(s1,s2));
  return 0;
}