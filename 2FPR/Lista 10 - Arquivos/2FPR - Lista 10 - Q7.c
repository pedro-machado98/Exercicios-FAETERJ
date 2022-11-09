/*
Desenvolver uma função que, dados dois arquivos textos arqA e arqB, crie um novo arquivo arqC, considerando que:
-> arqA e arqB contém números reais, um por linha, ordenados crescentemente e sem repetição no arquivo;
-> arqC deve conter apenas os números comuns aos dois arquivos originais;
-> Assim como arqA e arqB, arqC também não possuirá repetições de elementos e estes deverão estar ordenados de forma crescente.
*/

#include <stdio.h>

int conjuncaoArq(char origemA[], char origemB[], char destino[]){

  FILE *arqA;
  FILE *arqB;
  FILE *arqD;
  int continuarA = 1;
  int continuarB = 1;
  int valorA, valorB;

  arqA = fopen(origemA, "r");
  arqB = fopen(origemB, "r");
  arqD = fopen(destino, "w");

  //checar se os aquivos abriram corretamente

  if (!arqA || !arqB || !arqD){
    
    fclose(arqA);
    fclose(arqB);
    fclose(arqD);

    return 0;
  }
  else{

    //abrir primeiro numero de cada arquivo;
    fscanf(arqA, "%d", &valorA);
    
    fscanf(arqB, "%d", &valorB);

    while (continuarA && continuarB ){

      if ( valorA < valorB){
        if ( fscanf (arqA, "%d", &valorA) == EOF ){
          continuarA = 0;
        }
      }
      else{
        if( valorB < valorA ){
          if ( fscanf (arqB, "%d", &valorB) == EOF ){
            continuarB = 0;
          }
        }
        else{
          fprintf(arqD, "%d\n", valorA);
          
          if ( fscanf (arqA, "%d", &valorA) == EOF ){
            continuarA = 0;
          }
          if ( fscanf (arqB, "%d", &valorB) == EOF ){
            continuarB = 0;
          }
        }
      }
    }

    fclose(arqA);
  
    fclose(arqB);
  
    fclose(arqD);
  
    return 1;
    
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

  printf("\n\n\nResultado: %d", conjuncaoArq(arqA, arqB, destino));
  
  
  return 0;
}