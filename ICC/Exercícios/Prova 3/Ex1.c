/*
1 - Na teoria dos sistemas define-se o elemento MINMAX de uma matriz como 
sendo o maior elemento da linha onde se encontra o menor elemento da matriz. 
Faça um algoritmo que leia uma matriz 4x7 com números reais, calcule e mostre 
seu MIXMAX e sua posição (linha e coluna).
*/
#include <stdio.h>
#define L 3
#define C 3
int main()
{
    int i, j, Linha, Coluna, Coluna_maior;
    float maior_linha, menor_matriz, matriz[L][C];

    //pegar valores da matriz
    for(i = 0; i < L; i++)
    {
        for(j = 0; j < C; j++)
        {
            printf("Insira o valor para a matriz[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    menor_matriz = matriz[0][0];
    Linha = 0;
    Coluna = 0;
    
    maior_linha = matriz[0][0];
    Coluna_maior = 0;

    //achar o menor elemento da matriz
    for(i = 0; i < L; i++)
    {
        for(j = 0; j < C; j++)
        {
            if(matriz[i][j] < menor_matriz)
            {
                Linha = i;
                Coluna = j;
                
                menor_matriz = matriz[i][j];
            }
        }
    }

    //achar o maior da linha
    for (i = 0; i < L; i++)
    {
        if (matriz[Linha][i] > maior_linha)
        {
            maior_linha = matriz[Linha][i];
            Coluna_maior = i;
        }
    }
    
    printf("\nO MIN[%d][%d]: %.2f", Linha, Coluna, menor_matriz);
    printf("\nO MAX[%d][%d]: %.2f\n", Linha, Coluna_maior, maior_linha);
}