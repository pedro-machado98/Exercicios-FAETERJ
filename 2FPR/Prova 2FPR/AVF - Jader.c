#include <stdio.h>
#include <string.h>

void inicializa ( int v[], int val, int qtd){
  int i;
  for (i = 0 ; i < qtd ; i++){
    v[i]=val;
  }
}

int busca(int v[], int val, int qtd){
  int i;
  for ( i = 0 ; i < qtd ; i++){
    if (v[i]==val){
      return i;
    }
  }
  return -1;
}



//a
void calculaVales(float valorCompra, int *nVales, float *vVales){
  
  if(valorCompra < 350){
    *nVales = 0;
    *vVales = 0;
  }
  else{
    if (valorCompra > 350 && valorCompra < 1000){
      *nVales = valorCompra/60;
      *vVales = 10;
    }
    else{
      *nVales = valorCompra/20;
      *vVales = 7;
    }
  }
}

//b
int calculaAcrescimoTaxaDeEntrega(char tipoTaxa[]){
  if (strcmp(tipoTaxa, "Expressa") == 0){
    return 4;
  }
  else{
    return 10;
  }
}

//c
int trata_um_cliente(int vCatProd[], float vCatPr[], float vTaxaEntregaZona[], int matricula, int zonaEntrega, char urgenciaDaEntrega[]){

  //variaveis de manipulação
  int pos;
  float valorTotal = 0;
  float taxaEntrega;
  int nVales;
  float valorVales;
  
  //variaveis do cliente
  int codigoLicor;
  int qtdLicor;

  printf("\nDigite o codigo do licor (12, 23, 34, 45, 56, 78, 89, 90): ");
  scanf("%d", &codigoLicor);
  printf("\nDigite quantas unidades de licor você deseja: ");
  scanf("%d", &qtdLicor);
  
  while (codigoLicor != 0){

    pos = busca(vCatProd, codigoLicor, 8);
    
    if(pos != -1){
      valorTotal += vCatPr[pos]*qtdLicor;
    }
    else{
      printf("Produto não existe!");
    }

    taxaEntrega = vTaxaEntregaZona[zonaEntrega-1];
    if ((strcmp(urgenciaDaEntrega, "Normal") != 0)){
      taxaEntrega += calculaAcrescimoTaxaDeEntrega(urgenciaDaEntrega);
    }
    
    
    printf("\nDigite o codigo do licor (12, 23, 34, 45, 56, 78, 89, 90): ");
    scanf("%d", &codigoLicor);
    printf("\nDigite quantas unidades de licor você deseja: ");
    scanf("%d", &qtdLicor);
  }
  
  calculaVales(valorTotal, &nVales, &valorVales);

  printf("\n\nMatricula: %d\n", matricula);
  printf("\nValor Total da Compra: %.2f", valorTotal);
  printf("\nValor Taxa de Entrega: %.2f", taxaEntrega);
  printf("\nNumero de Vales: %d \t Valor dos Vales: %.2fR$\n", nVales, valorVales);
  
  return valorTotal + taxaEntrega; 
}

//d
void mostra_Zonas(int faturamentoTotal[]){
  
  printf("\n1 - Sul: %d,00 R$", faturamentoTotal[0]);
  printf("\n2 - Norte: %d,00 R$", faturamentoTotal[1]);
  printf("\n3 - Oeste: %d,00 R$", faturamentoTotal[2]);
  printf("\n4 - Centro: %d,00 R$", faturamentoTotal[3]);
  
}


int main(void) {
  float vTaxaEntregaZona[4] = {18,10,21,4}; // valor da taxa de entrega normal por zona
  int vCatProd[8] = {12, 23, 34, 45, 56, 78, 89, 90}; //codigo dos licores
  float vCatPr[8] = {10, 20, 30, 20, 20, 30, 10, 40}; //preços licores

  int matricula;
  int zonaEntrega;
  char urgenciaDaEntrega[20];
  
  int qtdCompras=0;

  int faturamentoTotal[4];
  inicializa(faturamentoTotal, 0, 4);
  
  while (qtdCompras < 100){
    printf("\nDigite sua matricula: ");
  scanf("%d", &matricula);
  printf("\nDigite sua zona de entrega (1, 2, 3 ou 4): ");
  scanf("%d", &zonaEntrega);
  printf("\nDigite a sua urgencia (Expressa ou Imediata): ");
  scanf(" %[^\n]", urgenciaDaEntrega);
    faturamentoTotal[zonaEntrega-1] += trata_um_cliente(vCatProd, vCatPr, vTaxaEntregaZona, matricula, zonaEntrega, urgenciaDaEntrega);
    qtdCompras++;
  }

  mostra_Zonas(faturamentoTotal);
  
  
  return 0;
}