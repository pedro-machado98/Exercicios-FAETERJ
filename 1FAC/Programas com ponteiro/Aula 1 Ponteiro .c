#include <stdio.h>

void transforma_ml_em_Oncas_e_Galao (float ml, float *pOncas, float *pGalao){
  *pOncas = ml*0.033814;
  *pGalao = *pOncas * 0.0078125;
  
}


int main(void) {
  float ml, onca, galao;
  printf("\nDigite quantos ml quer converter\n");
  scanf("%f", &ml);
  transforma_ml_em_Oncas_e_Galao(ml, &onca, &galao);
  
  printf("\n\n%.f ml são %.f Oz", ml, onca);
  printf("\n%.f ml são %.f Galao", ml, galao);
  return 0;
}