/*Fazer um função que, dados dois vetores A e B com números inteiros, gerar o vetor C que consiste na união dos dois primeiros.*/
#include <stdio.h>
#define tam 4

void uniaoVetor (int vA[], int vB[], int vC[]){
 int i, j;
  for (i=0 ; i<tam/2 ; i++){
    vC[i]=vA[i];
  }
  for (j=0 ; j<tam/2 ; j++){
    vC[i]=vB[j];
    i++;
  }
}

void exibeVetor(int vC[]){
  for (int i=0; i<tam;i++){
    printf("%d, ", vC[i]);
  }
}

int main(void) {
  int vA[tam/2]={1,2};
  int vB[tam/2]={2,6};
  int vC[tam];

  uniaoVetor(vA, vB, vC);
  exibeVetor(vC);

  return 0;
}
//printf("Hello World\n");