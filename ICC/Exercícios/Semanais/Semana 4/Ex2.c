#include <stdio.h>
void quadrado(int p)
{
    printf("%d%d%d%d\n", p,p,p,p);
    printf("%d%d%d%d\n", p,p,p,p);
    printf("%d%d%d%d\n", p,p,p,p);
    printf("%d%d%d%d\n", p,p,p,p);
}

int main()
{
    int nmr;

    printf("Digite um nmr: ");
    scanf("%d", &nmr);
    quadrado(nmr);
    return 0;
}
