#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include<stdio_ext.h>

int main(){

    char nome[5][16];
    
    
    for(int l = 0; l < 5;l++){

        
        printf("Digite seu nome:");
        fgets(nome[l], 15, stdin);
        nome[l][strcspn(nome[l], "\n")] = '\0';
        //__fpurge(stdin);// linux
        //fflush(stdin);//windows
        setbuf(stdin,NULL);
    }
    
    for(int l=0;l<5;l++){
    
    printf("Ola %s, bem-vindo!\n", nome[l]);
    printf("a inicial do aluno :%c\n", nome[l][0]);
    }

    return 0;
}
