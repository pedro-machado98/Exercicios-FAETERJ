/*Suponha que não existissem as funções strlen, strcpy, strcat e strcmp. Pede-se, então, a implementação de funções que tenham o mesmo objetivo daquelas.*/

#include <stdio.h>
#include <string.h>

int checatamanho (char vetor[]){
  int i;
  for (i=0; vetor[i]!='\0'; i++);
  return i;
}

void copia (char vetorDestino[], char vetorReferencia[]){
int i;
for (i=0;vetorReferencia[i]!='\0';i++){
   vetorDestino[i]=vetorReferencia[i];
}
  vetorDestino[i]= '\0';
}


void concatena (char vetorDestino[], char vetorOrigem[]){
  int i, j;
  for(i=checatamanho(vetorDestino), j=0;vetorOrigem[j]!='\0';i++, j++){
    vetorDestino[i]=vetorOrigem[j];
    }
 vetorDestino[i]='\0';
}

int compara (char vetor1[], char vetor2[]){
  int i, j;

  for (i=0; (vetor1[i]!='\0') && (vetor2[i]!='\0')  && (vetor1[i]==vetor2[i]) ; i++);
  
  if (vetor1[i]>vetor2[i]){
    return 1;
  }
  if (vetor1[i]<vetor2[i]){
    return -1;
  }
  return 0;
}



int main(void) {
  
  char vetor[30]="Pedro Machado";
  char vetorDestino[30];

  
  printf("tamanho da string: %d", checatamanho(vetor));
  
  
  copia(vetorDestino, vetor);
  printf("\n\nNome salvo na string copiada: %s", vetorDestino);

  
  concatena(vetor, " é estudante");
  printf("\n\nConcatenou: %s", vetor);

  
  printf("\n\nA comparação retornou: %d", compara("abc", "abcd"));
  return 0;

  
}