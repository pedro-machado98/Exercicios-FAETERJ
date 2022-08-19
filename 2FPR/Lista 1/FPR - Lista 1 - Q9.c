#include <stdio.h>

int ehDivisor(int dividido, int divisor){
   if (dividido%divisor==0){
     return 1;
   }
  return 0;
}

void exibesomaMedia(int n){
int soma=0;
float cont=0;
 for (int i=1; i<n ;i++){
   if (ehDivisor(n,i)){
     soma+=i;
     cont++;
   }
 }
  printf("Soma: %d\nMedia: %.2f", soma, soma/cont);
}

int main(void) {
  exibesomaMedia(6);
  return 0;
}