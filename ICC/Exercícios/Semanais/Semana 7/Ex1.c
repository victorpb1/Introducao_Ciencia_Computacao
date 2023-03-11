#include <stdio.h>
int main()
{
    float n1, n2;
    char op;

    printf("Digite 2 nmrs: ");
    scanf("\n%f\n%f", &n1, &n2);
    printf("\nInsira a operacao desejada (+, -, *, /): ");
    scanf("\n%c", &op);

    switch(op)
    {

        case '+':
            printf("\nA soma do 1ro pelo 2do, %.2f\n", n1 + n2);
            break;

        case '-':
            printf("\nA subtracao do 1ro pelo 2do, %.2f\n", n1 - n2);
            break;

        case '*':
            printf("\nA multiplicacao do 1ro pelo 2do, %.2f\n", n1 * n2);
            break;

        case '/':
            printf("\nA divisao do 1ro pelo 2do, %.2f\n", n1 / n2);
            break;

        default:
            printf("\nOperacao invalida, digite novamente\n");
    }

}
