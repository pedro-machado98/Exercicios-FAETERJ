#include <stdio.h>

int detCompleicao (int fgenero, int faltura, float fcircunferencia){
  float fcompleicao;
  int tamanho;
  fcompleicao=faltura/fcircunferencia;
  if(fgenero==1){
    if(fcompleicao>10){
      tamanho=1;
    }
    else{
      if(fcompleicao>=9.6){
        tamanho=2;
      }
      else{
        tamanho=3;
      }
    }
  }
  else{
    if(fcompleicao>11){
      tamanho=1;
    }
    else{
      if(fcompleicao>=10){
        tamanho=2;
      }
      else{
        tamanho=3;
      }
    }
  }
  return tamanho;
}
int ehCalculavel (int fgenero, int faltura){  
  return(fgenero==1 && faltura==170) || (fgenero==2 && faltura==160);    
}
int main(void) {
  int genero, altura, circunferenciaDoPulso, compleicao;
  printf("\nDigite seu genero, insira 1 para Masculino e 2 para Feminino: ");
  scanf("%d", &genero);
  printf("Digite sua altura em centimetros: ");
  scanf("%d", &altura);
  printf("Digite a circunferência de seu pulso em centimetros: ");
  scanf("%d", &circunferenciaDoPulso); 
  compleicao=detCompleicao(genero, altura, circunferenciaDoPulso); 
  if(compleicao==1){
    printf("\nSua compleição é pequena");
  }
  else{
    if(compleicao==2){
      printf("\nSua compleição é média");
    }
    else{
      printf("\nSua compleição é grande");
    }
  } 
  if(ehCalculavel(genero, altura)==1){
    if(genero==1){
      if(compleicao==1){
        printf("\nSeu peso ideal esta entre 58-62");
      }
      else{
        if(compleicao==2){
          printf("\nSeu peso ideal esta entre 61-67");
        }
        else{
          printf("\nSeu peso ideal esta entre 65-73");
        }
      }
    }
    else{
      if(compleicao==1){
        printf("\nSeu peso ideal esta entre 48-51");
      }
      else{
        if(compleicao==2){
          printf("\nSeu peso ideal esta entre 50-56");
        }
        else{
          printf("\nSeu peso ideal esta entre 54-61");
        }
      }
    }
  }
  else{
    printf("\nPeso ideal não calculado.");
  }  
  return 0;
}