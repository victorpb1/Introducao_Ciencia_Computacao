/*1. Considerando como dados as notas de uma determinada turma (56 alunos) em uma prova,
escreva um algoritmo que imprima aquelas notas que estão acima da média das notas.*/
#include <stdio.h>
#define N 56
int main()
{
    float nota[N], soma = 0, media;

    for(int i = 1; i <= N; i++)
    {
        printf("Insira as notas: ");
        scanf("%f", &nota[i]);
        soma = soma + nota[i];
    }
    media = soma/N;
    for(int i = 1; i <= N; i++)
    {
        if(nota[i] > media)
        {
            printf("Parabens aluno de nota %.2f, vc esta acima da media\n", nota[i]);
        }
    }
}
