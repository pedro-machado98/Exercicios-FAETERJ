#include <stdio.h>
#define TAM 100



int functionNewArray (int array[]){
  int i=0;
  
  printf("Digite o %dº elemento do vetor ou 0 para terminar: ",i+1);
  scanf("%d",&array[i]);
  while(array[i]!=0&&i<TAM-1){
    i++;
    printf("Digite o %dº elemento do vetor ou 0 para terminar: ",i+1);
    scanf("%d",&array[i]);
  }
  return i;
}

void functionShowArray(int j ,int array[]){
  int i;
  printf("Vetor: ");
  for(i=0;i<j;i++){
    printf("%d ", array[i]);
  }
}

int functionSumProduct (int j, int array[]){
  int array2[j], i, product, sum=0;
  functionNewArray(array2);
  
  for (i=0;i<j;i++){
   product = array[i]*array2[i];
   sum+=product;
  }
  return sum;
}

void functionInvertArray (int j, int array[]){
  int i;
  printf("Vetor invertido: ");
  for (i=j-1;i>=0;i--){
    printf("%d ", array[i]);
  }
}

void functionGetPair (int j, int array[]){
  int i;
  printf("Valores nas posições Pares: "); 
  for(i=1;i<j;i+=2){ 
    printf("%d ", array[i]);
  }  
}

void functionGetOdd(int j, int array[]){
  int i;
  printf("Valores nas posições Impares: ");
  for(i=0;i<j;i+=2){
    printf("%d ", array[i]);
  }
}

void functionShowValueOnPosition (int j, int array[]){
  int p;
  printf("Digite a posição que deseja ver, valores validos são de 1 a %d: ", j);
  scanf("%d", &p);
  p-=1;
  if (p>=j || p<j-j){
    printf("Valor invalido, retornando ao menu...");
  }
  else{
    printf("\nA posição %d guarda o valor %d",p+1, array[p]);
  }
}

void functionGreaterValueOnArray(int j, int array[]){
  int greater=array[0], i;
  for (i=1;i<j;i++){
    if (array[i]>greater){
      greater=array[i];
    }
  }
  printf("O maior valor da array é %d", greater);
}

void functionSumOfArrayValues (int j, int array[]){
  int sumValue=0, i;
  for(i=0;i<j;i++){
    sumValue+=array[i];
  }
  printf("A soma dos valores é: %d", sumValue);
}

void functionHowManyAndWhichOneOddValueOfArray (int j, int array[]){
  int oddCounter=0, i;
  for(i=0;i<j;i++){
    if(array[i]%2!=0){
      oddCounter++;
    }
  }
  printf("Quantos numeros impares no vetor: %d", oddCounter);
}

void functionHowManyValuesAreLesserThanTheLastOne (int j, int array[]){
  int i;
  printf("\n\nNumeros menores que o valor da ultima posição da array: ");
  for(i=0;i<j;i++){
    if(array[j-1]>array[i]){
      printf("%d ", array[i]);
    }
  }
}

void functionShowTheAverageValueOfArray (int j, int array[]){
  int sumValue=0, averageValue=0, i;
  for(i=0;i<j;i++){
    sumValue+=array[i];
  }
  averageValue=sumValue/(j);
  printf("\n\nMedia dos valores armazenados na array: %d", averageValue);
}

void functionShowHowManyValuesAreLesserThanAverage (int j, int array[]){
  int sumValue=0, averageValue, lessThanAverageValue=0, i;
  
  for(i=0;i<j;i++){
    sumValue+=array[i];
  }
  averageValue=sumValue/(TAM);
  printf("\n\nValores menores que a média %d: ", averageValue);
  for(i=0;i<j;i++){
    if(averageValue>array[i]){
      lessThanAverageValue++;
      printf("%d ", array[i]);
    }
  }
  printf("\nTotal de valores menores que a média: %d", lessThanAverageValue);
}

void functionShowHowManyValuesAreGreaterThanAverage (int j, int array[]){
  int sumValue=0, averageValue=0, lessThanAverageValue=0, i; 
  for(i=0;i<j;i++){
    sumValue+=array[i];
  }
  averageValue=sumValue/(TAM);
  printf("\n\nValores maiores que a média %d: ", averageValue);
  for(i=0;i<j;i++){
    if(averageValue<array[i]){
      lessThanAverageValue++;
      printf("%d ", array[i]);
    }
  }
  printf("\nTotal de valores maiores que a média: %d", lessThanAverageValue);
}

int functionGetPosition (int j, int arrayValue ,int array[]){
  int i, pos=-1;
  for(i=0;i<j;i++){
    if (array[i]==arrayValue){
      pos=i;
      }
  }
  return pos;
}

void functionReturnThePositionOfValueWithTheValue (int j, int array[]){
  int arrayValue, pos;
  printf("Digite o valor a ser consultado ou -1 para sair: ");
  scanf("%d", &arrayValue);
  pos=functionGetPosition(j, arrayValue, array);
    while(pos!=-1){
      printf("Posição do valor: %dº", pos+1);
      printf("\n\nDigite o valor a ser consultado ou -1 para sair: ");
      scanf("%d", &arrayValue);
      pos=functionGetPosition(j, arrayValue, array);
    }
}



int main(void) {
  int option, option2, array[TAM], generalVariable;

  do{
    printf("\n-----------------------------------------------------------------\n0 - Finalizar\n1 - Capturar valores para o vetor\n\nOpção: ");
    scanf("%d", &option);
    printf("-----------------------------------------------------------------\n");
    switch(option){
      case 0:
        printf("Finalizando...");
        break;
      case 1:
        generalVariable=functionNewArray(array);
        functionShowArray(generalVariable, array);
        do{
          printf("\n\n-----------------------------------------------------------------\n0 - Finalizar\n1 - Capturar novos valores para o vetor\n2 - Soma do produto interno\n3 - Inverter array\n4 - Exibe os valores nas posições pares e impares respectivamente\n5 - Exibe o valor na posição desejada do vetor\n6 - Maior valor armazenado no vetor atual\n7 - Soma os valores do vetor\n8 - Quantos numeros impares estão no vetor\n9 - Mostra valores menores que o valor armazenado na ultima posição do vetor\n10 - Mostra a média dos valores armazenados no vetor\n11 - Mostra quantos e quais valores são menores que a média\n12 - Mostra quantos e quais valores são maiores que a média\n13 - Retorna o numero da posição do vetor a partir do valor desejado\n\nOpção: ");
          scanf("%d", &option2);
          printf("\n-----------------------------------------------------------------\n");
      
          switch(option2){
            case 0:
              printf("\nFinalizando...");
              break;
            case 1:
              generalVariable=functionNewArray(array);
              functionShowArray(generalVariable, array);
              break;      
            case 2:
              generalVariable = functionSumProduct(generalVariable, array);
              printf("\nSoma dos produtos das duas arrays: %d", generalVariable);
              break;
            case 3:
              functionInvertArray(generalVariable,array);
              break;
            case 4:
              functionGetPair(generalVariable, array);
              functionGetOdd(generalVariable, array);
              break;
            case 5:
              functionShowValueOnPosition(generalVariable, array);
              break;
            case 6:
              functionGreaterValueOnArray(generalVariable, array);
              break;
            case 7:
              functionSumOfArrayValues(generalVariable, array);
              break;
            case 8:
              functionHowManyAndWhichOneOddValueOfArray(generalVariable, array);
              break;
            case 9:
              functionHowManyValuesAreLesserThanTheLastOne(generalVariable, array);
              break;
            case 10:
              functionShowTheAverageValueOfArray(generalVariable, array);
              break;
            case 11:
              functionShowHowManyValuesAreLesserThanAverage(generalVariable, array);
              break;
            case 12:
              functionShowHowManyValuesAreGreaterThanAverage(generalVariable, array);
              break;
            case 13:
              functionReturnThePositionOfValueWithTheValue(generalVariable, array);
              break;
            default: 
              printf("Opção invalida\n");
          }
        } 
        while (option!=0);
        break;
    }
  }
  while (option!=0);
  
 return 0;
}
