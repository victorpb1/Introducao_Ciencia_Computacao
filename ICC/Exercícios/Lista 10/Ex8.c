/*
8. Uma matriz quadrada inteira é chamada de "quadrado mágico" se a soma dos elementos de cada 
linha, a soma dos elementos de cada coluna e a soma dos elementos das diagonais principal e 
secundária são todos iguais.
*/
#include <stdio.h>
int main()
{
    int i, j, L, C;

    //pegar o valor das linha e coluna
    printf("Insira o valor para as Linhas: ");
    scanf("%d", &L);
    printf("Insira o valor para as Colunas: ");
    scanf("%d", &C);

    printf("\n");

    int matriz[L][C], soma_linha[L], soma_coluna[C], soma_diagonal_principal = 0, soma_diagonal_secundaria = 0, soma = 0;

    //pegar valores da matriz
    for(i = 0; i < L; i++)
    {
        for(j = 0; j < C; j++)
        {
            printf("Insira o valor para a matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //soma das linhas
    for(i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            soma = soma + matriz[i][j];
        }

        soma_linha[i] = soma;
        soma = 0;
        printf("\nA soma da linha [%d]: %d", i, soma_linha[i]);
    }

    printf("\n");

    //a soma das colunas
    for(i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            soma = soma + matriz[j][i];
        }

        soma_coluna[i] = soma;
        soma = 0;
        printf("\nA soma da coluna [%d]: %d", i, soma_coluna[i]);
    }

    printf("\n");

    //soma da diagonal principal
    for(i = 0; i < L; i++) 
    {
        soma_diagonal_principal += matriz[i][i];
    }
    printf("\nA soma da diagonal principal: %d", soma_diagonal_principal);

    //soma diagonal secundária
    for(int i = 0, j = L - 1; i < L; i++, j--) 
    {
        soma_diagonal_secundaria += matriz[i][j];
    }
    printf("\nA soma da diagonal secundaria: %d", soma_diagonal_secundaria);
    
    for (i = 0; i < L; i++)
    {
        if (soma_linha[i] != soma_coluna[i])
        {
            printf("\n\nNao eh quadrado magico!!!\n");
            return 0;
        }    
    }
    if (soma_diagonal_principal == soma_diagonal_secundaria && soma_diagonal_principal == soma_coluna[0])
    {
        printf("\n\nEh quadrado magico!!!\n");
    }   
}