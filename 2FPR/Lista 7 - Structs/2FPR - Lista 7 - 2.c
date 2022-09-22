#include <stdio.h>
#include <string.h>

#define c 3
#define n 10

typedef struct{
int numCandidato[3];
int votosBrancos;
int votosNulos;
int votosCandidatos[3];
}TVotos;

void zeraVotos(int votos[]){
  for (int i=0; i<c ; i++){
    votos[i]=0;
  }
}

int buscaCandidato(TVotos votos, int votoDoEleitor){
  int i;
  for (i=0 ; i<c ; i++){
    if (votos.numCandidato[i]==votoDoEleitor){
      return i;
    }
  }
  return -2;
}

void leVotosEleitor(TVotos votos){
  int votoDoEleitor, pos, i;
  printf("\nDigite o candidato que deseja votar: ");
  scanf("%d", &votoDoEleitor);
  for (i=0; (i<n) && (votoDoEleitor!=-1) ; i++){
    pos=buscaCandidato(votos, votoDoEleitor);
    if (pos==-2){
      votos.votosNulos++;
    }
    if(votoDoEleitor==0){
      votos.votosBrancos++;
    }
    votos.votosCandidatos[pos]++;
    printf("\nDigite o candidato que deseja votar: ");
    scanf("%d", &votoDoEleitor);
  }
}

int buscaCandidatoPelosVotos(TVotos votos, int numeroDeVotos){
  int i;
  for (i=0 ; i<c ; i++){
    if (votos.numCandidato[i]==numeroDeVotos){
      return i;
    }
  }
  return -1;
}

void exibeVotos (TVotos votos){
  int i, somatorio=0;
  for (i=0; i<c ; i++){
    printf("\nCandidato: %d\t Votos: %d", votos.numCandidato[i], votos.votosCandidatos[i]);
    somatorio=somatorio+votos.votosCandidatos[i];
  }
  printf("\nVotos Brancos: %d", votos.votosBrancos);
  printf("\nVotos Nulos: %d", votos.votosNulos);
  printf("\nAbstenções: %d", n-(votos.votosNulos+votos.votosBrancos+somatorio));
}

void exibeVencedorOuSegundoTurno (TVotos votos){
  int i, base=0, somatorio=0, vencedor;
  
  for (i=0; i<c ; i++){
    somatorio=somatorio+votos.votosCandidatos[i];
  }
  for (i=0; i<c ; i++){
    if(votos.votosCandidatos[i]>base){
      vencedor=votos.votosCandidatos[i];
      if(vencedor>(somatorio/2)){
        printf("Vencedor: %d", buscaCandidatoPelosVotos(votos, vencedor));
      }
      else{
        
      }
    }
  }
}

void registraNumeroCandidato (TVotos votos){
  int i;
  for (i=0; i<c ; i++){
    printf("Registre o numero do candidato: ");
    scanf("%d", &votos.numCandidato[i]);
  }
  zeraVotos(votos.votosCandidatos);
  exibeVotos(votos);
}



int main(void) {
  TVotos votos;

  votos.votosBrancos=0;
  votos.votosNulos=0;
  
  registraNumeroCandidato(votos);
  leVotosEleitor(votos);
  exibeVotos(votos);
  return 0;
}