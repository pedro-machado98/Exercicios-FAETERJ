/*
Pede-se o desenvolvimento de uma função que, dada uma string representando um número binário (ou seja, contendo apenas os caracteres 0 e 1), converta-o para a base decimal.
*/
#include <stdio.h>
#include <string.h>

int verifica(char s[]){

  for (int i = 0 ; s[i] ; i++){
    if( s[i] <= 47 || s[i] >= 50 ){
      return 0;
    }
  }
  return 1;
}

int powr (int base, int potencia){
  int resultado=1;

  if (potencia == 0){
    return 1;
  }
  else{
    for (int i = 0 ; i < potencia ; i++ ){
      resultado = resultado * base;
    }
    return resultado;
  }
}

int questao3 (char s[]){
  int decimal=0;
  int tamanhoString=strlen(s)-1;
  
  if (verifica(s)){
    for ( int i = 0 ; s[i] ; i++ ){
      if(s[i] == '1'){
        decimal = decimal + powr(2, tamanhoString);
      }
    tamanhoString--;
    }
    return decimal;
  }
  else{
    return -1;
  }
}

int main(void) {
  char s[10]= "100"; // 4 + 2 + 1
  int decimal;
  //printf("%d", strlen(s)-1);
  //printf("%d", pow(2,4));  teste função potencia
  decimal=questao3(s);

  if(decimal == -1){
    printf("A string não é binaria!");
  }
  else{
    printf("%s em decimal é: %d",s, decimal);
  }
  return 0;
}