#include <stdio.h>
#include <string.h>

/*
Faça uma função que receba duas strings e retorne True se todos os caracteres da primeira string pertençam à segunda, ou False, caso contrário
*/

int comparaTodasAsLetras (char s1[], char s2[]){
  int i, j, contador=0, flag_true=0;

  for (i=0;s1[i]!='\0';i++){
    for(j=0;s2[j]!='\0';j++){
      if (s1[i]==s2[j]){
        contador++;
      }
    }
    if(contador>=1){
      flag_true++;
      contador=0;
    }
  }
  if (flag_true==strlen(s1)){
    return 1;
  }
  else{
    return 0;
  }
}


int main(void) {
  char s1[10]="ataca", s2[10]= "abacate";
  int resposta;
  resposta=comparaTodasAsLetras(s1, s2);
  if(resposta==1){
    printf("True");
  }
  else{
    printf("False");
  }
  return 0;
}