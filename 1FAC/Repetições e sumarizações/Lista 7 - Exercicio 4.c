#include <stdio.h>

int main(void) {
  int filhos, contador, somaFilhos, contadorSalario100;
  float salario, somaDeSalario, maiorSalario;
  
  contador=0;
  contadorSalario100=0;
  maiorSalario = 0;
  somaDeSalario=0;

  printf("\nDigite o seu salário: ");
  scanf("%f", &salario);
  printf("\nDigite quantos filhos você tem: ");
  scanf("%d", &filhos);
  
  while(salario>=0){
    contador++;
    somaDeSalario+=salario;   //somaDeSalario=somaDeSalario+salario
    somaFilhos+=filhos;    //somaFilhos=somaFilhos+ffilhos
    if(salario<=100){
      contadorSalario100++;
    }
    if(salario>maiorSalario){
      maiorSalario+=salario;   //maiorSalario= maiorSalario+salario
    }
    
    printf("\nDigite o seu salário, se quiser encerrar digite um numero negativo: ");
    scanf("%f", &salario);
    if(salario<0){      //Essa linha de if está aqui para não perguntar quanto aos filhos.
     break;             
    }
    printf("\nDigite quantos filhos você tem: ");
    scanf("%d", &filhos);
  }

  printf("\n\nA média do salario da população é: R$%.2f", somaDeSalario/contador);
  printf("\nA média de filhos da população é: %d", somaFilhos/contador);
  printf("\nO maior salario foi: R$%.2f", maiorSalario);
  printf("\nO percentual de pessoas com salário até R$100,00 é: %.2f%%", contadorSalario100*100.0/contador);

  
  return 0;
}