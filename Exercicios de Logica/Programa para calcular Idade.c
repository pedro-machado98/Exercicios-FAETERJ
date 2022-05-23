#include <stdio.h>
#include <time.h>

int main(void) {
  int dia, mes, ano, idade, caldia, calmes, calano;

  // ponteiro para struct que armazena data e hora
  struct tm *data_hora_atual;

  // variável do tipo time_t para armazenar o tempo em segundos
  time_t segundos;

  // obtendo o tempo em segundos
  time(&segundos);

  // para converter de segundos para o tempo local utilizamos a função localtime
  data_hora_atual = localtime(&segundos);

  caldia = data_hora_atual->tm_mday;
  calmes = data_hora_atual->tm_mon + 1;
  calano = data_hora_atual->tm_year + 1900;

  printf(
      "Escreva o seu dia, seu mês e ano de nascimento no formato dd/mm/aaaa\n");
  scanf("%d/%d/%d", &dia, &mes, &ano);

  if ((caldia == dia) && (calmes == mes)) {
    idade = calano - ano;
    printf("Parabens, você está fazendo %d anos de idade hoje", idade);
  }
  if (calmes > mes) {
    idade = calano - ano;
    printf("Você já fez aniversario e tem %d anos de idade", idade);
  }
  if ((caldia > dia) && (calmes == mes)) {
    idade = calano - ano;
    printf("Você já fez aniversario e tem %d anos de idade", idade);
  }
  if (calmes < mes) {
    idade = calano - 1 - ano;
    printf("Você vai fazer aniversario e ainda tem %d", idade);
  } else if ((caldia < dia) && (calmes == mes)) {
    idade = calano - 1 - ano;
    printf("Você vai fazer aniversario e ainda tem %d", idade);
  }

  return 0;
}