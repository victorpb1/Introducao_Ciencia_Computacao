/*
10. Construa um algoritmo que solicite a quantidade (N) de números que serão lidos, 
para este grupo de N valores reais, determine o valor máximo e o valor mínimo.
*/
#include <stdio.h>
int quantidade(float qnt);
int main()
{
    float qnt;

    printf("Insira a quantidade numeros q serao lidos: ");
    scanf("%f", &qnt);

    if (qnt > 0)
    {
        quantidade(qnt);
    }
}
int quantidade(float qnt)
{
    float N, max, min;

        printf("Insira os numeros: ");
        scanf("%f", &N);

    max = N;
    min = N;

    for (int i = 0; i < qnt - 1; i++)
    {
        printf("Insira os numeros: ");
        scanf("%f", &N);

        if (N > max)
        {
            max = N;
        }
        if (N < min)
        {
            min = N;
        }
    }

    printf("\nO numero max, %.2f, o numero minimo, %.2f\n",max, min);
}