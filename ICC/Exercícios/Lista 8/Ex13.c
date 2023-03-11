/*
13. Construa um programa que, para a progressão geométrica 3, 9, 27,81, ..., 6561, determine a 
soma de seus termos. Construa um programa de forma a não utilizar a fórmula de soma dos termos. 
Faça com que o computador gere cada termo a ser somando.
*/
#include <stdio.h>
int main()
{
    int termo = 0, progressao = 1;

    while (termo <= 6561)
    {
        progressao = progressao * 3;

        termo = termo + progressao;
    }
    printf("Valor da soma dos termos: %d\n", termo);

    return 0;
}