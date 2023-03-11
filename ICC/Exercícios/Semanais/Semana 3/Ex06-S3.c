#include <stdio.h>

int main()
{
    int e, b, n, v;
    float pb, pn, pv;

    printf("Digite a qntdd de eleitores: ");
    scanf("%d", &e);
    printf("Digite a qntdd de votos brancos: ");
    scanf("%d", &b);
    printf("Digite a qntdd de votos nulos: ");
    scanf("%d", &n);
    printf("Digite a qntdd de votos validos: ");
    scanf("%d", &v);

    pb = ((e * b)/100);
    pn = ((e * n)/100);
    pv = ((e * v)/100);

    printf("Percentual de votos brancos: %.2f\n", pb);
    printf("Percentual de votos nulos: %.2f\n", pn);
    printf("Percentual de votos validos: %.2f\n", pv);

    return 0;
}
