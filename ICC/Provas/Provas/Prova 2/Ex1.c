#include <stdio.h>
float op_1(float n1, float n2, float n3)
{
    printf("\nA media de n1, n2 e n3: %.2f\n", ((n1 + n2 + n3)/3));
}
float op_2(float n1, float n2, float n3)
{
    printf("\nA media ponderada de n1, n2 e n3: %.2f\n", (((n1*2) + (n2*4) + (n3*6))/12));
}
float op_3(float n1, float n2, float n3)
{
    if (n1 > n2 && n1 > n3 && n2 > n3)
    {
    printf("\nA diferença do maior pelo menor(n1 - n2): %.2f\n", n1 - n2);
    }
    if (n1 > n3 && n1 > n2 && n3 > n2)
    {
    printf("\nA diferença do maior pelo menor(n1 - n3): %.2f\n", n1 - n3);
    }
    if (n2 > n1 && n2 > n3 && n1 > n3)
    {
    printf("\nA diferença do maior pelo menor(n2 - n1): %.2f\n", n2 - n1);
    }
    if (n2 > n3 && n2 > n1 && n3 > n1)
    {
    printf("\nA diferença do maior pelo menor(n2 - n3): %.2f\n", n2 - n3);
    }
    if (n3 > n1 && n3 > n2 && n1 > n2)
    {
    printf("\nA diferença do maior pelo menor(n3 - n1): %.2f\n", n3 - n1);
    }
    if (n3 > n2 && n3 > n1 && n2 > n1)
    {
    printf("\nA diferença do maior pelo menor(n3 - n2): %.2f\n", n3 - n2);
    }
}
float op_4(float n1, float n2, float n3)
{
    printf("\nCalculo da expressao: %.2f\n", (((n1*n1)+(n2*n2*n2)+(n3*n3*n3*n3))));
}
float op_5(float n1, float n2, float n3)
{
    if (n1 > n2 && n1 > n3 && n2 > n3)
    {
        printf("\nA ordem crescente, %.2f<%.2f<%.2f",n3, n2, n1);
    }
    if (n1 > n2 && n1 > n3 && n3 > n2)
    {
        printf("\nA ordem crescente, %.2f<%.2f<%.2f",n2, n3, n1);
    }
    if (n2 > n1 && n2 > n3 && n3 > n1)
    {
        printf("\nA ordem crescente, %.2f<%.2f<%.2f",n1, n3, n2);
    }
    if (n2 > n1 && n2 > n3 && n1 > n3)
    {
        printf("\nA ordem crescente, %.2f<%.2f<%.2f",n3, n1, n2);
    }
    if (n3 > n1 && n3 > n2 && n2 > n1)
    {
        printf("\nA ordem crescente, %.2f<%.2f<%.2f",n1, n2, n3);
    }
    if (n3 > n1 && n3 > n2 && n1 > n2)
    {
        printf("\nA ordem crescente, %.2f<%.2f<%.2f",n2, n1, n3);
    }
}
int main()
{
    float n1, n2, n3;
    int op;

    printf("Insira tres numeros: ");
    scanf("\n%f\n%f\n%f", &n1, &n2, &n3);
    printf("\n1 - Media aritmetica\n2 - Media ponderada\n3 - Diferenca do maior pelo menor\n4 - Calculo da expressao\n5 - Ordem crescente dos numeros\n \nInsira a operacao: ");
    scanf("\n%d", &op);

    switch(op)
    {
    case 1:
        op_1(n1, n2, n3);
        break;
    case 2:
        op_2(n1, n2, n3);
        break;
    case 3:
        op_3(n1, n2, n3);
        break;
    case 4:
        op_4(n1, n2, n3);
        break;
    case 5:
        op_5(n1, n2, n3);
        break;
    default:
        printf("\nErro. Codigo invalido!\n");
    }
}
