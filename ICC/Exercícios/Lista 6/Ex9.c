/*
9. Construa um algoritmo que leia dois números reais e a operação aritmética desejada (use um char para 
armazenar a operação). Calcule então a resposta adequada. Sendo a operação ‘+’ uma soma, ‘*’ multiplicar os 
dois números, ‘/’ dividir o primeiro pelo segundo, ‘-‘ subtração do primeiro pelo segundo (utilize o comando 
switch).
*/
#include <stdio.h>
float soma(float n1, float n2)
{
    float resultado;
    resultado = n1 + n2;

    printf("O resultado da soma: %.2f\n", resultado);
}
float subtracao(float n1, float n2)
{
    float resultado;
    resultado = n1 - n2;

    printf("O resultado da subtracao: %.2f\n", resultado);
}
float multiplicacao(float n1, float n2)
{
    float resultado;
    resultado = n1 * n2;

    printf("O resultado da multiplicacao: %.2f\n", resultado);
}
float divisao(float n1, float n2)
{
    float resultado;
    resultado = n1 / n2;

    printf("O resultado da divisao: %.2f\n", resultado);
}
int main()
{
    float n1, n2;
    char operacao;

    
    printf("Insira 2 nmrs reais: ");
    scanf("%f%f", &n1 ,&n2);
    printf("Insira a operacao: (+, -, *, /): ");
    scanf("\n%c", &operacao);
    

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
        printf("\n\nOperacao errada!!!\n\n");
        break;
    }
}