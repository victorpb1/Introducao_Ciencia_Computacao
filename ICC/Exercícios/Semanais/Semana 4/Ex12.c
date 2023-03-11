#include <stdio.h>
int percentual (int e, int b, int n, int v)
{
    float pb, pn, pv;

    pb = ((e * b)/100);
    pn = ((e * n)/100);
    pv = ((e * v)/100);

    printf("Percentual de votos brancos: %.2f\nPercentual de votos nulos: %.2f\nPercentual de votos validos: %.2f\n", pb, pn, pv);

    return 0;
}
int main()
{
    int e, b, n, v;

    printf("Digite a qntdd de eleitores: ");
    scanf("%d", &e);
    printf("Digite a qntdd de votos brancos: ");
    scanf("%d", &b);
    printf("Digite a qntdd de votos nulos: ");
    scanf("%d", &n);
    printf("Digite a qntdd de votos validos: ");
    scanf("%d", &v);

    percentual(e,b,n,v);

    return 0;
}
