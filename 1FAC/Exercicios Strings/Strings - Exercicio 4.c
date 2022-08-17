#include <stdio.h>
#define TAM 50

void fillUpString (char s1[], char s2[]){
  printf("Digite a primeira string: ");
  scanf(" %[^\n]", s1);
  printf("Digite a segunda string: ");
  scanf(" %[^\n]", s2);
}

void shuffleString (char s1[], char s2[], char s3[]){
  int i, j=0;
  
  for (i=0;s1[i]!='\0'&&s2[i]!='\0';i++){
    s3[j]=s1[i];
    s3[1+j]=s2[i];
    j+=2;
  }
  for(i=i;s1[i]!='\0';i++){
    s3[j]=s1[i];
    j++;
  }
  for(i=i;s2[i]!='\0';i++){
    s3[j]=s2[i];
    j++;
  }
}

int main(void) {
  char s1[TAM], s2[TAM], s3[TAM];
  fillUpString(s1, s2);
  shuffleString(s1,s2,s3);

  printf("\nA frase embaralhada fica %s", s3);
  return 0;
}