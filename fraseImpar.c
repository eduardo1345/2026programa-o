/*
12) Desenvolva um programa que receba uma frase. O programa deverá gerar e exibir uma nova string, contendo uma "palavra sim e outra não" da frase digitada, e exibir o número de palavras da frase original.

Exemplo:
Digite uma frase: A arte de programar consiste em organizar e dominar a complexidade.
Saída
A de consiste organizar dominar complexidade.
Número de palavras: 11
*/

#include <stdio.h>
#include <string.h>

int main() {
    char frase[500];
    char novaFrase[500];
    int i = 0, j = 0 , contaFrase = 0 , contaPalavra = 0;

    printf("Digite uma frase: ");
    fgets(frase,sizeof(frase),stdin);
    frase[strcspn(frase , "\n" "\r")]= '\0';

   while(frase[i] != '\0'){
        if(frase[i] == ' ' || frase[i] == '\n' ){
            contaFrase = 0;            
        }else{
            if(contaFrase == 0){
                contaFrase = 1;
                contaPalavra ++;
              
                if(contaPalavra % 2 == 1){
                novaFrase[j++] = ' ';
                
                }//if
            }//if
        }//else
       
        if(contaPalavra % 2 == 1){
            novaFrase[j++] = frase[i];
        }
            
       i++;
    }//while
    novaFrase[j] = '\0';

    printf("Saida: %s\n", novaFrase);
    printf("Numero de palavras: %d\n", contaPalavra);
   
    return 0;
}
