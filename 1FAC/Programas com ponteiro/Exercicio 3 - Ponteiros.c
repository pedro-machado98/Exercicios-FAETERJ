/*A divisão no conjunto de inteiros, produz 2 valores: o quociente e o resto. No entanto, quando o divisor é zero há duas situações: impossível – quando apenas o divisor é zero e indeterminada quando o dividendo e o divisor são zeros.

Faça a função DiviInt(...) , que recebe dois valores (o dividendo e o divisor) e dois endereços de variáveis, um para armazenar o quociente e outro para o resto. Esta função realiza a operação de divisão, se for possível, preenchendo adequadamente o quociente e o resto, e retorna o valor 1 (sucesso). Caso a operação não possa ser realizada, a função deve retornar 0 quando a divisão é impossível e -1 quando é indeterminada. Utilize sua função adequadamente na main abaixo:*/
#include <stdio.h>

int divInt (int divisor, int dividendo, int *resto, int *quociente){
  if (divisor==0){
    if (dividendo==0){
      return -1;
    }
    else{
      return 0;
    }
  }
  else{
    *quociente=dividendo/divisor;
    *resto=dividendo%divisor;
    return 1;
  }
}

int main(void) {
  int a, b, res, quo, solucao;
  printf("\nDigite dois valores e o programa irá dizer se a divisão é possivel, impossivel ou indeterminada.\n\nDigite o divisor e em seguida o dividendo: ");
  scanf("%d %d", &a, &b);
  solucao=divInt(a, b, &res, &quo);
  if (solucao==1){
    printf("\n\n%d / %d = %d e resto %d", a, b, quo, res);
  }
  else{
    if(solucao==0){
      printf("\n\nErro %d: Divisão impossivel.", solucao);
    }
    else{
      printf("\n\nErro %d: Solução indeterminada.", solucao);
    }
  }
  return 0;
}