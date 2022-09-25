/*
Dada uma string s, desenvolver uma função recursiva que determine se s é ou não um palíndromo.

  condição de parada: 

*/

#include <stdio.h>
#include <string.h>

int ehPalindromoRecursivo(char stringS[], int inicio, int fim){

  if( stringS[inicio]!=stringS[fim] ){
    return 0;
  }
  else{
    ehPalindromoRecursivo(stringS, (inicio/2)+1, (fim/2)-1);
    return 1;
  } 
}

int main(void) {
  char stringS[10]="banana";
  
  //printf("\nDigite uma palavra para saber se é um palindromo");
  //scanf(" %[^\n]", stringS);
  
  int resp=ehPalindromoRecursivo(stringS,0, strlen(stringS)-1);

  if(resp){
    printf("A palavra '%s' é um palindromo", stringS);
  }
  else{
    printf("A palavra '%s' não é um palindromo", stringS);
  }
  return 0;
}