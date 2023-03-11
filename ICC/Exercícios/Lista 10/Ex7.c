/*
7. Para uma matriz de ordem NxM, encontrar todos os seus "pontos cela". Denomina-se ponto cela todo
elemento da matriz que seja o maior elemento de sua linha e, também, o maior elemento de sua coluna.
*/
#define L 3
#define C 3
#include <stdio.h>
int main()
{
    int matriz[L][C], num, i, j, Linha, Coluna, contador = 0, ponto_cela = 0;

    //pegar valores da matriz
    for(i = 0; i < L; i++)
    {
        for(j = 0; j < C; j++)
        {
            printf("Insira o valor para a matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //pegar valor para analisar se é ponto cela
    printf("\nInsira o valor para analise: ");
    scanf("%d", &num);

    //achar linha e coluna de num
    for(i = 0; i < L; i++)
    {
        for(j = 0; j < C; j++)
        {
            if(num == matriz[i][j])
            {
                Linha = i;
                Coluna = j;
            }
        }
    }

    printf("\nLinha[%d] Coluna[%d]\n", Linha, Coluna);

    //verificar se o numero é o maior da linha
    for(i = 0; i < L; i++)
    {
        if(num >= matriz[Linha][i])
        {
            contador++;

            if(contador == L)
            {
                printf("\nO maior da linha");
                ponto_cela++;
            }
        }
    }

    contador = 0;

    //verificar se o numero é o maior da coluna
    for(j = 0; j < C; j++)
    {
        if(num >= matriz[j][Coluna])
        {
            contador++;

            if(contador == C)
            {
                printf("\nO maior da coluna\n");
                ponto_cela++;
            }
        }
    }

    //print de ponto cela
    if(ponto_cela == 2)
    {
        printf("\nEh ponto cela!\n");
    }else{
        printf("\nNao eh ponto cela\n");
    }
}