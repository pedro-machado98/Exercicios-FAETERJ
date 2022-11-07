/*
Faça uma função que, dado um arquivo A contendo números reais, um por linha, crie um novo arquivo B contendo os mesmos elementos de A, porém ordenados decrescentemente e sem repetição.
*/

#include <stdio.h>
#include <float.h>
//#include <limits.h>

int leArquivo(char origem[], char destino[]){
  FILE *arqO;
  FILE *arqD;
  float n;
  float ultimo = FLT_MAX;
  float maior;
  int continuar;

  arqO = fopen(origem, "r");
  arqD = fopen(destino, "w");

  if (arqO == NULL || arqD == NULL) {
    return 0;
  }
  else{
    while (continuar) {
      
      continuar = 0;
      
      maior = -999999;
      
      while ( fscanf (arqO, "%f", &n) != EOF ){
        
        if ( (n < ultimo) && (n > maior) ){
          
          maior = n;
          
          continuar = 1;
        }
        
      }
      
      if (continuar){
        fprintf(arqD, "%.1f\n", maior);
        
        ultimo = maior;
        
        rewind(arqO);
        
      }
    }
    
  }

  fclose(arqO);
  
  fclose(arqD);
  
  return 1;
}


int main(void) {
  char origem[20];
  char destino[20];

  printf("Digite o nome do arquivo de origem (se não existir crie um arquivo com numeros): ");
  scanf(" %[^\n]", origem);
  printf("Digite o nome do arquivo de destino: ");
  scanf(" %[^\n]", destino);

  printf("\n\n\nResultado: %d", leArquivo(origem, destino));
  
  return 0;
}