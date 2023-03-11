#include <stdio.h>
int main()
{
    //3 fizz, 5 é buzz, 3 e 5 é fizzbuzz
    int numero, numero_dividido;
    printf("Insira o nmr: ");
    scanf("%d", &numero);

    if (numero == 3)
    {
        printf("\nFizz");
    }
    else if (numero == 5)
    {
        printf("\nBuzz");
    }
    else if (numero == 30)
    {
        printf("\nFizz");
    }
    else if (numero == 50)
    {
        printf("\nBuzz");
    }
    else if (numero == 35 || numero == 53)
    {
        printf("\nFizzBuzz");
    }

    else{

        //10
        if (numero >= 11 && numero <= 19)
        {
            numero_dividido = numero % 10;
            if (numero_dividido == 3)
            {
                printf("\nfizz");

            }else if(numero_dividido == 5){
                
                printf("\nBuzz");
            }
        }
        //20
        else if (numero >= 21 && numero <= 29)
        {
            numero_dividido = numero % 20;
            if (numero_dividido == 3)
            {
                printf("\nfizz");
                
            }else if(numero_dividido == 5){
                
                printf("\nBuzz");
            }
        }
        //30
        else if (numero >= 31 && numero <= 39)
        {
            numero_dividido = numero % 30;
            if (numero_dividido == 3)
            {
                printf("\nfizz");
                
            }else if(numero_dividido == 5){
                
                printf("\nBuzz");
            }
        }
        //40
        else if (numero >= 41 && numero <= 49)
        {
            numero_dividido = numero % 40;
            if (numero_dividido == 3)
            {
                printf("\nfizz");
                
            }else if(numero_dividido == 5){
                
                printf("\nBuzz");
            }
        }
        //50
        else if (numero >= 51 && numero <= 59)
        {
            numero_dividido = numero % 50;
            if (numero_dividido == 3)
            {
                printf("\nfizz");
                
            }else if(numero_dividido == 5){
                
                printf("\nBuzz");
            }
        }
        //60
        else if (numero >= 61 && numero <= 69)
        {
            numero_dividido = numero % 60;
            if (numero_dividido == 3)
            {
                printf("\nfizz");
                
            }else if(numero_dividido == 5){
                
                printf("\nBuzz");
            }
        }
        //70
        else if (numero >= 71 && numero <= 79)
        {
            numero_dividido = numero % 70;
            if (numero_dividido == 3)
            {
                printf("\nfizz");
                
            }else if(numero_dividido == 5){
                
                printf("\nBuzz");
            }
        }
        //80
        else if (numero >= 81 && numero <= 89)
        {
            numero_dividido = numero % 80;
            if (numero_dividido == 3)
            {
                printf("\nfizz");
                
            }else if(numero_dividido == 5){
                
                printf("\nBuzz");
            }
        }
        //90
        else if (numero >= 91 && numero <= 99)
        {
            numero_dividido = numero % 90;
            if (numero_dividido == 3)
            {
                printf("\nfizz");
                
            }else if(numero_dividido == 5){
                
                printf("\nBuzz");
            }
        }
    }
}