#include <stdio.h>

float determinaDeltaS (float s0, float s1){
  return s1 - s0;
}



float determinaDeltaTempo (float t0minutos, float t1minutos, float t0segundos, float t1segundos){
  float deltaTsegundos;
  if ((t0minutos < 60) && (t1minutos < 60) && (t0segundos < 60) && (t1segundos < 60)){
     t0minutos = t0minutos * 60;
     t1minutos = t1minutos * 60;
     t0segundos = t0minutos + t0segundos;
     t1segundos = t1minutos + t1segundos;
     return deltaTsegundos = t1segundos - t0segundos;
  }
    else {
     return printf("O Valor em minutos e segundos precisa ser menor que 60.  ");
    }
}



float calculaVelocidadeMedia (float fdeltaS, float fdeltaT){
  float velocidadeMedia;
  
  velocidadeMedia = fdeltaS / fdeltaT;
  
  return velocidadeMedia;
}



float calculaMulta(float fvelMedia, int dSemana){

  float velMaxfinaldesemana = 18.06;
  float velMaxdiadesemana = 25;

  if ((dSemana = 1) || (dSemana = 7)){
    if(fvelMedia < velMaxfinaldesemana){
      return printf("Você esta dentro do limite de velocidade");
    }
    if ((fvelMedia > velMaxfinaldesemana) && (fvelMedia < velMaxfinaldesemana+10)){
      return printf("Você tem que pagar uma multa de 700,00R$");
    } else{
      return printf("Você tem que pagar uma multa de 1500,00R$");
    }
    
  } else{
    if(fvelMedia < velMaxfinaldesemana){
      return printf("Você esta dentro do limite de velocidade");
    }
    if ((fvelMedia > velMaxfinaldesemana) && (fvelMedia < velMaxfinaldesemana+10)){
      return printf("Você tem que pagar uma multa de 500,00R$");
    } else{
      return printf("Você tem que pagar uma multa de 1200,00R$");
    }
  }
}



int main(void) {

  //teste dia da semana
  int diadaSemana;
  printf("Digite o dia da semana\n");
  scanf("%d", &diadaSemana);

  
  //teste função detemrinaDeltaS
  float pos0, pos1;
  printf("Digite posição inicial e posição final:\n");
  scanf("%f %f", &pos0, &pos1);
  float deltaS = determinaDeltaS(pos0, pos1);
  printf("%.2fm\n\n", deltaS);

  
 //teste função determinaDeltaTempo 
  float tempminutos0, tempminutos1, tempsegundos0, tempsegundos1;
  printf("Digite o tempo em minutos e segundos separado por : inicial e final separando os 2 com barra:\n");
  scanf("%f:%f / %f:%f", &tempminutos0, &tempsegundos0, &tempminutos1, &tempsegundos1);
  float deltaT = determinaDeltaTempo(tempminutos0, tempminutos1, tempsegundos0, tempsegundos1);
  printf("%.2fs\n\n", deltaT); 

  
  //teste função calculaVelocidadeMedia
  float velMedia = calculaVelocidadeMedia(deltaS, deltaT);
  printf("Sua velocidade media é de %.2fm/s\n\n",velMedia);

  
  //teste função calculaMulta
  float multa = calculaMulta(velMedia, diadaSemana);
  printf("", multa);
  
  return 0;
}