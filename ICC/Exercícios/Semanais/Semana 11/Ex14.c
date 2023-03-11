/*14. Construa um algoritmo que leia um conjunto não determinado de pares de valores M e N
(parar quando algum dos valores for menor ou igual a zero). Para cada par lido, mostre: (a) A sequencia
do menor ao maior, inclusive.(b) A soma dos inteiros consecutivos, do menor até o maior, inclusive.*/
#include <stdio.h>
int main()
{
    int M = 1, N = 1, S = 0;

    while(M > 0 && N > 0)
    {
        printf("Insira o valor de M: ");
        scanf("%d", &M);
        printf("Insira o valor de N: ");
        scanf("%d", &N);
        if(M > N)
        {
            for(M; M >= N; N++)
            {
                S = N + S;

                printf("\nSequencia M --> N: %d\n", N);
            }
        }else{
            for(N; N >= M; M++)
            {
                S = M + S;

                printf("\nSequencia N --> M: %d\n", M);
            }
        }

        printf("\nA soma dos inteiros: %d\n", S);
    }
    return 0;
}
