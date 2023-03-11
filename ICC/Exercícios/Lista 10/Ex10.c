//TERMINAR
/*
10. Faça um algoritmo que carregue um vetor com os nomes de sete alunos.
Carregue outro vetor com a média final desses alunos. Calcule e mostre:
*/
#include <stdio.h>
#define qnt_alunos 2

int main()
{
    int i, aux, auxiliar_media;
    float media_final[qnt_alunos], media_maior;
    char vetor_nome[qnt_alunos][30], vetor_abaixo_media[qnt_alunos][30];

    for(i = 0; i < qnt_alunos; i++)
    {
        printf("Insira o nome dos alunos: ");
        scanf("\n%[^\n]s", vetor_nome[i]);
        
        printf("Insira a media desse aluno: ");
        scanf("%f", &media_final[i]);
        
        printf("\n");
    }

    media_maior = media_final[i];

    for (i = 0; i < qnt_alunos; i++)
    {
        if (media_maior < media_final[i])
        {
            media_maior = media_final[i];
            aux = i;
        }
    }

    printf("O aluno com maior media, %s, sua media, %.2f", vetor_nome[aux], media_maior);
    for(i = 0; i < qnt_alunos; i++)
    {
        if (media_final[i] < 7)
        {
            printf("\nO aluno, %s, foi reprovado, sendo q a media para aprovacao na prova final eh 5\n", vetor_nome[i]);
        }
    }
}
