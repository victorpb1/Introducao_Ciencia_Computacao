#include <stdio.h>

int main()
{
    float v1, v2, r;
    char op;

    printf("Insira o numero: ");
    scanf("%f", &v1);
    printf("Insira o outro numero: ");
    scanf("\n%f", &v2);

    printf("\nDigite o a operacao desejada (+, -, /, *): ");
    scanf("\n%c", &op);


    if (op == '+')
    {
        r = v1 + v2;
        printf("%.2f", r);
    }
    if (op == '*')
    {
        r = v1 * v2;
        printf("%.2f", r);
    }
    if (op == '/')
    {
        r = v1 / v2;
        printf("%.2f", r);
    }
    if (op == '-')
    {
        r = v1 - v2;
        printf("%.2f", r);
    }
    return 0;
}
