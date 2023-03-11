#include <stdio.h>

int main()
{
    float n1, n2, m;

    printf("Digite um valor: ");
    scanf("%f", &n1);
    printf("Digite outro valor: ");
    scanf("%f", &n2);

    m = (n1 + n2)/2;
    printf("Media dos valores: %f\n", m);

    return 0;
}
