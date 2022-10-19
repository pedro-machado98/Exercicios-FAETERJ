#include <stdio.h>
#include <string.h>
#define TAM 11

//prototipos

void questao2(char s1[], char s2[], char s3[]);

int main(void) {
  char s1[TAM]="abacatete";
  char s2[TAM]="casa";
  char s3[TAM]=""; //bte

  questao2(s1, s2, s3);

  printf("%s", s3);
  return 0;
}


void questao2(char s1[], char s2[], char s3[]){
  int flag, k=0;
  
  for ( int i = 0 ; s1[i] ; i++ ){
    flag=0;
    for ( int j = 0 ; s2[j] ; j++ ){
      if ( (s1[i] == s2[j]) || (s1[i] == s3[j]) ) {
        flag=1;
      }
    }
    if( flag == 0 ){
      s3[k]=s1[i];
      k++;
    }
  }
}