#include <stdio.h>

int main()
{
    float s, r, f;

    printf("Insira o salario: R$ ");
    scanf("%f", &s);
    printf("Insira o valor do reajuste: %");
    scanf("%f", &r);

    f = (s +((s * r) /100));

    printf("O novo salario: R$ %.2f\n", f);

    return 0;
}
