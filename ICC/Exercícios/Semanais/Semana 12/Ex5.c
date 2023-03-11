/*
5. Escreva um algoritmo que lê uma matriz M 5x5, calcule as somas e mostre:
a) da linha 4 de M
b) da coluna 2 de M
c) da diagonal principal
d) da diagonal secundaria
e) de todos os elementos da matriz M
*/
#include <stdio.h>

#define L 5
#define C 5

#define A 4
#define B 2
void a(int matriz[L][C])
{
    int i, somaA = 0;

    for (i = 0; i < L; i++)
    {
        somaA += matriz[A][i];
    }
    printf("\nA soma da linha 4: %d", somaA);
}
void b(int matriz[L][C])
{
    int i, somaB = 0;

    for (i = 0; i < L; i++)
    {
        somaB += matriz[i][B];
    }
    printf("\nA soma da coluna 2: %d", somaB);

}
void c(int matriz[L][C])
{
    int i, somaC = 0;

    for (i = 0; i < L; i++)
    {
        somaC += matriz[i][i];
    }
    printf("\nA soma da diagonal principal: %d", somaC);

}
void d(int matriz[L][C])
{
    int i, j = 0, somaD = 0;

    for (i = L - 1; i > -1; i--)
    {
        somaD += matriz[j][i];
        j++;
    }
    printf("\nA soma da diagonal secundaria: %d", somaD);
}
void e(int matriz[L][C])
{
    int i, j, somaE = 0;

    for (j = 0; j < L; j++)
    {   
        for (i = 0; i < L; i++)
        {
            somaE += matriz[j][i];
        }
    }
    printf("\nA soma de todos os elementos da matriz: %d", somaE);
}
int main()
{
    int i, j, matriz[L][C];

    for (j = 0; j < L; j++)
    {
        for (i = 0; i < C; i++)
        {
            printf("Insira o valor para a posicao [%d][%d]: ", j, i);
            scanf("%d", &matriz[j][i]);
        }
    }
    printf("\n");
    
    for (j = 0; j < L; j++)
    {
        for (i = 0; i < C; i++)
        {
            printf("[%d]", matriz[j][i]);
           
        }
        printf("\n");
    }

    a(matriz);
    b(matriz);
    c(matriz);
    d(matriz);
    e(matriz);

    return 0;
}