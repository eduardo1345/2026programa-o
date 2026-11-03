#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main(){
    char nome[16];
    
    printf("Digite seu nome:\n");
    fgets(nome, 15, stdin);
    
    
    nome[strcspn(nome, "\n")] = '\0';
    
    printf("Ola %s, bem-vindo!\n", nome);
    printf("sua inicial :%c \n",nome[0]);

    return 0;
}
