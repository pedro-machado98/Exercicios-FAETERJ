#include <stdio.h>

int main(void) {
  float gm, tc, cmo, ac, ct, r, r1, r2, r3, custototalmaodeobra;

  r = 0;
  r1 = 0;
  r2 = 0;
  r3 = 0;
  
  printf("Digite o valor gasto com material:\n");
  scanf("%f", &gm);
  printf("Digite o tempo em horas que durou a construção:\n");
  scanf("%f", &tc);
  printf("Digite o custo da mão de obra por hora:\n");
  scanf("%f", &cmo);
  printf("Digite a metragem da area construida:\n");
  scanf("%f", &ac);

  if ((ac/tc) < 0.035){
    cmo = cmo * 0.3;
  }

  ct = gm + cmo * tc;

  r = gm/(cmo*tc);

  custototalmaodeobra = cmo*tc;

  if (r > 1,5){
    r1 = gm * 0.05;
  }
  else if ( 0.5 <= r <= 1.5){
    r2 = ct * 0.08;
  }
  else{
    r3 = r2 * 0.1;
  }

  r = ct + r1 + r2 + r3;

  printf("O imovel vai custar %.2f", r);
  return 0;
}