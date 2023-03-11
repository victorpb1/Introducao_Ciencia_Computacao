/*
6. Construa um algoritmo que leia um vetor G[5] e a seguir leia um número indefinido de alunos 
e de vetores R[5], que seriam as respostas dos alunos para as questões, sendo que deve ser lido 
um número de aluno e um vetor de respostas por vez. Para cada aluno, mostre o número de acertos 
e a sua nota, sendo que todas as questões tem o mesmo peso. Mostre, ainda, a mensagem “Aprovado”, 
se o aluno ficou com nota acima ou igual a 5 e “Reprovado” se o aluno ficou com a nota menor do que 5.
*/
#include <stdio.h>
#define count 5
int main()
{
    int n_aluno, contador_acertos = 0;
    char G[count], R[count];

    for (int i = 0; i < count; i++)
    {
        printf("Insira o gabarito da Questao %d: ", i+1);
        scanf("\n%c", &G[i]);
    }

    do
    {
        printf("\nInsira o numero do aluno: ");
        scanf("%d", &n_aluno);

        if (n_aluno == 0)
        {
            return 0;
        }
        
        for (int i = 0; i < count; i++)
        {
            printf("Insira a resposta da %d: ", i+1);
            scanf("\n%c", &R[i]);

            if (G[i] == R[i])
            {
                contador_acertos++;
            }
        }

        if (contador_acertos >= 3)
        {
            printf("\nParabens vc foi aprovado!\n");
        }else{
            
            printf("\nVc foi reprovado!\n");
        }

        contador_acertos = 0;

    } while (n_aluno > 0);
}