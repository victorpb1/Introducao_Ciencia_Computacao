#include <stdio.h>
#include <math.h>
float op_1(float n1, float n2)
{
    printf("\nA media de n1 e n2: %.2f\n", n1 + n2/2);
}
float op_2(float n1, float n2)
{
    if (n1 > n2)
    {
    printf("\nA diferença do maior pelo menor(n1 - n2): %.2f\n", n1 - n2);
    }
    if (n1 < n2)
    {
    printf("\nA diferença do maior pelo menor(n2 - n1): %.2f\n", n2 - n1);
    }
}
float op_3(float n1, float n2)
{
    printf("\nProduto dos dois nmrs: %.2f\n", n1 * n2);
}
float op_4(float n1, float n2)
{
    printf("\nDivisao do primeiro pelo segundo: %.2f\n", n1 / n2);
}
float op_5(float n1, float n2)
{
    printf("\nPotenciacao, o primeiro eh a base e o segundo expoente: %.2f\n", pow(n1, n2));
}
int main()
{
    float n1, n2;
    int op;

    printf("Insira dois numeros: ");
    scanf("\n%f\n%f", &n1, &n2);
    printf("\n1 - Media\n2 - Subtracao do Maior pelo menor\n3 - Produto\n4 - Divisao do primeiro pelo segundo\n5 - Potenciacao,k o primeiro eh a base e o segundo expoente\n\nInsira a operacao: ");
    scanf("\n%d", &op);

    switch(op)
    {
    case 1:
        op_1(n1, n2);
        break;
    case 2:
        op_2(n1, n2);
        break;
    case 3:
        op_3(n1, n2);
        break;
    case 4:
        op_4(n1, n2);
        break;
    case 5:
        op_5(n1, n2);
        break;
    }
}
