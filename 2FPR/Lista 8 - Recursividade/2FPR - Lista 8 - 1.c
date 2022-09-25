#include <stdio.h>
//Analise a seguinte função recursiva:
int funcao(int A, int B) {
  if (A >= B) {
    return funcao(A - B, B);
  }
  else {
    return A;
  }
}

/*
O que é armazenado na variável x quando o comando x = funcao (32, 6); for executado?
Observação: apresentar a sequência de chamadas recursivas disparadas pela execução do comando acima.
*/
int main(void) {
  
  int x=funcao(32, 6);
  return 0;
}

/*
funcao1= 32, 6 return 2
funcao2= 26, 6 return 2
funcao3= 20, 6 return 2
funcao4= 14, 6 return 2
funcao5= 8, 6 return 2
funcao6= 2, 6 return 2 


*/