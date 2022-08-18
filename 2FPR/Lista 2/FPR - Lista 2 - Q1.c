#include <stdio.h>

void troca (int v[], int tam){
 int aux;
 int j = 1;
 int k = 0;
 for (int i = 0; i < tam ;i++){
   aux = v[k];
   if (j<tam){
    v[k] = v[j];
   }
   v[j] = aux;
   j = j+2;
   k = k+2;
   printf("%d, ",v[i]);
 }
}

int main(void) {
  int tam = 6;
  int v[6] = {1,2,3,4,5,6};
  troca(v, tam);
  return 0;
}