#include <stdio.h>
#include <string.h>

void imprime_vertical (char nome[]){
    int lenght,i;
    lenght = strlen(nome);

    for(i=0;nome[i]!='\0';i++){
        printf("%c\n", nome[i]);
    }
}


int main(void){
    char firstName[30], secondName[30], completename[60];

    printf("Digite seu primeiro nome: \n");
    scanf(" %[^\n]", firstName);
    printf("Digite seu sobrenome: \n");
    scanf(" %[^\n]", secondName);

    strcat(secondName,firstName);

    printf("%s", secondName);

    imprime_vertical(firstName);
    printf("\n");
    imprime_vertical(secondName);


    return 0;
}