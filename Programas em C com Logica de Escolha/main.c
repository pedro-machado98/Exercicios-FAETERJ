#include <stdio.h>

int main(void) {
 int idade, fumar;
  
  printf("Qual sua idade?\n");
  scanf("%d", &idade);
 
  if (idade<=10)
    {
      printf("\nO valor da mensalidade é R$ 30.00.");
    }
    else if (idade<=29)
      {
        printf("\nO valor da mensalidade é R$ 60.00.");
      }
      else if (idade<=45)
        {
          printf("Você é fumante?(1-Sim/2-Não)? ");
          scanf("%d",&fumar);
          if(fumar==1)
            {
              printf("\nO valor da mensalidade é R$ 150.00");
            }
          else
            {
              printf("\nO valor da mensalidade é R$ 120.00.");
            }
        }
        else if (idade<=59)
          {
            printf("Você é fumante?(1-Sim/2-Não)");
            scanf("%d",&fumar);
            if(fumar==1)
              {
                printf("\nO valor da mensalidade é R$ 180.00");
              }
            else
              {
                printf("\nO valor da mensalidade é R$ 150.00.");
              }
          }   
          else if (idade<=65)
            {
              printf("Você é fumante?(1-Sim/2-Não)");
              scanf("%d",&fumar);
              if(fumar==1)
                {
                  printf("\nO valor da mensalidade é R$ 280.00" );
                }
              else
                {
                  printf("\nO valor da mensalidade é R$ 250.00.");
                }
            }
            else if (idade>65)
              {
                printf("Você é fumante?(1-Sim/2-Não)");
                scanf("%d",&fumar);
                if(fumar==1)
                  {
                    printf("\nO valor da mensalidade é R$ 430.00");
                  }
                else
                  {
                  printf("\nO valor da mensalidade é R$ 400.00.");
                  }
              }
  
  return 0;
}