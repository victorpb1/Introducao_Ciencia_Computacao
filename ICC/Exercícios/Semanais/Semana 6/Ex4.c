#include <stdio.h>
int main()
{
  int v1;

  printf ("\nDigite um numero de 1 a 5: ");
  scanf ("%d", &v1);

    if (v1 == 1)
    printf("\nO numero %d e escrito assim: UM. \n",v1);
    if (v1 == 2)
    printf("\nO numero %d e escrito assim: DOIS. \n",v1);
    if (v1 == 3)
    printf("\nO numero %d e escrito assim: TRES. \n",v1);
    if (v1 == 4)
    printf("\nO numero %d e escrito assim: QUATRO. \n",v1);
    if (v1 == 5)
    printf("\nO numero %d e escrito assim: CINCO. \n",v1);

  return 0;
}
