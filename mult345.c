#include<stdio.h>

int main(){
    int z=100;
    int mult4 = 0;
    int mult3 = 0;
    int mult5 = 0;
    int somaMult5 = 0;
    
    if(z < 0){
        printf("entrada invalida , numero negativo.\n");
        return 1;
    }

    for (int i = z; i >= 1; i--) {
        printf("%d ", i);

        if(i % 3  == 0){
           mult3++;
        }
        if(i % 5 == 0){
            somaMult5 += i;
            mult5 ++;
        }
    }

    for(int i = z; i >= 1; i--){
        if(i % 4 == 0){
            printf(" %d",i);
        }
    }

    printf("\n\nQuantidade de multiplos de 3: %d\n", mult3);

    if (mult5 > 0) {
        float media = (float)somaMult5 / mult5;
        printf("Media dos multiplos de 5: %.2f\n", media);
    } else {
        printf("Nao ha multiplos de 5 no intervalo.\n");
    }

 return 0;
}
