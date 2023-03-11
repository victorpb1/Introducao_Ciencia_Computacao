/*
4. Faça um algoritmo que peça para o usuário digitar um valor inteiro entre1 e 5. Imprima o número digitado 
por extenso (use a estrutura if-else-if). Por exemplo: usuário digitou o número 3, imprima a palavra “tres”. 
O usuário digitou o número 5, imprima a palavra “cinco”.
*/
#include <stdio.h>

int um()
{
    printf("um\n");
}
int dois()
{
    printf("dois\n");
}
int tres()
{
    printf("tres\n");
}
int quatro()
{
    printf("quatro\n");
}
int cinco()
{
    printf("cinco\n");
}
int main()
{
    int n;
    
    printf("Insira um nmr: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        um(n);
        break;
    case 2:
        dois(n);
        break;
    case 3:
        tres(n);
        break;
    case 4:
        quatro(n);
        break;
    case 5:
        cinco(n);
        break;
    default:
        printf("Nmr invalido!\n");
        break;
    }
}