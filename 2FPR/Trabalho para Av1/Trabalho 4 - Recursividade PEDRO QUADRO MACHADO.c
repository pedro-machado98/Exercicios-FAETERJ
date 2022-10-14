/*
Considere uma string s contendo apenas letras e algarismos. Desenvolver uma função recursiva que verifique se as letras de s estão em seu início (e, consequentemente, os algarismos ao seu final). Se estiverem, a função retornará 1; caso contrário, 0.
*/

#include <stdio.h>
#include <string.h>
#define FALSE 0
#define TRUE 1

int verificaContinuidadeString (char string[], int cont, int flagNumero){
  
  if (string[cont] == '\0'){
    return TRUE;
  }
  else{
    if ( (string[cont] >= 65 && string[cont] <= 90) || (string[cont] >= 97 && string[cont] <= 122) ) {
      if(flagNumero==1){
        return FALSE;
      }
      return verificaContinuidadeString(string, cont+1, 0);
    }
    else{
      return verificaContinuidadeString(string, cont+1, 1);
    }
  }
}

int main(void) {
  char string[20]="ABCD1234";
  int cont=0;
  int flagLetra=0;
  int flagNumero=0;
  int x;
  x = verificaContinuidadeString(string, cont, flagNumero);

  if(x){
    printf("A sequencia esta correta");
  }
  else{
    printf("A sequencia esta errada");
  }
  return 0;
}