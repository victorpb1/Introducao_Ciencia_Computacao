#include <stdio.h>
int main()
{
    float A,B,C;
    int I;

    printf("Insira 3 numeros diferentes: ");
    scanf("\n%f\n%f\n%f", &A,&B,&C);
    printf("\nInsira valor de I (1-3): ");
    scanf("\n%d", &I);

    switch(I)
    {

        case 1:
                if (A > B && B > C)
                {
                    printf("\nA > B > C\n");
                }
                if (A > B && C > B)
                {
                    printf("\nA > C > B\n");
                }
                if (B > A && A > C)
                {
                    printf("\nB > A > C\n");
                }
                if (B > A && C > A)
                {
                    printf("\nB > C > A\n");
                }
                if (C > A && A > B)
                {
                    printf("\nC > A > B\n");
                }
                if (C > A && B > A)
                {
                    printf("\nC > B > A\n");
                }
            break;

        case 2:
                if (A < B && B < C)
                {
                    printf("\nA < B < C\n");
                }
                if (A < B && C < B)
                {
                    printf("\nA > C > B\n");
                }
                if (B < A && A < C)
                {
                    printf("\nB < A < C\n");
                }
                if (B < A && C < A)
                {
                    printf("\nB < C < A\n");
                }
                if (C < A && A < B)
                {
                    printf("\nC < A < B\n");
                }
                if (C < A && B < A)
                {
                    printf("\nC < B < A\n");
                }
            break;

        case 3:
                if (A < B && B > C)
                {
                    printf("\nA < B > C\n");
                }
                if (A < C && C > B)
                {
                    printf("\nA < C > B\n");
                }
                if (B < A && A > C)
                {
                    printf("\nB < A > C\n");
                }
            break;

        default:
            printf("\nErro, codigo invalido, digite novamente!\n");
    }

}
