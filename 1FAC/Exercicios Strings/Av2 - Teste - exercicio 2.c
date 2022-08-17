#include <stdio.h>
#include <string.h>

/* Faça uma função que receba duas strings e retorne True se a primeira string é prefixo da segunda ou False, caso contrário
*/
int receba (char s1[], char s2[]){
  int i, tam1, tam2, contador=0;
  tam1= strlen(s1);
  tam2= strlen(s2);

  if (tam1>=tam2){
    return 0;
  }
  else{
    for (i=0;i<tam1;i++){
      if(s1[i]==s2[i]){
        contador++;
      }
    }
  }
  if(contador==tam1){
    return 1;
  } 
  return 0;
}

int main(void) {
  char s1[30]="abaca", s2[30]="abacate";
  int resposta;
  resposta = receba(s1,s2);
  if (resposta==1){
    printf("\n\nTrue");
  }
  else {
    printf("\n\nFalse");
  }
  return 0;
}