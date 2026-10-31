/******************************************************************************
 * @file vetor.c
 * @author EDUARDO PEREIRA   (edu312001gm@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2026-10-02
 * 
 * @copyright Copyright (c) 2026
 * 
 *Faça um programa que leia e armazene dois vetores de tamanho 5.
 * Ao final o programa deve calcular e exibir o vetor soma;
 *
*******************************************************************************/
#include <stdio.h>

#define TAM 5

int main(){

    int vetor1 [TAM];
    int vetor2 [TAM];
    int soma[TAM];
    
    printf("---primeiro vetor---\n");
    for(int i=0; i < TAM; i++){
        
        printf("numero %d:\n", i );
        scanf("%d",&vetor1[i]);
    
    }// for primeiro vetor

    printf("---segundo vetor---\n");
    for(int i=0; i < TAM ;i++){
        
        printf("numero %d:\n", i );
        scanf("%d",&vetor2[i]);
        
        soma[i] = vetor1[i] + vetor2[i];
    }//for segundo vetor + a soma
    
    printf("---Vetor resultante da soma---\n");
    for (int i = 0; i < TAM; i++) {
        
        printf("soma[%d] = %d\n", i, soma[i]);
        
    }//for resultante da soma
        
        return 0;
    }//main
