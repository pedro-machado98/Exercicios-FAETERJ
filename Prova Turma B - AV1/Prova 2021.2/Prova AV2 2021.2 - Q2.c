#include <stdio.h>
#define n 5

void testa_vetor (int vA[n], int vB[n]){
  int inter, i;

  for (i=0;i<n;i++){
    if(vA[i]>vB[i]){
      inter=vB[i];
      vB[i]=vA[i];
      vA[i]=inter;
    }
  }
}

int main(void) {
  int vA[n]={3,7,6,2,0}, vB[n]={9,1,4,1,24};
  int inter;
  int i;

  testa_vetor(vA, vB);
  
  printf("\nA = ");
  for (i=0;i<n;i++){
    printf("%d ",vA[i]);
  }
  printf("\nB = ");
  for (i=0;i<n;i++){
    printf("%d ",vB[i]);
  }
    
  return 0;
}