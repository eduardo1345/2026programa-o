/*  Faça um programa que leia e armazene as notas (valores reais) de 10 alunos.
    O programa somente deverá aceitar notas entre 0 e 10 (inclusive), solicitando 
    uma nova digitação quando uma nota inválida for digitada. Após a leitura o
    programa deve:
 
a) Contar e exibir quantos alunos foram reprovados (nota < 6.0);
b) Exibir as notas dos alunos que foram aprovados (nota >= 6.0);
c) Calcular e exibir a média geral de todas as notas;
d) Calcular e exibir a porcentagem de alunos aprovados;
e) Exibir a nota mais alta e a mais baixa.
 */
#include <stdio.h>

#define TAM 10


int main(){
    float notas[TAM];
    int i;
    float media ,soma = 0 ;
    int contaAprovados = 0 ,porcentagem;
    float maior ,menor;


    printf("---Digite 10 notas dos alunos---\n ");
    for (i = 0; i < TAM; i++) {
        printf("Posicao [%d]: ", i + 1);
        scanf("%f", &notas[i]);

        if(notas[i] < 0 || notas[i] > 10 ){
            printf("nota inválida digitada\n");
            i--;
            continue;
        }
        
    }

    maior = notas[0];
    menor = notas[0];
    
    for (i = 0; i < TAM; i++) {
        if(notas[i] < 6 ){
            printf("Aluno[%d] foi reprovado\n",i + 1);
        }
        if(notas[i] >= 6){
             printf("Aluno[%d] foi aprovado\n",i + 1);
             contaAprovados++;
        }

        soma += notas[i];
        media = (float)soma/10;
    
        porcentagem = contaAprovados * 10;

        if(notas[i] > maior){
            maior = notas[i];
        }
        if(notas[i] < menor){
            menor = notas[i];
        }
    } 

    printf("Media da turma %.2f\n",media);
    printf("%d%% da turma foi aprovada\n",porcentagem);
    printf("Maior nota : %.2f\n",maior);
    printf("Menor nota:%.2f\n",menor);
    
    return 0;
}

