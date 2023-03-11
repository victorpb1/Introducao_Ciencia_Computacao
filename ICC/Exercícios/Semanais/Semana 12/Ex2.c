/* Ver aula de Caribe dessa quest, dia 25/08 eu acho.
2. Construa um algoritmo que leia 2 vetores A[10] e B[10]. A seguir, Crie um vetor C que seja
a intersecção de A com B e mostre este vetor C. Obs.: Intersecção é quando um valor estiver nos
dois vetores. Considere que não há elementos duplicados em cada um dos vetores.*/
#include <stdio.h>
#define N 5
int main()
{
    int A[N], B[N], C[N], cont;

    for(int i = 1; i <= N; i++)
    {
        printf("Insira os valores de A: ");
        scanf("%d", &A[i]);

        printf("Insira os valores de B: ");
        scanf("%d", &B[i]);

        if(A[i] == B[i])
        {
            C[i] = A[i];
            cont = cont + 1;
        }
    }
    for(int i = 1; i <= cont; i++)
    {
        printf("\nA interseccao: %d", C[i]);
    }
    return 0;
}
