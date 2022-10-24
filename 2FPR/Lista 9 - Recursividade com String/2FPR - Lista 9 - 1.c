/*
Desenvolver uma função recursiva que determine o número de caracteres comuns entre duas strings s1 e s2.
*/
#include <stdio.h>
#include <string.h>
#define TAM 10

int caracteresComunsRAux (char s1[], char s2[], int i, int j){

  if(s1[i]){
    if (s2[j]){
      if (s1[i]==s2[j]){
        return 1 + caracteresComunsRAux(s1, s2, i, j+1);
      }
      else{
        return caracteresComunsRAux(s1, s2, i, j+1);
      }
    }
    return caracteresComunsRAux(s1, s2, i+1, 0);
  }
  return 0;
}

int caracteresComunsR (char s1[], char s2[]){
	return caracteresComunsRAux (s1, s2, 0, 0);
}

int main(void) {
  char s1[TAM]="casa"; //2 letras iguais
  char s2[TAM]="copa"; //3 letras iguais repetidas
  int nCaracteresIguais;
  
  printf("Digite uma palavra: ");
  scanf(" %[^\n]", s1);
  printf("Digite uma palavra: ");
  scanf(" %[^\n]", s2);

  nCaracteresIguais=caracteresComunsR(s1, s2);

  printf("As palavras '%s' e '%s' tem %d caracteres em comum", s1, s2, nCaracteresIguais);
  
  return 0;
}