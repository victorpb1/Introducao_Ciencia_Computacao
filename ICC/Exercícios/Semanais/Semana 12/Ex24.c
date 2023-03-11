/*
24. Faça um programa que simule um controle bancário. Para tanto, devem ser lidos os códigos
de dez contas e os seus respectivos saldos. Depois de fazer a leitura dos valores, mostrar
o seguinte menu na tela : Obs. crie função para ler os dados e crie uma função para cada item
do menu. Menu:
1 Efetuar deposito, 2 Efetuar saque, 3 Consultar o ativo bancário (ou seja, o somatório dos
saldos de todos os clientes), 4 Finalizar o programa
(a)Para efetuar deposito deve-se solicitar o código da conta e o valor a ser
depositado. Se a conta não estiver cadastrada, mostrar a mensagem
conta não encontrada e voltar ao menu. Se a conta existir, atualizar o seu
saldo.
(b)Para efetuar saque deve-se solicitar o código da conta e o valor a ser
sacado. se a conta não estiver cadastrada, mostrar a mensagem conta
não encontrada e voltar ao menu. Se a conta existir, verificar se o seu
saldo e suficiente para cobrir o saque. (estamos supondo que a conta não
pode ficar com o saldo negativo). Se o saldo for suficiente, realizar o
saque e voltar ao menu. Caso contrário, mostrar a mensagem saldo
insuficiente e voltar ao menu.
(c)Para consultar o ativo bancário deve-se somar o saldo de todas as contas
do banco. Depois de mostrar esse valor, voltar ao menu.
(d)o programa só termina quando for digitada a opção 4 - Finalizar o
programa.

int menu(int opcao)
{
    switch (opcao)
    {
    case 1:
        break;
    case 2:
        funcao();
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        printf("\nPrograma finalizado!\n");
        break;
    default:
        printf("\nCodigo invalido!\n");
    }
}
int funcao(int conta[N], float saldo[N])
{
    int conta1, i;
    float dep = 0, valor = 0;

    for(i = 0; i < N; i++)
    {
        printf("\nInsira a conta apra verificar: ");
        scanf("%d", &conta1);

        if(conta1 == conta[i])
        {
            printf("\nConta verificada!\n");

            printf("\nInsira o valor para deposito: R$");
            scanf("%f", &dep);

            saldo[i] = dep + saldo[i];

            printf("\nSeu novo saldo: %.2f", saldo[i]);
            return main();
        }
    }
    if(conta1!=conta[i])
        printf("Conta nao encontrada!");
}
int main()
{
    int conta[N], i;
    float saldo[N];
    for(i = 0; i < N; i++)
    {
    printf("Insira a conta: ");
    scanf("%d", &conta[i]);
    printf("Insira o saldo: ");
    scanf("%f", &saldo[i]);
    }

    funcao(conta, saldo);

    return 0;
}

*/
#include <stdio.h>
#define N 1
#define qnt_nomes 1
#define caracteres 30
int menu(int opcao)
{
    switch (opcao)
    {
    case 1:
        cadastrar();
        break;
    case 2:
        deposito();
        break;
    case 3:
        saque();
        break;
    case 4:
        consultar();
        break;
    case 5:
        printf("\nPrograma finalizado!\n");
        break;
    default:
        printf("\nCodigo invalido!\n");
    }
}
int cadastrar()
{
    int i, j, conta[N];
    float saldo[N];
    char nome[qnt_nomes][caracteres];

        for(i = 0; i < qnt_nomes; i++)
        {
            printf("Insira o nome do beneficiario: ");
            scanf("%s", nome[i]);
            printf("Insira a conta(3 digitos): ");
            scanf("%d", &conta[i]);
            printf("Insira o saldo dessa conta: ");
            scanf("%f", &saldo[i]);
        }

    for (i = 0; i < N; i++)
    {
        printf("\nConta: %d\n", conta[i]);
        printf("O saldo dessa conta: %.2f\n", saldo[i]);
    }

    deposito(conta, saldo);

    return menu(2);
}
int deposito(int conta[N], int saldo[N])
{
    int conta1, i;
    float dpst;

    printf("Insira o codigo da conta: ");
    scanf("%d", &conta1);
    for(i = 0; i > N; i++)
    {
        if(conta1 == conta[i])
        {
            printf("Conta encontrada, insira o valor a ser depositado: ");
            scanf("%f", &dpst);
            saldo[i] = dpst + saldo[i];
            break;
        }else{

        }
    }

}
int saque()
{

}
int consultar()
{

}
int main()
{
    int opcao;

    printf("Aperte o numero correpondente a opcao: ");
    printf("\n1 - Efetuar cadastro");
    printf("\n2 - Efetuar deposito");
    printf("\n3 - Efetuar saque");
    printf("\n4 - Consultar ativo bancario");
    printf("\n5 - Finalizar programa\n");
    scanf("%d", &opcao);

    menu(opcao);


    return 0;
}
