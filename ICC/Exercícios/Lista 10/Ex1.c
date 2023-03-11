#define N 56
#include <stdio.h>

int main()
{
    float aluno[N], soma = 0, media;

    for(int i = 0; i < N; i++)
    {
        printf("Insira as notas dos alunos: ");
        scanf("%f", &aluno[i]);

        soma = soma + aluno[i];
        media = soma/N;
    }

    printf("\nA media da turma de alunos %d, %.2f", N, media);

    for(int i = 0; i < N; i++)
    {
        if (aluno[i] > media)
        {
            printf("\nO aluno %d esta acima da media da turma\n", i+1);
        }   
    }
}