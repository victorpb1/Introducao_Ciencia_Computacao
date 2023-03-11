#include <stdio.h>
    void soma(int n1, int n2, int n3)
{
    float s, resp;

    s = (float)n1 + n2 + n3;

    resp = printf("A soma dos 3 numeros: %.2f\n", s);

    return resp;
}
    int main()
{
    float v1, v2, v3;

    printf("Insira o 1o valor ");
    scanf("%f", &v1);
    printf("Insira o 2o valor ");
    scanf("%f", &v2);
    printf("Insira o 3o valor ");
    scanf("%f", &v3);

    soma(v1, v2, v3);

    return 0;
}
