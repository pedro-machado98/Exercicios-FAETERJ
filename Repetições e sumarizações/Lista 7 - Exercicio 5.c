#include <stdio.h>

int main(void) {
  int voto, candidato1, candidato2, candidato3, candidato4, votonulo5, votobranco6;
  candidato1=0;
  candidato2=0;
  candidato3=0;
  candidato4=0;
  votonulo5=0;
  votobranco6=0;
  
  printf("\nVote no seu candidato de 1 até 6, para encerrar a votação digite 0: ");
  scanf("%d", &voto);

  while(voto!=0){
    if (voto==1){
      candidato1=candidato1+1;
    }
    else{
      if(voto==2){
        candidato2= candidato2+1;
      }
      else{
        if(voto==3){
          candidato3= candidato3+1;
        }
        else{
          if(voto==4){
            candidato4= candidato4+1;
          }
          else{
            if(voto==5){
              votonulo5= votonulo5+1;
            }
            else{
              if(voto==6){
                votobranco6= votobranco6+1;
              }
              else{
                printf("Você digitou um numero maior que 6, voto invalido.");
              }
            }
          }
        }
      }
    }
    printf("\nVote no seu candidato de 1 até 6, para encerrar a votação digite 0: ");
    scanf("%d", &voto);
  }

  printf("\n\nVotos para candidato 1: %d", candidato1);
  printf("\nVotos para candidato 2: %d", candidato2);
  printf("\nVotos para candidato 3: %d", candidato3);
  printf("\nVotos para candidato 4: %d", candidato4);
  printf("\nVotos nulos: %12.d", votonulo5);
  printf("\nVotos em branco: %8.d", votobranco6);
  
  
  return 0;  
}