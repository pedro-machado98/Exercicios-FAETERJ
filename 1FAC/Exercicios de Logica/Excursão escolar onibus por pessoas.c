#include <stdio.h>


//função que calcula quantos onibus são necessarios
int fpessoas_onibus(int pessoas) {

  if (pessoas % 15 > 0) {
    pessoas = (pessoas - pessoas % 15) / 15 + 1;
  } 
  else {
    pessoas = pessoas / 15;
  }

return pessoas;
}

//função main que captura a quantidade de pessoas que vão e retorna quantos onibus são necessarios
  
int main(void) {
  int pessoas, onibus;

  printf("Quantas pessoas vão na excursão?\n");
  scanf("%d", &pessoas);
  onibus = fpessoas_onibus(pessoas);
  printf("São necessarios %d onibus para %d pessoas\n", onibus, pessoas);
  return 0;
}