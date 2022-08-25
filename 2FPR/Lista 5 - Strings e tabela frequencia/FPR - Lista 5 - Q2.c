/*
Implementar uma função que, dadas duas strings s1 e s2, crie uma nova string – s3 – contendo todos os caracteres de s1 que não estejam em s2.

Nota: em s3, não devem existir caracteres repetidos.
*/
#include <stdio.h>
#include <string.h>
#define tam 20

void inicializaString (char vetor[]){
  int i;
  for (i=0; i<tam; i++){
    vetor[i]='\0';
  }
}

int busca(char vetor[], char valor) {
  int i;
  for (i = 0; vetor[i]; i++) {
    if (vetor[i] == valor) {
      return i;
    }
  }
  return -1;
}

int verificaCaracteres(char s1[], char s2[], char s3[]) { 
  int i, j, tamanho, pos, pos2;
  inicializaString(s3);
  for (i=0, j=0; s1[i]!='\0'; i++){
    pos = busca(s3, s1[i]);
    pos2 = busca(s2, s1[i]); // ao adicionar uma busca no vetor s2 (de exclusão) eu posso retornar se essa letra existe ou não no vetor, caso exista ele não será -1 e logo, não será adicionado em s3.
    if (pos == -1 && pos2 == -1){ // qualquer letra achada em s2(pos2) vai ser diferente de -1
      s3[j]=s1[i];
      j++;
    }
  }
  s3[j]='\0';
  return j; 
}



int main(void) {
  char s1[20] = "calculo"; 
  char s2[20]= "ac";
  char s3[20]; //esta string deve retornar cacu (4 letras)
  int a;
  a = verificaCaracteres(s1, s2, s3);
  printf("%d\n", a);

  printf ("%s", s3);
  return 0;
}