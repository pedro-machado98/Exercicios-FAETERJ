/*Faça um programa que receba dois números inteiros (x e y) e mostre os números do intervalo formado por eles Como o usuário pode entrar com dois números quaisquer, precisamos colocar em x, o menor valor e em y o maior valor*/

#include <stdio.h>

void troca (int *px, int *py){
  int var;
  if(*py<*px){
    var=*px;
    *px=*py;
    *py=var;
  }
  return;
}

void intervalo (int x, int y){
  int num;
  /*while (num<=y){
    printf("%d ", num);
    num++;
  }*/
  for(num=x;num<=y;num++){   //condição_inicial; condição_final; valor_incrementado
    printf("%d ", num);   
  }
}

int main(void) {
  int x, y;

  printf("Digite os valores x e y respectivamente: ");
  scanf("%d %d", &x, &y);
  troca(&x, &y);
  intervalo(x, y);
  
  printf("\n\nX é: %d", x);
  printf("\nY é: %d", y);
  return 0;
}