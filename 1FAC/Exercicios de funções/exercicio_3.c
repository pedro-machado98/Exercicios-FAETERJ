#include <stdio.h>

float codigoProduto (float fcodigo);


float calcDesconto (float fpreco){
float desconto = 0;

  if (fpreco < 1000){
    desconto = 0;
  }
  else{
  if ((fpreco >= 1000) && (fpreco < 3000)){
   desconto = 0.25;
  } 
  else {
  if ((fpreco >= 3000) && (fpreco < 5000)){
    desconto = 0.35;
  }
  else {
    desconto = 0.4;
  }
 } 
}
    
 return desconto;
  }
int main(void) {
  float preco = 5000;
  preco = calcDesconto(preco);


  
  printf("O seu desconto é: %.2f\n", preco);
  return 0;
}