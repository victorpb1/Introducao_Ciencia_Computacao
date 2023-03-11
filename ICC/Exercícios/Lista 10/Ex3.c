/*
3. Construa um algoritmo que leia um vetor D[60]. A seguir, troque o 1º elemento com o 31º,
o 2º com o 32º , etc. Mostre no final o vetor modificado.

#define N 10
#include <stdio.h>

int main()
{
    int A[N], B[N];

    for(int i = 0; i < N; i++)
    {
        printf("Insira os numeros para A: ");
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N/2; i++)
    {
        B[i] = A[i];
        A[i] = A[i+N/2]; 
        A[i+N/2] = B[i];
    }   

    printf("\nTrocando: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
}*/
//o jeito q caribe fez aí em cima comentado(o jeito dele + o meu na vdd)
//(corrigir/terminar)
#define N 10
#include <stdio.h>

int main()
{
    int A[N], B[N], C[N], j = (N/2);

    for(int i = 0; i < N; i++)
    {
        printf("Insira os numeros para A: ");
        scanf("%d", &A[i]);

        if (i < N/2) {
            B[i] = A[i];
        }
        if (i >= N/2) {
            C[i-5] = A[i];
        }
        
    }

    /*for (int i = 0; i < N/2; i++)
    {
        B[i] = A[i]; //B tá recebendo nº 1 a 5
    }
    for (int i = 0; i >= N/2; i++)
    {
        C[i] = A[i]; //C tá rebendo de 6 a 10
    }*/

    
    for (int i = 0; i < N/2; i++)
    {
        A[i] = C[i]; //A tá rebendo de 6 a 10 no inicio
    }
    for (int i = j; i <= N; i++, j++)
    {
        A[j] = B[i]; //A tá recebendo nº 1 a 5 no final
    }
    
    printf("\nTrocando: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
}