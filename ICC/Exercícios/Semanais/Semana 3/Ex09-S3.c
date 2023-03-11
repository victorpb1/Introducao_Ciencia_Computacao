#include <stdio.h>

int main()
{
    float qntP, pP, vP, tp, s;

    printf("Insira o valor das prestacoes: ");
    scanf("%f", &vP);
    printf("Insira a quantidade de prestacoes: ");
    scanf("%f", &qntP);
    printf("Insira a quantidade de prestacoes pagas: ");
    scanf("%f", &pP);

    tp = pP * vP;
    s = (qntP * vP) - tp;

    printf("O total pago e igual a %.2f, e o restante a %.2f\n", tp, s);

    return 0;
}
