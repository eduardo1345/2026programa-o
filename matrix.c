/*  7) Faça um programa que receba duas matrizes de números inteiros A e B, ambas 2x3. Em seguida
 calcule uma matriz C segundo a fórmula C = (A + B) * 2. Mostre a matriz C resultante.
 */
#include <stdio.h>

#define LINHA 2 
#define COLUNA 3

int main(){
    int matrizA[LINHA][COLUNA];
    int matrizB[LINHA][COLUNA];
    int matrizC[LINHA][COLUNA];

    printf("---Digite uma matriz 2x3---\n");
    for(int l = 0; l < LINHA; l++ ){
        for(int c = 0; c < COLUNA; c++){
            printf("posição[%d][%d]:",l + 1,c + 1);
            scanf("%d",&matrizA[l][c]);
        }
    }

    printf("---Digite outra matriz 2x3---\n");
    for(int l = 0; l < LINHA; l++ ){
        for(int c = 0; c < COLUNA; c++){
            printf("posição[%d][%d]:",l + 1,c +1);
            scanf("%d",&matrizB[l][c]);
        }
    }

    printf("---matriz resultante---\n");
    for(int l = 0; l < LINHA; l++ ){
        for(int c = 0; c < COLUNA; c++){
            matrizC[l][c] = (matrizA[l][c] + matrizB[l][c]) * 2;

            printf("%4d ",matrizC[l][c]);
       }
       printf("\n");
    }    

    return 0;
}
