/*13. Construa um programa que, para a progress�o geom�trica 3, 9, 27,81, ..., 6561, determine a soma
de seus termos. Construa um programa de forma a n�o utilizar a f�rmula de soma dos termos.
Fa�a com que o computador gere cada termo a ser somando.
*/
#include <stdio.h>
int main()
{
    int a = 1, i, z = 0;

    for (i = 1; i <= 8; i++)
    {
        a = a * 3;
        z = a + z;
        printf("Mult 3*3... === %d\n", a);
        printf("A Soma 3+3... === %d\n", z);
    }

    return 0;
}
