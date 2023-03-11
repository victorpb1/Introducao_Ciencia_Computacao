#include <stdio.h>
void piramide(char p)
{
    printf("   %c\n", p);
    printf("  %c%c%c\n", p,p,p);
    printf(" %c%c%c%c%c\n", p,p,p,p,p);
    printf("%c%c%c%c%c%c%c\n", p,p,p,p,p,p,p);
}

int main()
{
    char carac;

    printf("Digite um caracter: ");
    scanf("%c", &carac);
    piramide(carac);
    return 0;
}
