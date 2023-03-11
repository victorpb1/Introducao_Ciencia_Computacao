#include <stdio.h>
    float media(int n1, int n2, int n3, int n4)
{
    float m, resp;

    m = (float)(n1 + n2 + n3 + n4)/4;

    resp = printf("\nA media dos 4 numeros: %.2f\n", m);

    return resp;
}
    int main()
{
    float v1, v2, v3, v4;

    printf("\nInsira o 1o valor: ");
    scanf("%f", &v1);
    printf("\nInsira o 2o valor: ");
    scanf("%f", &v2);
    printf("\nInsira o 3o valor: ");
    scanf("%f", &v3);
    printf("\nInsira o 4o valor: ");
    scanf("%f", &v4);

    media(v1, v2, v3, v4);

    return 0;
}

