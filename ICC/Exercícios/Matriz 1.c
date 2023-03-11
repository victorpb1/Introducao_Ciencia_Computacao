#include <stdio.h>
int main()
{
    int x, A[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            //printf("Insira o valor de A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
        
    }

    //printf("Insira o valor de X: ");
    scanf("%d", &x);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            A[i][j] = A[i][j] * x;
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", A[i][j]);
        }
        
        printf("\n");
    }
    
}