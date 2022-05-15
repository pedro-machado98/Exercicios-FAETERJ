#include <stdio.h>
int ehcompativel(int cor1, int cor2){
  return((cor1<cor2) || (cor1%cor2==0));
}


int main(void) {
  int cor1, cor2;
  int contaComp, qt;
  printf("\nQual o numero da primeira cor: ");
  scanf("%d", &cor1);
  printf("\nQual o numero da segunda cor: ");
  scanf("%d", &cor2);
  qt=0;
  contaComp=0;
  while(cor1!=0 && cor2!=0){
    qt++;
    if (ehcompativel(cor1,cor2)==1){
      printf("\n São compatíveis");
      contaComp++;
    }
    else{
      printf("\n Não são compatíveis");
    }
    printf("\nQual o numero da primeira cor: ");
    scanf("%d", &cor1);
    printf("\nQual o numero da segunda cor: ");
    scanf("%d", &cor2);
  }
  printf("Percentual de compatíveis: %.2f%%",contaComp*100.0/qt);


  
  return 0;
}