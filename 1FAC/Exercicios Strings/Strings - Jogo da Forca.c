#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 30

int monta_palavra(char forca[], char adivinha[]){
  int i, num;
  num = strlen(forca);
  
  for (i=0;i<num;i++){
    adivinha[i]='_';
  }
  printf(" %s", adivinha);
  return num;
}

int brinca_forca (char palavra[], char adivinha[], int num){
  char tentativa;
  int i=0, cont=0;

  while (strcmp(adivinha, palavra)!=0){
    printf("\nDigite uma letra: ");
    scanf(" %c", &tentativa);
    for (i=0;i<num;i++){
      if(tentativa==palavra[i]){
        adivinha[i]=tentativa;
      }
    }
    printf("\n %s\n", adivinha);
    cont++;
  }
  return cont;
}

int main(void) {
  char forca[tam]="tentativa", adivinha[tam];
  int num, cont;
  
  num=monta_palavra(forca, adivinha);
  cont=brinca_forca(forca, adivinha, num);
  printf("Você utilizou %d tentativas", cont);

  return 0;
}