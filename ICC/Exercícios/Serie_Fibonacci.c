/*
#include <stdio.h>
int main()
{
    int x, n1 = 0, n2 = 1, aux = 0;
    
    scanf("%d", &x);
    
    for (int i = 0; i < x; i++)
    {   
        printf("%d ", n2);
        aux = n1 + n2;
        n1 = n2;
        n2 = aux;
    }
}
*/
#include <stdio.h>
int main()
{
	int x, n1 = 0, n2 = 1, aux = 0;

    printf("Insira a qntd de termos: ");
	scanf("%d", &x);

	for (int i = 0; i < x; i++)
	{
		printf("%d ", n2);
		aux = n1 + n2;
		printf("%d ", aux);
		n1 = aux + n2;
		printf("%d ", n1);
		n2 = n1 + aux;
	}
}