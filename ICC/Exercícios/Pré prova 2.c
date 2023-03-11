/*
#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Insira os 3 valores: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3)
    {
        if (n2 > n3)
        {
            printf("%d %d %d", n1, n2, n3);
        }else{
            printf("%d %d %d", n1, n3, n2);
        }
    }
    else if (n2 > n1 && n2 > n3)
    {
        if (n1 > n3)
        {
            printf("%d %d %d", n2, n1, n3);
        }else{
            printf("%d %d %d", n2, n3, n1);
        }
    }
    else if (n3 > n1 && n3 > n2)
    {
        if (n2 > n1)
        {
            printf("%d %d %d", n3, n2, n1);
        }else{
            printf("%d %d %d", n3, n1, n2);
        }
    }
}
*/
/*
#include <stdio.h>
float lampada(int tipo, float area)
{
    float qtd_lampadas;
    switch (tipo)
    {
    case 0:
        qtd_lampadas = area/60*12;
        printf("\nPela metragem de seu comodo voce ira precisar de %.0f lampadas", qtd_lampadas);
        break;
    case 1:
        qtd_lampadas = area/60*15;
        printf("\nPela metragem de seu comodo voce ira precisar de %.0f lampadas", qtd_lampadas);
        break;
    case 2:
        qtd_lampadas = area/60*18;
        printf("\nPela metragem de seu comodo voce ira precisar de %.0f lampadas", qtd_lampadas);
        break;
    case 3:
        qtd_lampadas = area/60*20;
        printf("\nPela metragem de seu comodo voce ira precisar de %.0f lampadas", qtd_lampadas);
        break;
    case 4:
        qtd_lampadas = (area/22)*60;
        printf("\nPela metragem de seu comodo voce ira precisar de %.0f lampadas", qtd_lampadas);
        break;
    default:
        break;
    }
}
int main()
{
    int tipo;
    float comp, larg, area;

    printf("Insira o tipo: ");
    scanf("%d", &tipo);
    printf("Insira o comprimento e a largura: ");
    scanf("%f%f", &comp, &larg);

    area = comp*larg;
    lampada(tipo, area);

    return 0;
}
*/
#include <stdio.h>
int main()
{
    /*int x, n1 = 0, n2 = 1, aux = 0;
    
    scanf("%d", &x);
    
    for (int i = 0; i < x; i++)
    {   
        printf("%d ", n2);
        aux = n1 + n2;
        //printf("%d ", aux);
        n1 = aux + n2;
        //printf("%d ", n1);
        n2 = n1 + aux;
    }
    /*
   for (int i = 0; i < x; i++)
    {   
        aux = n2;
        n2 = aux + n2;
        printf("%d ", aux);
    }
    */
}