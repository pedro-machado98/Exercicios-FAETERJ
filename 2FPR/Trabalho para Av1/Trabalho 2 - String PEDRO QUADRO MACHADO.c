/*
PEDRO QUADRO MACHADO
Desenvolver uma função que, dada uma string s, determine se todos os seus caracteres são distintos.  
*/
#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0  

int determinaDistintos(char s[]){
  
  for (int i = 0; s[i] ; i++){
    for(int j = 0 ; j < i ; j++ ){
      if (s[i] == s[j]){
        return FALSE;
      }
    }
  }
  return TRUE;
}

int main(void) {
  
  char s[20]="test";
  int x;
  
  x = determinaDistintos(s);

  if (x){
    printf("String não contem caracteres repetidos");
  }
  else{
    printf("String contem caracteres repetidos");
  }
  return 0;
}