/******************************************************************************
 * @file vetor2.c
 * @author EDUARDO PEREIRA   (edu312001gm@gmail.com)
 * @brief 
 * @version 0.2
 * @date 2026-10-02
 * 
 * @copyright Copyright (c) 2026
 * 
 * Dado dois vetores, A (4 elementos) e B (5 elementos), faça um programa que 
 * imprima todos os elementos comuns aos dois vetores.
 *
*******************************************************************************/
#include <stdio.h>

#define TAM1 4
#define TAM2 5

int main(){

    int vetor1[TAM1];
    int vetor2[TAM2];
    
    printf("---Digite 4 numeros inteiros (Vetor A)---\n");
    for(int i = 0; i < TAM1; i++){

        printf("numero %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }
    
    printf("---Digite 5 numeros inteiros (Vetor B)---\n");
    for(int i = 0; i < TAM2; i++){

        printf("numero %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    printf("\n--- Elementos comuns encontrados ---\n");
    for(int i = 0; i < TAM1; i++){
        for(int j = 0; j < TAM2; j++){
            
            if(vetor1[i] == vetor2[j]){
                printf("O numero %d e comum aos dois vetores (Vetor A[%d] e Vetor B[%d])\n", vetor1[i], i + 1,j + 1);
                break; 
            }//if 
            
        }//for
    }//for passa por cada elemento do vetor A e compara sem tem algum elemento repitido no vetor B

    return 0;
} // main
