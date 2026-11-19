/* Faça um programa que receba 10 números inteiros. Em seguida o programa deverá
permitir o usuário buscar números dentro do vetor, informando se o mesmo está ou 
não no vetor. O usuário poderá realizar quantas buscas quiser e finalizar ao 
solicitar a busca de um valor negativo.*/
#include <stdio.h>

#define TAM 10


int main() {
    int VetorA[TAM];
    int i;
    int opcao,encontrado;

    printf("---Digite 10 numeros inteiros---\n ");
    for (i = 0; i < TAM; i++) {
        printf("Posicao [%d]: ", i + 1);
        scanf("%d", &VetorA[i]);
    }

    printf("---Digite um numero para buscar no vetor ou para finalizar Digite um valor negativo--- \n");
    do{
        printf("numero:");
        scanf("%d",&opcao);


        if (opcao < 0){
            printf("Encerrando programa");
            break;
        }

        encontrado = 0;
        for(i = 0; i <TAM; i++){
            if(VetorA[i] == opcao ){
                printf("Valor encontrado Posicao[%d]\n",i + 1);
                encontrado = 1;
            }

        }
        
        if(!encontrado){
            printf("Valor %d NAO esta no vetor.\n", opcao);

        }
    }while(opcao >= 0);

    return 0;
}
