/*4. Faça um algoritmo que receba a temperatura média de cada mês do ano e armazene-as em um 
vetor. Calcule e mostre a maior e a menor temperatura do ano e em que mês elas ocorreram 
(mostrar o mês por extenso: 1 - Janeiro, 2 - Fevereiro, ...). Obs.: desconsiderar empates.*/
#include <stdio.h>
#define N 12

int main()
{
    float tpm[N], max, min;
    max = tpm[1];
    min = tpm[1];

    for (int i = 0; i < N; i++)
    {
        printf("Insira a Temp media de cada mes: ");
        scanf("%f", &tpm[i]);
        if (tpm[i] > max)
        {
            max = tpm[i];
        }
        if (tpm[i] < min)
        {
            min = tpm[i];
        }       
    }
    for (int i = 0; i < N; i++)
    {
        if(tpm[i] == max)
        {
            printf("\nTemperatura maxima eh a de ");
            if (i == 0)
            {
                printf("Janeiro");
            }
            if (i == 1)
            {
                printf("Fevereiro");
            }
            if (i == 2)
            {
                printf("Marco");
            }
            if (i == 3)
            {
                printf("Abril");
            }
            if (i == 4)
            {
                printf("Maio");
            }
            if (i == 5)
            {
                printf("Junho");
            }
            if (i == 6)
            {
                printf("Julho");
            }
            if (i == 7)
            {
                printf("Agosto");
            }
            if (i == 8)
            {
                printf("Setembro");
            }
            if (i == 9)
            {
                printf("Outubro");
            }
            if (i == 10)
            {
                printf("Novembro");
            }
            if (i == 11)
            {
                printf("Dezembro");
            }
        }
        if(tpm[i] == min)
        {
            printf("\nTemperatura minima eh a de ");
            if (i == 0)
            {
                printf("Janeiro");
            }
            if (i == 1)
            {
                printf("Fevereiro");
            }
            if (i == 2)
            {
                printf("Marco");
            }
            if (i == 3)
            {
                printf("Abril");
            }
            if (i == 4)
            {
                printf("Maio");
            }
            if (i == 5)
            {
                printf("Junho");
            }
            if (i == 6)
            {
                printf("Julho");
            }
            if (i == 7)
            {
                printf("Agosto");
            }
            if (i == 8)
            {
                printf("Setembro");
            }
            if (i == 9)
            {
                printf("Outubro");
            }
            if (i == 10)
            {
                printf("Novembro");
            }
            if (i == 11)
            {
                printf("Dezembro");
            }
        }
    }
    
    printf("\nA temp max, %.2f e a temp min, %.2f", max, min);
    return 0;
}