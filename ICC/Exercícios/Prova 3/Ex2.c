/*
2 - Faça uma função XYZ que receba notas de N alunos. Cada aluno possui notas 
referentes a quatro avaliações. A função deve existir todas as médias calculadas
dos alunos maiores que a média da turma. Obs.: caso seja entendido que seja 
necessário, é permitido criar funções auxiliares.
*/
#include <stdio.h>
float XYZ(int numero_alunos, char nome_alunos[numero_alunos][30], float media_das_4[numero_alunos], int indice_aluno[numero_alunos])
{
    int i; 
    float media_total_sala, soma = 0;

    for (i = 0; i < numero_alunos; i++)
    {
        soma += media_das_4[i];
    }

    media_total_sala = (float)soma/numero_alunos;
    printf("A media da sala: %.2f", media_total_sala);

    for (i = 0; i < numero_alunos; i++)
    {
        if (media_das_4[i] > media_total_sala)
        {
            printf("\nO aluno %s, com a media %.2f esta acima da media geral da sala, %.2f\n", nome_alunos[i], media_das_4[i], media_total_sala);
        }
    }
    
}
int main()
{
    //printf("teste");
    int i, j, numero_alunos;
    
    printf("Insira a qntd de alunos: ");
    scanf("%d", &numero_alunos);

    int indice_aluno[numero_alunos];
    char nome_alunos[numero_alunos][30];
    float soma = 0, prova[4], media_das_4[numero_alunos];
    
    for (i = 0; i < numero_alunos; i++)
    {
        printf("\nInsira o nome do aluno: ");
        scanf("\n%[^\n]s", nome_alunos[i]);

        indice_aluno[i] = i;

        for (j = 0; j < 4; j++)
        {
            printf("Insira a nota da prova[%d]: ", j+1);
            scanf("%f", &prova[j]);

            soma += prova[j];
        }
        
        media_das_4[i] = soma/4;
        printf("\n\nMedia: %.2f\n\n", media_das_4[i]);

        soma = 0;
    }

    //pra cima disso ak tá td certo ^^^^^^^^^

    XYZ(numero_alunos, nome_alunos, media_das_4, indice_aluno);
}