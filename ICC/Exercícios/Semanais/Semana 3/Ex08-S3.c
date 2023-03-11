#include <stdio.h>

int main()
{
    float h, sm, hx, sb, ht, vx, sr, x;

    printf("Digite o nmr de horas trabalhadas: ");
    scanf("%f", &h);
    printf("Insira o salario minimo: ");
    scanf("%f", &sm);

    ht = (sm / 8);
    hx = (sm / 4);

    printf("Digite as horas extras: ");
    scanf("%f", &x);

    sb = ht * h;
    vx = x * hx;
    sr = sb + vx;

    printf("O salario a receber e R$ %.2lf\n", sr);

    return 0;
}
