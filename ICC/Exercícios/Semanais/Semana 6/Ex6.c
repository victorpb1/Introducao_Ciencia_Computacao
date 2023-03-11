#include <stdio.h>
int main()
{
  int v1, v2, v3;

  printf ("Digite um numero : ");
  scanf ("%d", &v1);
  printf ("Digite um numero : ");
  scanf ("%d", &v2);
  printf ("Digite um numero : ");
  scanf ("%d", &v3);

    if (v1 < v2 && v1 < v3)
    printf("\nO menor numero e o primeiro\n");
    if (v2 < v1 && v2 < v3)
    printf("\nO menor numero e o segundo\n");
    if (v3 < v1 && v3 < v2)
    printf("O menor numero e o terceiro\n");

  return 0;
}
