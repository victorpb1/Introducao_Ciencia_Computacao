#include <stdio.h>

int main()
{
    float m, n1, n2, n3, p1, p2, p3;
    p1 = 2;
    p2 = 3;
    p3 = 5;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    m = ((n1*p1) + (n2*p2) + (n3*p3))/p1 + p2 + p3;

    printf("Resultado da  media ponderada: %.2f\n", m);

    return 0;
}
