#include <stdio.h>
void qual_preco(float p)
{
    printf("Digite o preco: ");
}
int main()
{
    float preco;
    qual_preco(preco);
    scanf("%f", &preco);
    printf("O valor: R$%.2f\n", preco);

    return 0;
}
