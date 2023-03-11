/*
2 - Faça uma função que receba dois vetores (A e B) de inteiros 
ordenados e um terceiro vetor (C) vazio. A função deve preencher 
o terceiro vetor (C) intercalando os vetores A e B de tal modo 
que o vetor C esteja ordenado.
*/
#include <stdio.h>
#define N 5
int funcao(int A[N], int B[N])
{
    int i, j;
    int C[10];

    for (i = 0, j = 0; i < N; i++, j++)
    {
        C[j] = A[i];
        j++;
        C[j] = B[i];
    }

    printf("\nO vetor C: ");

    for ( i = 0; i < 10; i++)
    {
        printf("%d ", C[i]);
    }
    printf("\n");
}
int main()
{
    int i;
    int A[N], B[N];
    
    for ( i = 0; i < N; i++)
    {
        printf("Insira os valores para A: ");
        scanf("%d", &A[i]);
        printf("Insira os valores para B: ");
        scanf("%d", &B[i]);
    }
    funcao(A, B);
}