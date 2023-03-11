#include <stdio.h>

int main()
{
    float v1, v2;
    printf("Insira um valor: ");
    scanf("%f", &v1);
    printf("Insira um valor: ");
    scanf("%f", &v2);

    if (v1 > v2)
    {
        printf("O primeiro valor e maior que o segundo");
    }
    else
    {
        if(v1 < v2)
        printf("\nO segungo valor e maior que o primeiro\n");
    }

    return 0;
}
