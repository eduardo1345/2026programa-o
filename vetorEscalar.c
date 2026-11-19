/*4) Faça um programa que leia e armazene um vetor (VetorA) de inteiros e tamanho 10. 
Crie um VetorB, de mesmo tamanho, gerado a partir do Vetor A invertido (de trás para
 frente). Em seguida, calcule o VetorC que deverá ser o resultado do VetorA multiplicado 
 pelo escalar 3 e em seguida subtraído do Vetor B.*/
#include <stdio.h>

#define TAM 10


int main() {
    int VetorA[TAM];
    int VetorB[TAM];
    int VetorC[TAM];
    int i;

    printf("Digite um vetor de inteiros tamanho 10\n ");
    for (i = 0; i < 10; i++) {
        printf("Posicao [%d]: \n", i + 1);
        scanf("%d", &VetorA[i]);
    }
    
    for ( i = 0; i < TAM; i++) {
        VetorB[i] = VetorA[TAM -1 - i];
    }

    for(i = 0; i < TAM; i++){
        VetorC[i] = (VetorA[i] *3) - VetorB[i];
    }

    printf("\nVetorB (invertido):\n");
    for (i = 0; i < TAM; i++) {
        printf("VetorB[%d] = %d\n", i, VetorB[i]);
    }

    printf("\nResultante VetorC:\n");
    for (i = 0; i < TAM; i++) {
        printf("VetorC[%d] = %d\n", i, VetorC[i]);
    }

    return 0;
}
