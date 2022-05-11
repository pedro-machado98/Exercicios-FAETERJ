#include <stdio.h>

void fexibe(float fvalotsemdesconto, float fdescontoporvalor, float fdescontopormes, float fvalorfinalapagar){
  printf("\n-------------------------------");
  printf("\nValor total da encomenda: %.2fR$",fvalotsemdesconto);
  printf("\nDesconto por valor total: %.2fR$",fdescontoporvalor);
  printf("\nDesconto por mês da compra: %.2fR$",fdescontopormes);
  printf("\nValor final a pagar: %.2fR$",fvalorfinalapagar);
  printf("\n-------------------------------\n");
}


int descontopormes(int fmes, int fvalorcomdesconto){
  int qtd, descontomesfinal, variavel;
  qtd = fvalorcomdesconto/500;

  if(fmes==11 || fmes==12){
    variavel=20;
  }
  else{
    if(fmes==8){
      variavel=80;
    }
    else{
      variavel=35;
    }
  }

  descontomesfinal= qtd*variavel;
  return descontomesfinal;
}


float fdescontoporvalortotal(int fvalortotal){
  float percent;
  if(fvalortotal<=999.99){
    percent=0;
  }
  else{
    if(fvalortotal<=2999.99){
      percent=0.25;
    }
    else{
      if(fvalortotal<=4999.99){
        percent=0.35;
      }
      else{
        percent=0.4;
      }
    }
  }
  
  return percent*fvalortotal;
}


int funcaocodigo(int fcodigo){
  int preco;
  if (fcodigo%2==0){
    preco=10;
  }
  else{
    preco=20;
  }
  return preco;
}


int main(void) {
  int codigo, quantidade, mes, valorcom1desconto;
  float valortotal, descontomes, descontoporvalortotal, valorapagar;
  printf("Qual o codigo do produto: ");
  scanf("%d",&codigo);
  printf("\nDigite a quantidade comprada: ");
  scanf("%d",&quantidade);
  printf("\nDigite o mês da compra: ");
  scanf("%d",&mes);
  
  valortotal=funcaocodigo(codigo)*quantidade;
  descontoporvalortotal = fdescontoporvalortotal(valortotal);
  valorcom1desconto=valortotal-descontoporvalortotal;
  descontomes=descontopormes(mes,valorcom1desconto);
  valorapagar=valorcom1desconto-descontomes;

  fexibe(valortotal, descontoporvalortotal, descontomes, valorapagar);


  return 0;
}

//mostrar valor total da encomenda sem desconto
// mostrar o desconto pelo valor total
//Mostrar desconto pelo mês
//mostrar o valor final a pagar