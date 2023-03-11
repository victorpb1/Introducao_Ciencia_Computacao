#include <stdio.h>
int main()
{
  int v1;

  printf ("\nDigite um numero: ");
  scanf ("%d", &v1);

    if (v1 > 0)
    printf("\nO numero %d e positivo \n",v1);
    if (v1 == 0)
    printf("\nO numero %d e zero \n",v1);
    if (v1 < 0)
    printf("\nO numero %d e negativo \n",v1);

    return 0;
}
