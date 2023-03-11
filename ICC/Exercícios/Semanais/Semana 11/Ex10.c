/*10. Construa um algoritmo que solicite a quantidade (N) de números que serão lidos, 
para este grupo de N valores reais, determine o valor máximo e o valor mínimo.*/
#include <stdio.h>
int main()
{
    int N, i;
    float n, max, min;

    printf("Insira qnts vezes 'n' sera lido: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        printf("Insira o(s) numero(s): ");
        scanf("%f", &n);
        {
            if (i == 1)
            {
                max = n;
                min = n;
            }
            if (n > max)
            {
                max = n;
            }   
            else     
            if (n < min)    
            {
                min = n;
            }
        }  
     } 
     printf("\nO max, %.2f, e o min, %.2f\n", max, min);

    return 0;
}
