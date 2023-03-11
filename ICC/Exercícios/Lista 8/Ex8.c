/*
8. Considerando como dados as notas de uma determinada turma (56 alunos) em um prova, 
escreva um algoritmo que imprima a média da notas dessa turma.
*/
#define N 3
#include <stdio.h>
int main()
{
    float notas, total_notas = 0, media_notas;

    for (int i = 0; i < N; i++)
    {
        printf("Insira as notas dos alunos: ");
        scanf("%f", &notas);

        total_notas = notas + total_notas;
    }

    media_notas = total_notas/N;
    printf("\nA media das provas: %.2f\n", media_notas);
}