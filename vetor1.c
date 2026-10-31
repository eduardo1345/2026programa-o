/******************************************************************************
 * @file vetor1.c
 * @author EDUARDO PEREIRA   (edu312001gm@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2026-10-02
 * 
 * @copyright Copyright (c) 2026
 * 
 * Crie um algoritmo que receba 10 números e os armazene em um vetor A. Em 
 * seguida, gere o vetor B onde cada elemento é o quadrado do valor da mesma
 * posição no vetor A
 *
*******************************************************************************/
#include <stdio.h>

#define TAM 10

int main(){

    int vetor [TAM]; 
    int quadrado[TAM];
    
     printf("---Digite o vetor---\n");
    for(int i = 0; i < TAM; i++){
    
       
        printf("numero %d:\n", i + 1 );
        scanf("%d",&vetor[i]);
    
        quadrado[i] = vetor[i] * vetor[i];
    }//for vetor A + vetor ao quadrado  
    
    printf("---Vetor A elevado ao quadrado---\n");
    for (int i = 0; i < TAM ; i++) {
        
        printf("quadrado[%d] = %d\n", i + 1, quadrado[i]);    
    }//for mostra o vetor resultante 
        
        return 0;
    }//main
