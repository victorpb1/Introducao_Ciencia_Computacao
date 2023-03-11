/*
1 - Faça uma função que receba um dado inteiro positivo N, que imprima todos os valores 
menores que N da seguinte sequência:• 8, 10, 16, 18, 32, 34,...
*/
#include <stdio.h>
int funcao(int N)
{
    int seq_vezes = 8, seq_soma = 0;

    for ( int i = 0; i < N; i++)
    {
        if (N <= seq_soma && N <= seq_vezes)
        {
            return 0;

        }else{

            if (N > seq_soma && seq_soma != 0)
            {
                printf("%d ", seq_soma);
            }
            if (N > seq_vezes)
            {
                printf("%d ", seq_vezes);
            }
        }
        
        seq_soma = seq_vezes + 2;
        seq_vezes = seq_vezes * 2;
    }
}
int main()
{
    int N;

    printf("Insira o valor de N: ");
    scanf("%d", &N);
    
    printf("\n");
    funcao(N);
}