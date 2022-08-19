/*Fazer uma função que calcule o MMC (mínimo múltiplo comum) entre dois números.*/
#include <stdio.h>

int calcMMC (int n1, int n2){
  int mmc=n1, i=0;
  while(mmc%n2!=0){
    i++;
    mmc=n1*i;
  }
  return mmc;
}
int main(void) {
  printf("MMC: %d", calcMMC(15,20));
  return 0;
}