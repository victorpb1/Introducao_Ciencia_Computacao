//enviar esse
#include <stdio.h>
#include <stdlib.h> //numero aleatorio
#include <string.h> //copiar de uma string pra outra

char palavras(); //armazena as palavras e gera a aleatoria
int jogo(char palavra_sorteada[6]); //o jogo acontece aqui
int verificar_palavra(char palavra_sorteada[6], char palavra_digitada[6]); //aqui acontece a verificacao da tentativa com a resposta

int main()
{
    int opcao, n = 0;

    do{     //menu
        printf("---------------------- Menu: ----------------------");
        printf("\n|            Insira a opcao desejada:             |\n");
        if(n == 0)  //aparecer jogar na primeira vez q iniciar
        {
        printf("|              1: Jogar                           |\n");
        }
        if(n > 0)   //pra quando terminar o jogo, aparecer jogar novamente
        {
        printf("|              1: Jogar novamente                 |\n");
        }
        printf("|              2: Sair do jogo                    |\n");
        printf("---------------------------------------------------\n");

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\nSeja bem vindo ao jogo!\n");
            printf("\n_ caractere nao existe na palavra.\n+ caractere existe na palavra, mas esta no lugar errado \n# caractere correto\n");
            palavras();
            break;
        case 2:
            return 0;
        default:
            printf("\n\nOpcao Inexistente!!!\n");
            break;
        }
            n++; //pra quando terminar o jogo, aparecer jogar novamente

    }while (opcao != 2);
	return 0;
}
int jogo(char palavra_sorteada[6])
{
    int fechar, auxvet[26];
    char palavra_digitada[6];
    char alfabeto[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    
    for(int i=0;i<26;i++)
    {
        auxvet[i]= 0;
    }
    
    printf("\nInsira a palavra (6 tentativas restantes): ");
    scanf("%s", palavra_digitada);

    fechar = verificar_palavra(palavra_sorteada, palavra_digitada);

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (palavra_digitada[i] == alfabeto[j])
            {
                auxvet[j] = -1;
            }
        }
    }

    printf("\n\n\nLetras do alfabeto nao usadas: \n");

    for (int i = 0; i < 26; i++)
    {
        if (auxvet[i] == 0)
        {
            printf("%c ", alfabeto[i]);
        }
    }

    if (fechar == 0)
    {
        return 0;
    }

    for (int i = 5; i > 0; i--)
    {
        printf("\n\nInsira a palavra (%d tentativas restantes): ", i);
        scanf("%s", palavra_digitada);

        fechar = verificar_palavra(palavra_sorteada, palavra_digitada);

        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                if (palavra_digitada[i] == alfabeto[j])
                {
                    auxvet[j] = -1;
                }
            }
        }

        printf("\n\n\nLetras do alfabeto nao usadas: \n");

        for (int i = 0; i < 26; i++)
        {
            if (auxvet[i] == 0)
            {
                printf("%c ", alfabeto[i]);
            }
        }

        if (fechar == 0)
        {
            return 0;
        }
    }

    printf("\n\n\nFIM DE JOGO!\n\n\n");
}
int verificar_palavra(char palavra_sorteada[6], char palavra_digitada[6])
{
    int i, j, contador = 0;
    char posicao_final[6];

    for ( i = 0; i < 6; i++)
    {
        posicao_final[i] = '_';
    }

        for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (palavra_sorteada[i] == palavra_digitada[j])
            {
                if (i == j)
                {
                    contador++;
                    posicao_final[i] = '#';

                    if (contador == 5)
                    {
                        printf("\n\nParabens, vc ganhou!!!!\n\n");
                        return 0;
                    }
                }
                if (i != j)
                {
                    contador = 0;
                    posicao_final[j] = '+';
                }
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%c", posicao_final[i]);
    }

}
char palavras()
{
    srand(time(NULL));

    int i, numero_sorteado;
    char palavra_sorteada[6];
    char palavras[100][6] =
    {
        "teste", "agora", "audio", "roupa", "tecla", "mouse", "sagaz", "senso", "audaz", "fazer",
        "mexer", "termo", "nobre", "sutil", "vigor", "ideia", "termo", "inato", "assim", "muito",
        "nobre", "rezar", "sorte", "pajem", "junto", "acima", "mudar", "carro", "sinal", "jazia",
        "algoz", "chuva", "bando", "puxar", "fugir", "treta", "motim", "gerir", "prazo", "andar",
        "afeto", "parar", "grupo", "tosco", "leite", "norma", "alude", "brava", "lenda", "rapaz",
        "plena", "tenso", "parte", "exame", "arcar", "campo", "tirar", "reino", "praga", "sumir",
        "etica", "aonde", "preto", "fixar", "antes", "quase", "cheio", "risco", "praia", "certa",
        "mutua", "filho", "turva", "solto", "turba", "alado", "apego", "texto", "caixa", "grave",
        "tenue", "prova", "acesa", "ligar", "pardo", "fenda", "dessa", "viria", "sabia", "livre",
        "sutil", "conta", "verbo", "navio", "astro", "autor", "lidar", "mente", "lento", "verba"
    };

    numero_sorteado = rand() % 10;
    strcpy(palavra_sorteada, palavras[numero_sorteado]);

    jogo(palavra_sorteada);
}