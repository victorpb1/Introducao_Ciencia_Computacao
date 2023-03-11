int f(int V[10], int X)
{
    int soma = 0;

    for (int i = 0; i < 10; i++)
    {
        if ((V[i] % X) == 0 && V[i] > X)
        {
            soma = soma + V[i];
        }
    }

    return soma;
}