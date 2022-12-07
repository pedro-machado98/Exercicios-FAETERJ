#include <stdio.h>
#include <string.h>

void inicializaVetor(int v[], int qt, int val){
    for(int i=0;i<qt;i++){
        v[i]=val;
    }
}

int buscaTexto(char v[][10], int qt, char val[]){
    for(int i=0;i<qt;i++){
        if (strcmp(v[i],val)==0)
            return i;
    }
    return -1;
}

void qtdAtendimentoPorDia(int vetDia[], int vetAtend[]){
  int vetorAcumulador[7];
  inicializaVetor(vetorAcumulador, 10, 0);
  
  int pos;
  for ( int i = 0 ; i < 20 ; i++){
    pos = vetDia[i];
    pos = pos-1;
    vetorAcumulador[pos] += vetAtend[i];
  }
  for ( int i  = 0 ; i < 7 ; i++){
    printf("Dia %d \t Atendimentos: %d \n", i+1, vetorAcumulador[i]);
    
  }
}

void qtdAtendimentoPorAtendente (char vetN[][10] , int vetDia[], int vetAtend[], char nomeAtendente[], int diaMes){
  
  int pos;
  pos = buscaTexto(vetN, 20, nomeAtendente);

  if(pos == -1){
    printf("Atendente não encontrado");
  } 
  else{
    if (vetDia[pos] == diaMes){
    printf("Atendente: %s \t Dia: %d \t Numero de atendimentos: %d", vetN[pos], vetDia[pos], vetAtend[pos]);
    }
    else{
      printf("%s não trabalhou dia %d", nomeAtendente, diaMes );
    }
  }
}


int main(void) {

  char vetN[20][10]={"Ju","Fe","Ze","Ro","Ze","Ro","Ro","Ju","Ju","Fe","Ze","Ro", "Ro","Fe","Ro","Fe","Ju","Ju","Ze","Ju"};
  int vetDia[20]={2,4,6,3,7,6,5,4,3,1,2,4,7,2,1,6,6,5,5,1};
  int vetAtend[20]={24,23,17,16,12,19,20,30,30,11,17,12,24,10,22,13,12,27,22,30};
  int diaMes = 6;
  char nomeAtendente[4] = "fa";

  printf("Questão 3) a)\n");
  qtdAtendimentoPorDia (vetDia, vetAtend);
  printf("\n\n\n");
  printf("Questão 3) b)\n");
  qtdAtendimentoPorAtendente(vetN, vetDia, vetAtend, nomeAtendente , diaMes);
  
  return 0;
}