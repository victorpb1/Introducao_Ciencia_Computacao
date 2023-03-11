#include <stdio.h>

int main()
{
    int qntD, qntA;
    float p, ppordia, pporano, total;

    printf("Quantos cigarros por dia? ");
    scanf("%d", &qntD);
    printf("Fuma a quantos anos? ");
    scanf("%d", &qntA);
    printf("Qual o preco da carteira? ");
    scanf("%f", &p);

    ppordia = (float)qntD / 20 * p;
    pporano = (float)ppordia * 365;
    total = (float)pporano * qntA;

    printf("Ao longo dos anos voce gastou R$%.2f\n", total);

    return 0;
}
