#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int gerNumAleat (int limInf, int limSup){
  int dif = (limSup-limInf)+1;
  return rand()%dif + limInf;
}

int qtdRespostasPositivas(int nQuestoes){
  int respPositivas=0;
  int contador=1;
  int resposta;
  
  while(contador <= nQuestoes){
    printf("\tQuestão%d", contador);
    resposta=gerNumAleat(1, 2);
    printf("\tResposta: %d\n", resposta);
    if(resposta==1){
      respPositivas++;
    }
    contador++;
  }
  return respPositivas;
}

int main(void) {
  
  srand(time(NULL));
  int contPro=0, contContra=0, contNeutro=0;
  int numRespostas;
  int matricula;
  int respPositivas;
  int respNegativas;

  printf("Digite o numero de respostas do questionario: ");
  scanf("%d", &numRespostas);

  printf("Digite sua matricula: ");
  scanf("%d", &matricula);
  
  while(matricula>0){
    
    respPositivas = qtdRespostasPositivas(numRespostas);
    respNegativas = numRespostas - respPositivas;
    
    if( ( (numRespostas*2) /3) <= respPositivas ){
      printf("\n\nGrupo pró");
      contPro++;
    }
    else{
      if( ( (numRespostas*2) /3) <= respNegativas ){
        printf("\n\nGrupo contra");
        contContra++;
      }
      else{
        printf("\n\nGrupo Neutro");
        contNeutro++;
      }
    }
    printf("\n\nDigite sua matricula: ");
    scanf("%d", &matricula);
  }
    
  if( (contPro >= contContra) && (contPro >= contNeutro) ){
    printf("\nGrupo pró teve mais alunos : %d", contPro);
  }
  else{
    if( (contContra >= contPro) && (contContra >= contNeutro) ){
      printf("\nGrupo contra teve mais alunos : %d", contContra);      
    }
    else{
      printf("\nGrupo Neutro teve mais alunos : %d", contNeutro);      
    }
  }
  return 0;
}