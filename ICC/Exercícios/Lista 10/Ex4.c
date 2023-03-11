/*
4. Faça um algoritmo que receba a temperatura média de cada mês do ano e armazene-as em um vetor.
Calcule e mostre a maior e a menor temperatura do ano e em que mês elas ocorreram (mostrar o mês 
por extenso: 1 - Janeiro, 2 - Fevereiro, ...). Obs.: desconsiderar empates.
*/
#define N 12
#include <stdio.h>

int main()
{
    int mes_max, mes_min;
    float max, min, temp[N];
    
    printf("Insira a temperatura media do mes 1: ");
    scanf("%f", &temp[0]);

    max = temp[0];
    min = temp[0];
    mes_max = 1;
    mes_min = 1;

    for (int i = 2; i <= N; i++)
    {
        printf("Insira a temperatura media do mes %d: ", i);
        scanf("%f", &temp[i]);

        if (temp[i] > max)
        {
            mes_max = i;
            max = temp[i];
        }
        if (temp[i] < min)
        {
            mes_min = i;
            min = temp[i];
        }
    }
    printf("\nA menor temp, %.2f, o mes corresponde, %d", min, mes_min);
    printf("\nA maior temp, %.2f, o mes corresponde, %d", max, mes_max);
}