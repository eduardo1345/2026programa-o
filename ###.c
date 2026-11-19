#include <stdio.h>

int main() {
    int tamanho;
    printf("Digite o tamanho desejado: ");
    scanf("%d", &tamanho);

    for (int l = 0; l < tamanho; l++) {
        for (int c = 0; c < tamanho; c++) {
            if (l == 0 || l == tamanho - 1 || c == 0 || c == tamanho - 1) {
                printf("# ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
