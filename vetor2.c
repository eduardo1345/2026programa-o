/******************************************************************************
 * @file vetor2.c
 * @author EDUARDO PEREIRA   (edu312001gm@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2026-10-02
 * 
 * @copyright Copyright (c) 2026
 * 
 * Leia um vetor A com 10 elementos inteiros correspondentes as idades de um 
 * grupo de pessoas. Escreva um programa que determine e escreva a quantidade 
 * de pessoas que possuem idade superior a 35 anos
 *
*******************************************************************************/
#include <stdio.h>

#define TAM 10

int main(){

    int idades[TAM];
    int contador = 0;
    
    printf("\n---Digite as idades---\n");
    
    for(int i = 0; i < TAM ; i++ ){

        printf("idade %d:",i + 1);
        scanf("%d",&idades[i]);

        if(idades[j] > 35){
            contador++;
        }//if maior de 35

    }//for vetor A idades

    printf(" %d maiores de 35 anos \n",contador);

    return 0;
}//main
