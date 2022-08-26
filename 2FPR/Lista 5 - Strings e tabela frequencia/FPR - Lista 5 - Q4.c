/*
Desenvolver uma função que remova de uma string s os caracteres compreendidos entre as posições p1 e p2. Caso p1 ou p2 seja uma posição inválida, a função deverá retornar o valor 0 e a remoção de caracteres solicitada não será realizada; caso contrário, deverá retornar 1 e proceder com o que foi pedido.
*/
#include <stdio.h>
#include <string.h>

void exibeString(char s[]){
  printf("s1: %s\n", s);
}

int criaString(char mainstring[], int p1, int p2){
  int i,j;
  char stringAux[20];
  
  if( (p1<0) || (p1>strlen(mainstring)) || (p2<p1) || (p2>=strlen(mainstring)) ){
    return 0;
  }
  for ( i=0; i<p1 ; i++ ){
    stringAux[i]=mainstring[i];
  }
  for ( j=p2+1; j<strlen(mainstring); j++, i++ ){
    stringAux[i]=mainstring[j];
  }
  strcpy(mainstring, stringAux);
  mainstring[i]='\0';
  exibeString(mainstring);
  return 1;
}

int main(void) {
  char stringS[20]="abacate"; // deve printar "abe"
  int p1=2;
  int p2=5;
  int a = criaString(stringS, p1, p2);
  printf("%d", a);
  return 0;
}