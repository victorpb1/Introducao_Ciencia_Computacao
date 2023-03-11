#include <stdio.h>

int main()
{
    float v1, v2;
    printf("Insira o valor 1: ");
    scanf("%f", &v1);
    printf("Insira o valor 2: ");
    scanf("%f", &v2);

    if (v1 == v2)
    {
        printf("Igual");
    }
    else
    {
        if(v1 != v2)
        printf("\nDiferente\n");
    }

    return 0;
}

