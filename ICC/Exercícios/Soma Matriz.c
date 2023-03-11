#include <stdio.h>
int main()
{
    int i, j, matriz[3][3], soma_l1, soma_l2, soma_l3;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    soma_l1 = matriz[0][0] + matriz[0][1] + matriz[0][2];
    soma_l2 = matriz[1][0] + matriz[1][1] + matriz[1][2];
    soma_l3 = matriz[2][0] + matriz[2][1] + matriz[2][2];

    printf("%d %d %d Soma da linha 1: %d\n", matriz[0][0], matriz[0][1], matriz[0][2], soma_l1);
    printf("%d %d %d Soma da linha 2: %d\n", matriz[1][0], matriz[1][1], matriz[1][2], soma_l2);
    printf("%d %d %d Soma da linha 3: %d", matriz[2][0], matriz[2][1], matriz[2][2], soma_l3);
}