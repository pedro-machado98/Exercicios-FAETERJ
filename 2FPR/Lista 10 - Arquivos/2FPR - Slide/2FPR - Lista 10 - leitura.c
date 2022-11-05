#include <stdio.h>

int eleituraArquivo ( char nomeArquivo[], int n){
    FILE *arquivo; //variavel tipo arquivo!
    char caracter;

    arquivo = fopen (nomeArquivo, "r"); //abrir o arquivo e "w" para ser uma variavel tipo escrita!

    if (arquivo == NULL){ //checando conseguiu abrir o arquivo!
        return 0;
    }
    else{
        for ( int i = 0 ; fscanf(arquivo,"%c", &caracter)!=EOF ; i++){ //ou while (fscanf (arquivo, "%c", &caracter) != EOF){} esse for não é necessario pois não é repetição determinada.
            printf("%c", caracter);
        }
        fclose(arquivo);
        return 1;
    }
}

int main(void) {
  
    int n;
    char nomeArquivo[20];

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("Digite o nome do arquivo: ");
    scanf(" %[^\n]", nomeArquivo);
    
    if ( escreveArquivo(nomeArquivo, n) ){
        printf("Deu bom camarada!");
    }
    else{
        printf("Deu ruim camarada!");
    }

  return 0;
}