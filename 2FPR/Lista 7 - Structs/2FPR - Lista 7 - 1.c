#include <stdio.h>
#include <string.h>

#define usado 1
#define novo 0

typedef struct{
char placa[15];
char modelo[15];
char marca[15];
char cor[15];
float quilometragem;
int anoModelo; 
int anoFabricacao;
float valor;
int tipo;
}carros;


void exibeEstoque(carros vetorEstoque[], int qtdEstoque){
    for(int i=0;i<qtdEstoque;i++){
  printf("\n");
  printf("%s\t", vetorEstoque[i].placa);
  printf("%s\t", vetorEstoque[i].modelo);
  printf("%s\t", vetorEstoque[i].marca);
  printf("%s\t", vetorEstoque[i].cor);
  printf("%.2f\t", vetorEstoque[i].quilometragem);
  printf("%d\t", vetorEstoque[i].anoModelo);
  printf("%d\t", vetorEstoque[i].anoFabricacao);
  printf("%.2f\t", vetorEstoque[i].valor);
  printf("%d\t", vetorEstoque[i].tipo);
  printf("\n");
  }
}

void exibeCarros(carros estoque, char modelo[], int anoFabricacao1, int anoFabricacao2, float valorMax){
  if((estoque.modelo[0]==modelo[0]) && (estoque.anoFabricacao > anoFabricacao1) && (estoque.anoFabricacao<anoFabricacao2) && (estoque.valor<valorMax)  ){
    printf("Identificador: %s\n", estoque.placa);
  }
}

void reajustarCarro(carros estoque){
  if (estoque.quilometragem==0){
    estoque.valor= estoque.valor +  (estoque.valor*0.025);
    printf("\nPreço do carro reajustado %.2f", estoque.valor);
  }
}



int buscaPlaca(carros vetorEstoque[], char placa[], int qtdEstoque){
  int i, j;
  for ( i=0 ; i<qtdEstoque ; i++ ){
    if(strcmp(vetorEstoque[i].placa, placa)==0){
      return i;
    }
  }
  return -1;
}

int retiraDoEstoque (carros vetorEstoque[], int qtdEstoque, char placa[]){
  int pos = buscaPlaca(vetorEstoque, placa, qtdEstoque);
  if (pos == -1) { 
    return qtdEstoque;
  }
  for (int i=pos; i<qtdEstoque; i++){
    if (i!=qtdEstoque-1){
    vetorEstoque[i]=vetorEstoque[i+1];
    }
  }
return qtdEstoque-1; 
}

int retiraUnidadesDoEstoque(carros vetorEstoque[], int qtdEstoque, char placa[]){
  
  int flag;
  
  flag=buscaPlaca(vetorEstoque, placa, qtdEstoque);
  
  while(flag!=-1){
    qtdEstoque=retiraDoEstoque(vetorEstoque,qtdEstoque,placa);
    flag=buscaPlaca(vetorEstoque, placa, qtdEstoque);
  }
  return qtdEstoque;
}

int main(void) {
  carros estoque;
  carros vetorEstoque[3];
  int qtdEstoque=3;
  int i;

  char modelo[2]="m";
  int anoFabricacao1=2015;
  int anoFabricacao2=2020;
  float valorMax=3000.00;
  char placa[10]="carro1";

  //==============Carro 1=====================
  strcpy(vetorEstoque[0].placa ,"carro1");
  strcpy(vetorEstoque[0].modelo,"m");
  strcpy(vetorEstoque[0].marca,"testeMarca");
  strcpy(vetorEstoque[0].cor,"testeCor");
  vetorEstoque[0].quilometragem=0;
  vetorEstoque[0].anoModelo=2018;
  vetorEstoque[0].anoFabricacao=2017;
  vetorEstoque[0].valor=2500,00;
  vetorEstoque[0].tipo=novo;
  
  //===============Carro 2======================
  strcpy(vetorEstoque[1].placa ,"carro2");
  strcpy(vetorEstoque[1].modelo,"testeModelo");
  strcpy(vetorEstoque[1].marca,"testeMarca");
  strcpy(vetorEstoque[1].cor,"testeCor");
  vetorEstoque[1].quilometragem=20.8;
  vetorEstoque[1].anoModelo=2021;
  vetorEstoque[1].anoFabricacao=2020;
  vetorEstoque[1].valor=1500,00;
  vetorEstoque[1].tipo=usado;
  
//======================Carro 3==================
  strcpy(vetorEstoque[2].placa ,"carro1");
  strcpy(vetorEstoque[2].modelo,"m");
  strcpy(vetorEstoque[2].marca,"testeMarca");
  strcpy(vetorEstoque[2].cor,"testeCor");
  vetorEstoque[2].quilometragem=0;
  vetorEstoque[2].anoModelo=2020;
  vetorEstoque[2].anoFabricacao=2019;
  vetorEstoque[2].valor=2500.00;
  vetorEstoque[2].tipo=novo;

  qtdEstoque=retiraUnidadesDoEstoque(vetorEstoque, qtdEstoque, placa);
  exibeEstoque(vetorEstoque, qtdEstoque);
  
  return 0;
}