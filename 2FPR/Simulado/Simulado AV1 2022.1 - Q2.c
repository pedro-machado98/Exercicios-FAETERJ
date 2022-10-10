/*
Implementar uma função que, dada uma string s, determine a quantidade de caracteres distintos em s.
*/
#include <stdio.h>
#include <string.h>

int questao02 (char s[]);

int main (void){
	char string[20]="cascata";
	int quant;
	
	printf ("Entre com uma string: ");
  scanf("%[^\n]", string);

	quant = questao02 (string);
	
	printf ("\nA string %s possui %d caracteres distintos.", string, quant);
}

int questao02 (char s[]){
  int i, j, flag, cont=0;

  for (i=0; s[i]; i++){
    flag=0;
    for (j=0; s[j] && (flag==0); j++){
      if(s[i]==s[j]){
        flag=1;
      }
    }
    if(flag==0){
      cont++;
    }
  }
  return cont;
}
