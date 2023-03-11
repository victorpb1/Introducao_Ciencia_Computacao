#include <stdio.h>
float tab2(float preco)
{
        float desc;

        if (preco < 250.00)
        {
            desc = 0.05 * preco + preco;
            printf("Desconto de 5 porcento, o valor total: R$%.2f\n", desc);
        }
        if (preco >= 250.00 && preco <= 500)
        {
            desc = 0.10 * preco + preco;

            printf("Desconto de 10 porcento, o valor total: R$%.2f\n", desc);
        }
        if (preco > 500.00)
        {
            desc = 0.15 * preco + preco;
            printf("Desconto de 15 porcento, o valor total: R$%.2f\n", desc);
        }
}
int main()
{

    int prod, qnt;
    float preco;


    printf("Insira o codigo do produto(1 a 40): ");
    scanf("\n%d", &prod);

    printf("Insira a quantidade do produto: ");
    scanf("\n%d", &qnt);


    if (prod >= 1 && prod <= 10)
        {
            preco = ((float) 10.0 *  qnt);
            printf("O preco unitario do produto escolhido: R$10.00, e o preco por quantidade e R$%.2f\n",preco);
            tab2(preco);
        }
    if (prod >= 11 && prod <= 20)
        {
            preco = ((float) 15.0 *  qnt);
            printf("O preco unitario do produto escolhido: R$15.00, e o preco por quantidade e R$%.2f\n",preco);
            tab2(preco);
        }
    if (prod >= 21 && prod <= 30)
        {
            preco = ((float) 20.0 *  qnt);
            printf("O preco unitario do produto escolhido: R$20.00, e o preco por quantidade e R$%.2f\n",preco);
            tab2(preco);
        }

    if (prod >= 31 && prod <= 40)
        {
            preco = ((float) 30.0 *  qnt);
            printf("O preco unitario do produto escolhido: R$30.00, e o preco por quantidade e R$%.2f\n",preco);
            tab2(preco);
        }
    return 0;
}
