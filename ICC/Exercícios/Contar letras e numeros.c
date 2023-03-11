#include <stdio.h>
#include <string.h>
int main()
{
    int tamanho, contador = 0, contador_numeros = 0;
    char caractere[100];
    scanf("%s", caractere);

    tamanho = strlen(caractere);

    for(int i = 0; i < tamanho; i++)
    {
        if((caractere[i] >= 'A' && caractere[i] <= 'Z') || (caractere[i] >= 'a' && caractere[i] <= 'z'))
        {
            contador++;
        }else if(caractere[i] >= '0' && caractere[i] <= '9'){
            contador_numeros++;
        }
    }

    printf("Letras: %d\n", contador);
    printf("Numeros: %d", contador_numeros);
}
