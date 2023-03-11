#include <stdio.h>
int MediaAri(float A, float B, float C);
int MediaPon(float A, float B, float C);
int Diferenca(float A, float B, float C);
int Expressao(float A, float B, float C);

int main()
{
    float A, B, C;
    int n;
    printf("Insira os valores de A, B e C: ");
    scanf("%f%f%f", &A, &B, &C);
    printf("Insira a operacao com nmr corresponde para n (1, 2, 3, 4): ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        MediaAri(A, B, C);
        break;
    case 2:
        MediaPon(A, B, C);
        break;
    case 3:
        Diferenca(A, B, C);
        break;
    case 4:
        Expressao(A, B, C);
    default:
        printf("Operacao inexistente!\n");
        break;
    }
}
int MediaAri(float A, float B, float C)
{
    float R;
    R = (A + B + C)/3;

    printf("\nA media aritmetica: %.2f", R);
}
int MediaPon(float A, float B, float C)
{
    float R;
    R = (A * 2 + B * 4 + C * 6)/(2 + 4 + 6);
    
    printf("\nA media ponderada: %.2f", R);
}
int Diferenca(float A, float B, float C)
{
    float R;

    if (A > B && A > C)
    {
        if (C > B)
        {
            R = A - B;
            printf("\nA diferenca do menor pelo maior: %.2f", R);

        }else if (B > C)
        {
            R = A - C;
            printf("\nA diferenca do menor pelo maior: %.2f", R);
        }

    }else if (B > A && B > C)
    {
        if (C > A)
        {
            R = B - C;
            printf("\nA diferenca do menor pelo maior: %.2f", R);

        }else if (A > C)
        {
            R = B - A;
            printf("\nA diferenca do menor pelo maior: %.2f", R);
        }

    }else if (C > A && C > B)
    {
        if (A > B)
        {
            R = C - B;
            printf("\nA diferenca do menor pelo maior: %.2f", R);

        }else if (B > A)
        {
            R = C - A;
            printf("\nA diferenca do menor pelo maior: %.2f", R);
        }
    }
}
int Expressao(float A, float B, float C)
{
    float R;

    R = (A*A) + (B*B*B) + (C*C*C*C);
    printf("\nO resultado da expressao: %.2f", R);
}