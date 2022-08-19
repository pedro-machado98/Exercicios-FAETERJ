/*
Elaborar uma função que, dado um conjunto de 300 valores inteiros, distribua-os em 2 vetores conforme forem pares ou ímpares.
*/
#include <stdio.h>
#define tam 300

void preencheVetor (int v[]){
  int j=1;
  for( int i=0; i<=tam; i++){
    v[i]=j;
    j++;
  }
}

void separaParImpar (int v[], int vImpar[], int vPar[]){
  int j=0, k=0;
  for(int i=0 ; i<tam ; i++ ){
    if (v[i]%2==0){
      vPar[j]=v[i];
      j++;
    }
    else{
      vImpar[k]=v[i];
      k++;
    }
  }
}

void exibeVetor(int v[]){
  printf("Vetor: ");
  for(int i=0 ; i<tam/2 ; i++ ){
    printf("%d, ", v[i]);
  }
}

int main(void) {
  int v[tam];
  int vImpar[tam];
  int vPar[tam];
  preencheVetor(v);
  separaParImpar(v, vImpar, vPar);
  exibeVetor(vPar);
  printf("\n\n\n");
  exibeVetor(vImpar);
  return 0;
}