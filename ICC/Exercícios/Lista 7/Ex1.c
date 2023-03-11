#include <stdio.h>

int soma(float n1, float n2);
int subtracao(float n1, float n2);
int multiplicacao(float n1, float n2);
int divisao(float n1, float n2);

int main()
{
    char operacao; 
    float n1, n2;

    printf("Insira os dois nmrs: ");
    scanf("%f%f", &n1, &n2);
    printf("Insira a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    switch (operacao)
    {
    case '+':
        soma(n1, n2);
        break;
    case '-':
        subtracao(n1, n2);
        break;
    case '*': 
        multiplicacao(n1, n2);
        break;
    case '/':
        divisao(n1, n2);
        break;
    default:
        printf("\nOperacao invalida!!!\n");
        break;
    }
}
int soma(float n1, float n2)
{
    float r;
    r =  n1 + n2;

    printf("\nO resultado da operacao: %.2f\n", r);
}
int subtracao(float n1, float n2)
{
    float r;
    r = n1 - n2;

    printf("\nO resultado da operacao: %.2f\n", r);
}
int multiplicacao(float n1, float n2)
{
    float r;
    r = n1 * n2;

    printf("\nO resultado da operacao: %.2f\n", r);
}
int divisao(float n1, float n2)
{
    float r;
    r = n1 / n2;

    printf("\nO resultado da operacao: %.2f\n", r);
}