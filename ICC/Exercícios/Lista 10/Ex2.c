#define N 3
#include <stdio.h>

int main()
{
    int A[N], B[N], C[N], h = 0;

    for (int i = 0; i < N; i++)
    {
        C[i] = 0;
    }

    for(int i = 0; i < N; i++)
    {
        printf("Insira os numeros para A: ");
        scanf("%d", &A[i]);
        printf("Insira os numeros para B: ");
        scanf("%d", &B[i]);
    }

    printf("\nA interseccao: ");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (A[i] == B[j])
            {
                C[h] = A[i];
                printf("%d ", C[h]);
                h++;
            }
        }
    }
}