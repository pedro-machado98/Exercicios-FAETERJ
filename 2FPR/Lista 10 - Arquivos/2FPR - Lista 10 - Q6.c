/*

Desenvolver uma função que, dados dois arquivos textos arqA e arqB, crie um novo arquivo arqC, considerando que:

-> arqA e arqB contém números reais, um por linha, ordenados crescentemente e sem repetição no arquivo;

-> arqC deve conter todos os números dos dois arquivos originais;

-> Assim como arqA e arqB, arqC também não possuirá repetições de elementos e estes deverão estar ordenados de forma crescente.

*/

#include <stdio.h>
#include <float.h>
#define TRUE 1
#define FALSE 0

int leArquivo(char origemA[], char origemB[], char destino[]){
  FILE *arqA;
  FILE *arqB;
  FILE *arqD;
  int valorA;
  int valorB;
  int continuarA = TRUE;
  int continuarB = TRUE;

  arqD = fopen(destino, "w");

  arqA = fopen(origemA, "r");
  
  arqB = fopen(origemB, "r");

  if (arqA == NULL || arqB == NULL || arqD == NULL) {
    
    return FALSE;
    
  }
  else{

    fscanf(arqA, "%d", &valorA);
    fscanf(arqB, "%d", &valorB);

    //verificando se ainda há elementos nos dois arquivos
    while (continuarA && continuarB) {

      if ( valorA < valorB){
        fprintf (arqD, "%d\n", valorA);
        
        //tentando ler o próximo valor do arquivo A
  			if (fscanf (arqA, "%d", &valorA) == EOF) {
  				continuarA = FALSE;
  			}
      }
      else {
        if (valorB < valorA){
          fprintf (arqD, "%d\n", valorB);
          
          //tentando ler o próximo valor do arquivo A
  			  if (fscanf (arqB, "%d", &valorB) == EOF) {
  				  continuarB = FALSE;
          }
        }
        else{ //valorA igual ao valorB
          fprintf (arqD, "%d\n", valorA);

          if (fscanf (arqA, "%d", &valorA) == EOF) {
  		  		continuarA = FALSE;
  			  }
          
          if (fscanf (arqB, "%d", &valorB) == EOF) {
  				  continuarB = FALSE;
          }
        }
      }
    } 
    //verificando se apenas um arquivo terminou
    if ( (continuarA == FALSE)  || (continuarB ==  FALSE) ){
      
      if (continuarA == FALSE){
        
        fprintf(arqD, "%d\n", valorB);

        while (fscanf (arqB, "%d", &valorB) != EOF ){
          
          fprintf(arqD, "%d\n", valorB);
          
        }
        
      }
      else{
        
        fprintf(arqD, "%d\n", valorA);
        
        while (fscanf (arqD, "%d", &valorA) != EOF ){
          
          fprintf(arqD, "%d\n", valorA);
          
        }
        
      }
    }

  fclose(arqA);
  
  fclose(arqB);
  
  fclose(arqD);
  
  return TRUE;
  
  }
}


int main(void) {
  char arqA[20];
  char arqB[20];
  char destino[20];

  printf("Digite o nome do primeiro arquivo a ser lido (se não existir crie um arquivo com numeros): ");
  scanf(" %[^\n]", arqA);
  printf("Digite o nome do segundo do arquivo da ser lido (se não existir crie um arquivo com numeros): ");
  scanf(" %[^\n]", arqB);
  printf("Digite o nome do arquivo de destino: ");
  scanf(" %[^\n]", destino);

  printf("\n\n\nResultado: %d", leArquivo(arqA, arqB, destino));
  
  return 0;
}