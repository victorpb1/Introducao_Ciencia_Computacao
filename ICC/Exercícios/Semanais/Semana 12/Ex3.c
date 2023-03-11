/*3. Construa um algoritmo que leia um vetor D[60]. A seguir, troque o 1� elemento com o 31� ,
o 2� com o 32� , etc. Mostre no final o vetor modificado.*/
#include <stdio.h>
#define N 10
int main()
{
    int D[N], D1[N];

    for(int i = 0; i < N; i++)
    {
        printf("Insira os valores: ");
        scanf("%d", &D[i]);
    }
    for(int i = 0; i < N/2; i++)
    {
       D1[i] = D[i];
       D[i] = D[i+N/2];
       D[i+N/2] = D1[i];
    }
    for(int i = 0; i < N; i++)
    {
        printf("\nTrocando os valores: %d", D[i]);
    }
    return 0;
}
