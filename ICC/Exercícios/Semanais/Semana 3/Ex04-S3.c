#include <stdio.h>

int main()
{
    float dt, v, des;
    printf("Insira os dias trabalhados: ");
    scanf("%f", &dt);

    v = 80.00 * dt;
    des = (v - ((v * 8 ) /100));

    printf("O valor total deu R$ %.2f, mas com o desconto do imposto de renda foi R$ %.2f\n", v, des);

    return 0;
}
