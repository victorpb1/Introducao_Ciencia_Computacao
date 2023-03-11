#include <stdio.h>

int main()
{
    int a, b, r;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    r = a % b;

    printf("Resposta: %d\n", r);

    return 0;
}
