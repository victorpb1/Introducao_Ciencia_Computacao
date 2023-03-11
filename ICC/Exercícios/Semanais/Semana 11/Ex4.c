//Elabore um algoritmo que imprima todos os numeros pares compreendidos entre 85 e 907.
//O programa deve tambem calcular e mostrar a soma desses valores.
#include <Stdio.h>
int main()
{
    int q = 0;

    for(int i = 85; i <= 907; i++)
    {
        if((i%2)== 0)
        {
            q += i;
            printf("Numero par: %d\n", i);
        }
    }
    printf("\nSoma dos numeros: %d\n", q);
}
