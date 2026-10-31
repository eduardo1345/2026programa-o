/******************************************************************************
 * @file vetor3.c
 * @author EDUARDO PEREIRA   (edu312001gm@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2026-10-02
 * 
 * @copyright Copyright (c) 2026
 * 
 *Crie e inicialize um vetor de inteiros de tamanho 8. Faça a soma dos seus 
 *elementos, e apresente o resultado.
 *
*******************************************************************************/
#include <stdio.h>

#define TAM 8

int main(){

    int vetor[TAM] = {2,6,5,4,5,2,54,58};
    int soma = 0;
    
    for(int i = 0; i < TAM; i++){
        soma += vetor[i] ;
    }//for soma vetor

    printf("\nsoma do vetor:%d\n",soma);

    return 0;
}//main
