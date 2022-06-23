#include <stdio.h>

int main(void) {
  char sInicial[15], ch1, ch2;
  int i;
  printf("\nDigite uma frase: ");
  scanf(" %[^\n]", sInicial);
  printf("\nDigite o caractere que deseja trocar na frase: ");
  scanf(" %c", &ch1);
  printf("\nDigite o novo caractere: ");
  scanf(" %c", &ch2);

  for(i=0;sInicial[i]!='\0';i++){
    if (sInicial[i]==ch1){
      sInicial[i]=ch2;
    }
  }

  printf("%s", sInicial);
  return 0;
}