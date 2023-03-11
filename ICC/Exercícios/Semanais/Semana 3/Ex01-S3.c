#include <stdio.h>

int main()
{
    int a, b, s;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    s = a - b;

    printf("Resposta: %d\n", s);

    return 0;
}
