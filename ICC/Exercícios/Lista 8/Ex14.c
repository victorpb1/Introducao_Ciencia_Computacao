/*
14. Construa um algoritmo que leia um conjunto não determinado de pares de valores M e N 
(parar quando algum dos valores for menor ou igual a zero). Para cada par lido, mostre:
a) a sequência do menor até o maior, inclusive;
b) a soma dos inteiros consecutivos do menor até o maior, inclusive.
*/
#include <stdio.h>
int a(int M, int N)
{
    if (M > N)
    {
        printf("\nSequencia do menor(%d) ate o maior(%d): ", N, M);
        for (int i = N; i <= M; i++)
        {
            printf("%d ", i);
        }
    }else if (N > M)
    {
        printf("\nSequencia do menor(%d) ate o maior(%d): ", M, N);
        for (int i = M; i <= N; i++)
        {
            printf("%d ", i);
        }
    }
    b(M, N);
}
int b(int M, int N)
{
    int soma;

    if (M > N)
    {
        soma = 0;

        for (int i = N; i < M; i++)
        {
            soma = soma + i;
        }
        printf("\nA soma dos inteiros consecutivos: %d\n", soma);

    }else if (N > M)
    {
        soma = 0;

        for (int i = M; i < N; i++)
        {
            soma = soma + i;
        }
        printf("\nA soma dos inteiros consecutivos: %d\n", soma);
    }
}
int main()
{
    int M, N;
    do
    {
        printf("Digite um valor para M: ");
        scanf("%d", &M);
        printf("Digite um valor para N: ");
        scanf("%d", &N);
        
        if (M > 0 && N > 0)
        {
            a(M, N);

        }else if(M == 0 || N == 0)
        {    
            printf("\nFinalizando programa!!!");
            return 0;
        }

    }while (M != 0 || N != 0);
}