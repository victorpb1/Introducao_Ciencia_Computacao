/*
7. Para uma turma de 62 alunos, construir um algoritmo que determine: 
(a) Idade media dos alunos com altura menor que 1.70; 
(b) A altura media dos alunos com mais de vinte anos.
*/
#define N 3
#include <stdio.h>
int main()
{
    int idade_aluno, contador_170 = 0, contador_20 = 0;
    float altura, total_altura = 0, total_altura_20 = 0, media_altura_170, media_altura_20;

    for (int i = 0; i < N; i++)
    {
        printf("Insira a idade dos alunos: ");
        scanf("%d", &idade_aluno);
        printf("Insira a altura dos alunos: ");
        scanf("%f", &altura);

        if (altura < 1.70)
        {
            contador_170++;
            total_altura = altura + total_altura;
        }
        if (idade_aluno > 20)
        {
            contador_20++;
            total_altura_20 = altura + total_altura_20;
        }    
    }

    media_altura_170 = total_altura/contador_170;
    media_altura_20 = total_altura_20/contador_20;

    printf("\nA media dos alunos com menos de 1.70, %.2f, a media dos com mais de 20 anos, %.2f\n", media_altura_170, media_altura_20);
}
