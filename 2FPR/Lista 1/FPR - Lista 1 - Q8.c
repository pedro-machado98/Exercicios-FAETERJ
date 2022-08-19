#include <stdio.h>

int ehPrimo (int n){
  for (int i=2; i<=n/2 ; i++){
    if (n%i==0){
      return 0;
    }
  }
  return 1;
}

void exibePrimo(int n){
  for(int i=2; i<=n; i++){
    if(ehPrimo(i)){
      printf("%d, ", i);
    }
  }
}

int main(void) {
  exibePrimo(100);
  return 0;
}