/*
Desenvolver uma função que, dada uma string s, crie uma substring que inicie na posição p de s e contenha n caracteres.

Observações: se p e/ou n forem inválidos, a substring será vazia; ii) se s não possuir n caracteres além de p, a substring a ser criada começará em p e terminará no final de s.
*/

#include <stdio.h>
#include <string.h>
void criaSubString(char s[], int p, int n, char sub[]){
  int tamString, i, j;
  tamString = strlen(s);

  if ((p<0) || p>tamString || n<0 || n>tamString){
    //sub[0]="";
    strcpy(sub, "abc");
  }
  else{
    for (i=p, j=0;(s[p]!='\0') && (j<n) ;i++, j++){
      sub[j]=s[i];
    }
  }
  sub [j]= '\0';
}

int main(void) {
  char s[100]="Algoritmos", sub[100];
  int p=20;
  int n=8;
  criaSubString(s, p, n, sub);
  printf("String: %s",sub); 
  return 0;
}