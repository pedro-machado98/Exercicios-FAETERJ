#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define tam 10

int calcFatorialRecursivo(int n){
  if (n==0){
    return 1;
  }
  else{
    return n*calcFatorialRecursivo(n-1);
  }
}

int calcPotencia(int x, int y){
  if(y==0){
    return 1;
  }
  else{
    return x*calcPotencia(x, y-1);
  }
}

int calcAvezesB(int a, int b){
  if (b==1){
    return a;
  }
  else{
    return a + calcAvezesB(a, b-1);
  }
}

int calcNfibonacci (int n){ //0, 1, 1, 2, 3, 5, 8, 13, 21
  if (n==1){
    return 0;
  }
  else{
    if(n==2){
      return 1;
    }
    else{
      return calcNfibonacci(n-1) + calcNfibonacci(n-2);
    }
  }
}

int buscaBinaria(int vetor[], int buscado, int inicio, int fim){
  int meio;

  meio=(inicio+fim)/2;

  if (inicio<=fim){
    
    if(vetor[meio]==buscado){
      return meio;
    }
    else{
      if(vetor[meio]>buscado){
        return buscaBinaria(vetor, buscado, inicio, meio-1);
      }
      else{
        return buscaBinaria(vetor, buscado, meio+1, fim);
      }
    }
  }
  else{
    return -1;
  }
  
}

void ordenaVetor(int vetor[]){
  int aux, j, i;
  for( j=tam-1 ; j>=1 ; j--){
    for ( i=0 ; i<j ; i++ ){
      if( vetor[i] > vetor[i+1] ){
        aux=vetor[i];
        vetor[i]=vetor[i+1];
        vetor[i+1]=aux;
      }
    }
  }
  
}

int main(void) {
  int vetor[tam]={10,2,4,6,8,1,3,9,7,5};

  ordenaVetor(vetor);
  int pos = buscaBinaria(vetor, 2, 0, tam);
  printf(" Valor %d encontrado na posição %d", 2, pos);
  
  
  
 //int fat=calcFatorialRecursivo(5);
 //int fat=calcAvezesB(5,4);
 //printf("%d", fat);
  return 0;
}

