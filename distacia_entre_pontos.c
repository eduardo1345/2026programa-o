
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

    // Coordenadas do primeiro e do segundo ponto
    float x1, y1, x2, y2;

    // Variavel que armazenara a distancia
    float distancia;

    // Recebe as coordenadas do primeiro ponto
    printf("Digite as coordenadas do ponto 1:\n");

    printf("x1: ");
    scanf("%f", &x1);

    printf("y1: ");
    scanf("%f", &y1);

    // Recebe as coordenadas do segundo ponto
    printf("Digite as coordenadas do ponto 2:\n");

    printf("x2: ");
    scanf("%f", &x2);

    printf("y2: ");
    scanf("%f", &y2);

    // Calcula a distancia entre os dois pontos
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Exibe a distancia com duas casas decimais
    printf("Distancia entre os pontos: %.2f\n", distancia);

    return EXIT_SUCCESS;
}
