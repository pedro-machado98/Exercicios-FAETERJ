#include <stdio.h>
#include <string.h>

float qtdUFIR (char zona, float area, int camera){
  float ufir;
  int nAndar;
  float acrescimo;
    
  if( (zona=='n') || (zona=='c') ){ //se o ufir é igual então a mesma condicional vale (se for um ou outro)
    if(area<20){
      ufir=40;
    }
    else{
      if(area<50){
        ufir=60;
      }
      else{
        if(area<100){
          ufir=70;
        }
        else{
          ufir=80;
        }
      }
    }
  }
  else{
    if(zona=='s'){
      printf("Digite o numero do andar: ");
      scanf("%d", &nAndar);
      if(nAndar<=5){
        if(area<20){
          ufir=40;
        }
        else{
          ufir=92;
        }
      }
      else{
        if(area<20){
          ufir=40;
        }
        else{
          ufir=85;
        }
      }
    }
    else{
      if(area<20){
        ufir=40;
      }
      else{
        ufir=75;
      }
    }
  }

  if(camera==1){
    acrescimo = ufir * 0.1;
    ufir = ufir + acrescimo;
  }
  return ufir;
}

int main(void) {
  char zona;
  float area;
  int camera;
  
  //teste 1 zona sul
  printf("\nUFIR: %.2f\n", qtdUFIR('s', 55, 1) );
  
  //teste 2 retorna 40 ufir
  printf("UFIR: %.2f\n", qtdUFIR('n', 19, 2) );
  
  //teste 3 outro qualquer
  printf("UFIR: %.2f\n", qtdUFIR('o', 120, 1) );
  
  return 0;
}