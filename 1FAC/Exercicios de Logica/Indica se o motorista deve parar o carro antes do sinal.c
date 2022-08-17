#include <stdio.h>

int fsinal(entrada, dist){

  if ((entrada <= 0 ) || (entrada > 3))
  {
    return printf("O valor precisa ser entre 1 e 3!!");
  }
  else if (entrada == 1)
 {
  return printf("Pare"); 
 }
  else if (entrada == 3)
   return printf("Pode passar");
  
   else
     printf("Insira sua distancia do sinal em metros:\n");
     scanf("%d",&dist);
      if (dist >= 5)
    {
       return  printf("Parar");
    }
       else
        return printf("Passar com cuidado");   
}
  
int main(void) {
  int entrada; 
  int dist;
  
  printf("Insira um numero de 1 a 3.\n1 é sinal vermelho, 2 é sinal amarelo e 3 é sinal verde:\n");
  scanf("%d",&entrada);
  printf("", fsinal(entrada, dist));
  
  return 0;
}