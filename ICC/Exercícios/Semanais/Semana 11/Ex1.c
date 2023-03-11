//Faça um algoritmo que leia 10 numeros inteiros 
//e imprima a quantidade de nmeros positivos.
#include <stdio.h>
int main()
{
int i, n, qnt;

    qnt = 0;

for(i = 1; i <= 10; i++)
{
    printf("Insira 10 numeros: ");
    scanf("%d", &n);

    if(n > 0)
    {
      qnt = qnt + 1;
    }

}
    printf("\nA qntt de nmrs positivos: %.2d\n", qnt);
return 0;
}
