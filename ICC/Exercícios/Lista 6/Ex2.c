/*
2. Faça um algoritmo que leia dois caracteres. Imprima a expressão “Igual” quando os mesmos forem iguais
ou imprima “Diferente” se os valores são diferentes.
*/
#include <stdio.h>
int funcao(float n1, float n2)
{
    if(n1 == n2)
    {
        printf("N1 eh igual a N2\n");
    } 
    else
    {
        printf("N1 eh diferente de N2\n");
    }
    
}
int main()
{
    int n1, n2;

    printf("Insira 2 nmrs: ");
    scanf("%f%f", &n1, &n2);

    funcao(n1, n2);

}