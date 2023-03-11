/*
1 - Faça uma função que receba dois vetores (A e B) de inteiros ordenados e um terceiro vetor (C) vazio. 
Preencha o terceiro vetor (C) intercalando os vetores A e B de tal modo que o vetor C esteja ordenado.
*/
#include <stdio.h>
#define TAM_A 4
#define TAM_B 4
#define TAM_C (TAM_A + TAM_B + 1)

void vetores(int A[TAM_A], int B[TAM_B], int C[TAM_C])
{
    int i, j, h;

    for(i = 0, j = 0, h = 0; i < TAM_C; i++)
    {
        if (A[j] < B[h])
        {
            C[i] = A[j];
            j++;
        }else if(B[h] < A[j])
        {
            C[i] = B[h];
            h++;
        }
        
    }

    for (i = 0; i < TAM_C; i++)
    {
        printf("%d ", C[i]);
    }
    
}
int main()
{
    int A[TAM_A], B[TAM_B], C[TAM_C], i;

    for (i = 0; i < TAM_A; i++)
    {
        printf("Insira o valor de A: ");
        scanf("%d", &A[i]);
        printf("Insira o valor de B: ");
        scanf("%d", &B[i]);
    }
    
    vetores(A, B, C);
}