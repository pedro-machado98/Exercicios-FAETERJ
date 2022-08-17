#include <stdio.h>
#include <string.h>

void imprime_vertical (char nome[]){
    int lenght,i;
    lenght = strlen(nome);

    for(i=0;nome[i]!='\0';i++){
        printf("\n%c", nome[i]);
    }
}


int main(void){
    char firstName[30], secondName[30], completename[60];

    printf("Digite seu primeiro nome: \n");
    scanf(" %[^\n]", firstName);
    printf("Digite seu sobrenome: \n");
    scanf(" %[^\n]", secondName);

    imprime_vertical(firstName);
    printf("\n");
    imprime_vertical(secondName);


    return 0;
}
