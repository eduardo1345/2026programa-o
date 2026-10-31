/******************************************************************************
 * @file vetor5.c
 * @author EDUARDO PEREIRA   (edu312001gm@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2026-10-02
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que receba e armazene 20 números em um vetor.
 *
 * Em seguida exiba:
 *
 * –Quantos números são iguais a 30;
 * –Quantos números são maior que a média;
 * –Quantos números são iguais à media;
 *
*******************************************************************************/
#include <stdio.h>

#define TAM 20

int main(){

    int vetor[TAM];
    int soma = 0;
    float media = 0;
    int contador30 = 0;
    int maior_media = 0;  
    int igual_media = 0; 

    printf("---Digite 20 numeros---\n");
    for(int i = 0; i < TAM ; i++ ){

        printf("numero %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if(vetor[i] == 30){
            contador30++;
        }

        soma += vetor[i];
    } // for vetor

    media = (float)soma / TAM;

    for(int i = 0 ; i < TAM ; i++ ){
        
        if(vetor[i] > media){
            maior_media++;
        }
        
        if(vetor[i] == media){
            igual_media++;
        }
    }//for media

    printf("\n--- RESULTADOS ---\n");
    printf("Media: %.2f \n", media);
    printf("Quantidade de numeros iguais a 30: %d \n", contador30);
    printf("Quantidade de numeros maiores que a media: %d \n", maior_media);
    printf("Quantidade de numeros iguais a media: %d \n", igual_media);

    return 0;
} // main
