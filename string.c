

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main(){
    
    char entrada[16];
    char senha[16]="apucarana";

    printf("Digite a senha:\n");
    fgets(entrada, 15, stdin);
    entrada[strcspn(entrada, "\n")] = '\0';
    
    if(strcmp(entrada,senha)==0){

        printf("senha corrta");
    }else{

        printf("cai fora");
    }

    /*
    char nome[16];
    int tamanho;
    char novoNome[16];
    char sobrenome[16]="da silva";

    printf("Digite seu nome:\n");
    fgets(nome, 15, stdin);
    nome[strcspn(nome, "\n")] = '\0';
    
    tamanho =strlen(nome);//total de byts de um vetor
    strcpy(novoNome,nome);//copia a string para outro vetor 
    strcat(nome , sobrenome);//junta duas vetores de string

    printf("Ola %s %s, bem-vindo!\n", novoNome,sobrenome);
    printf("sua inicial :%c \n",nome[0]);
    printf("total de bite :%d\n",tamanho);
     */
    return 0;
}
