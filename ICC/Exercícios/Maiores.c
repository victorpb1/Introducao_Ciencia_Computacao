#include <stdio.h>
void funcao(int n1, int n2)
{
    int maior;

    maior = n1;

    if (n2 > n1)
    {
        maior = n2;
        printf("Maior entre %d e %d : %d\n", n1, n2, maior);
    }else if(n1 == n2)
    {
        printf("Iguais\n");
    }else{
        printf("Maior entre %d e %d : %d\n", n1, n2, maior);
    }
    
}
int main()
{

    int  x, n1, n2;

    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        scanf("%d%d", &n1, &n2);
        funcao(n1, n2);
    }
    
}