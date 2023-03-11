#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nome[100], maiuscula;
    scanf("%[^\n]s", nome);

    int tamanho;

    tamanho = strlen(nome);
    maiuscula = toupper(nome[tamanho-1]);

    printf("Primeira letra: %c\n", nome[0]);
    printf("Ultima letra: %c\n", maiuscula);
    printf("Quantidade de caracteres: %d\n", tamanho);
}
