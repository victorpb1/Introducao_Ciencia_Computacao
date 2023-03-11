#include <stdio.h>

int L1(float A, float B, float C);
int L2(float A, float B, float C);
int L3(float A, float B, float C);

int main()
{
    int L;
    float A, B, C;

    printf("Insira os valores de A, B e C: ");
    scanf("%f%f%f", &A, &B, &C);
    printf("Insira a operacao com nmr corresponde para L (1, 2, 3): ");
    scanf("%d", &L);

    switch (L)
    {
    case 1:
        L1(A,B,C);
        break;
    case 2:
        L2(A,B,C);
        break;
    case 3:
        L3(A,B,C);
        break;
    default:
        printf("Operacao inexistente!\n");
        break;
    }
}
int L1(float A, float B, float C)
{
    if (A > B && A > C)
    {
        if (B > C)
        {
            printf("\nC < B < A\n");
        }
        else if (C > B)
        {
            printf("\nB < C < A\n");
        }

    }else if (B > A && B > C)
    {
        if (A > C)
        {
            printf("\nC < A < B\n");
        }
        else if (C > A)
        {
            printf("\nA < C < B\n");
        }

    }else if (C > A && C > B)
    {
        if (A > B)
        {
            printf("\nB < A < C\n");
        }
        else if (B > A)
        {
            printf("\nA < B < C\n");
        }
    }
}
int L2(float A, float B, float C)
{
    if (A > B && A > C)
    {
        if (B > C)
        {
            printf("\nA > B > C\n");
        }
        else if (C > B)
        {
            printf("\nA > C > B\n");
        }

    }else if (B > A && B > C)
    {
        if (A > C)
        {
            printf("\nB > A > C\n");
        }
        else if (C > A)
        {
            printf("\nB > C > A\n");
        }

    }else if (C > A && C > B)
    {
        if (A > B)
        {
            printf("\nC > A > B\n");
        }
        else if (B > A)
        {
            printf("\nC > B > A\n");
        }
    }
}
int L3(float A, float B, float C)
{
    if (A > B && A > C)
    {
        printf("\nB < A > C\n");

    }else if (B > A && B > C)
    {
        printf("\nC < B > C\n");
        
    }else if (C > A && C > B)
    {
        printf("\nB < C > A\n");
    }
}