#include <stdio.h>
int main()
{
    int ap;
    float d, d25, t100, t70, caso100;

    printf("Digite o numero de aps do hotel: ");
    scanf("%d", &ap);
    printf("Digite o valor da diaria: R$");
    scanf("%f", &d);

    d25 = d - (d/4);
    t100 = (float) ap * d25;
    t70 = (float) (((ap * 70)/100)) * d25;
    caso100 = (float) ((d * ap)- t100);

    printf("A diaria com o desconto esta saindo por: R$%.2f\n", d25);
    printf("A arrecadacao com toda a ocupacao: R$%.2f\n", t100);
    printf("A arrecadacao com 70 porcento da ocupacao: R$%.2f\n", t70);
    printf("A arrecadacao perdida com o desconto: R$%.2f\n", caso100);

    return 0;
}
