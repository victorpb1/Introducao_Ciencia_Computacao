/*
2 - Escreva um algoritmo que solicite ao usuário dois números inteiros a e b. 
Seu programa deve calcular o resto da divisão de a por b e exibir o resultado.
*/
#include <stdio.h>

int main()
{
    int a, b;

    printf("Insira 2 numeros: ");
    scanf("%d%d", &a, &b);

    printf("\nO resto da divisao de a por b: %d\n", a % b);
}