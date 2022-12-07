#include <stdio.h>
#define N 3
#define S 2
#define TAM 6

void funcao(char vNomes[][TAM], char vSobres[][TAM]){

  for ( int i = 0 ; i < N ; i++ ){
    for ( int j = 0 ; j < S ; j++ ){
      printf("%s %s, ", vNomes[i], vSobres[j]);
    }
  }
}

int main(void) {

  char vNomes[N][TAM] = {"Jo", "Lu", "Ro"};
  char vSobres[S][TAM]= {"Novo", "Velho"};

  
 funcao(vNomes, vSobres);
    
  return 0;
}