/*
3. Faça um algoritmo que leia um número inteiro N, determine se esse número é par ou ímpar (Um número inteiro 
é par se o mesmo for divisível exatamente por 2). Dica: O problema pode ser resolvido tomando-se o resto da 
divisão inteiro do número N por 2.
*/
#include <stdio.h>

int funcao(int n)
{
    int div;

    div = n % 2;
    if (div == 0)
    {
        printf("N eh par\n");
    }else{

        printf("N eh impar\n");
    }
    
}
int main()
{
    int n;

    printf("Insira um nmr: ");
    scanf("%d", &n);

    funcao(n);
}