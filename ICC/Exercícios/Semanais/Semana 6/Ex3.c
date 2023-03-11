#include <stdio.h>
int main()
{
    int v1, v2;

    printf("Insira o valor: ");
    scanf("%d", &v1);

    v2 = v1 % 2;

    if (v2 == 0)
        printf("\nPar\n");
    else
        printf("\nImpar\n");

    return 0;
}


