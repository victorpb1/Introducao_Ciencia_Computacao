/*12. Faça uma função que receba como parâmetro um valor N inteiro e positivo, calcule e
mostre o valor de E, conforme a fórmula a seguir: E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!*/
#include <stdio.h>
int fatorial(int N)
{
    int fat = 1;

    while(N >= 1)
    {
    fat *= N;
    N--;
    }
    return fat;

}
int valor(int N)
{
    int i;
    float E = 1;

    for (int i = 1; i <= N; i++)
    {
        E = E + 1/(float)fatorial(i);
    }
    printf("Fatorial de %d, eh %d\n", N, fatorial(i));
    printf("A resolucao da formula, E = E + 1/N!, %.2f\n", E);

    return E;
}
int main()
{
    int N;

    printf("Insira o valor de N: ");
    scanf("%d", &N);

    valor(N);

    return 0;
}
