#include <stdio.h>
void qual_idade(int print_idade)
{
    printf("Digite a sua idade: ");
}
int main()
{
    int idade;
    qual_idade(idade);
    scanf("%d", &idade);
    printf("Sua idade: %d anos", idade);

    return 0;
}

