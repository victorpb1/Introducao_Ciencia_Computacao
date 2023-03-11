#include <stdio.h>
    float mediap(int n1, int n2, int n3, int p1, int p2, int p3)
{
    float m, resp;

    m = (float)((n1*p1) + (n2*p2) + (n3*p3))/p1+p2+p3;
    resp = printf("A media ponderada dos 3 numeros: %.2f\n", m);

    return resp;
}
    int main()
{
    float v1, v2, v3, pe1, pe2, pe3;

    printf("Insira o valor 1: ");
    scanf("%f", &v1);
    printf("Insira o peso do valor: ");
    scanf("%f", &pe1);

    printf("Insira o valor 2: ");
    scanf("%f", &v2);
    printf("Insira o peso do valor: ");
    scanf("%f", &pe2);

    printf("Insira o valor 3: ");
    scanf("%f", &v3);
    printf("Insira o peso do valor: ");
    scanf("%f", &pe3);

    mediap(v1, v2, v3, pe1, pe2, pe3);

    return 0;
}
