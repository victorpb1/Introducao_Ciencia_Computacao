/*
3 - Faça uma função que efetue reserva de passagens aéreas 
de uma certa companhia. A função deverá receber informações 
sobre os voos (código, origem e destino) juntamente com os 
assentos (cada avião possui 128 assentos) disponíveis/ocupados para 12 aviões.
*/
#include <stdio.h>

#define TAM_STRING 50
#define TAM_CODIGOS 5
#define CIDADES 3
#define NMR_ASSENTOS 10

int buscar_assento(int assentos[NMR_ASSENTOS], int consultar_assento);
int buscar_codigo_voo(int codigo[TAM_CODIGOS], int consultar_codigo);


int main()
{
    int i, j, opcao = 0;

    int codigo[TAM_CODIGOS], assentos[NMR_ASSENTOS];
    char origem[CIDADES][TAM_STRING], destino[CIDADES][TAM_STRING];

    int consultar_assento, consultar_codigo;
    int indice_codigo, indice_assento;

    int cidade_origem = 0, cidade_destino = 0, contador_assento = 0;

    for (i = 0; i < NMR_ASSENTOS; i++)
    {
        assentos[i] = 0;
    }

    j = 0;

    do
    {
        printf("Insira o nmr 1 para finalizar ou qqlr outro numero para continuar com a reserva: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            return 0;
        }
        

        printf("Insira o codigo do voo: ");
        scanf("%d", &consultar_codigo);
        
        indice_codigo = buscar_codigo_voo(assentos, consultar_codigo);

        if (indice_codigo == 1)
        {
            printf("Codigo encontrado! Agora digite o assento desejado: ");
            scanf("%d", &consultar_assento);

            indice_assento = buscar_assento(assentos, consultar_assento);

            if (indice_assento == 1)
            {
                printf("\nInsira a origem: ");
                scanf("\n%[^\n]s", &origem[cidade_origem]);

                printf("Insira o destino: ");
                scanf("\n%[^\n]s", &destino[cidade_destino]);

                cidade_origem++;
                cidade_destino++;

            }else{
                
                printf("\nDigite o assento desejado: ");
                scanf("%d", &consultar_assento);

                indice_assento = buscar_assento(assentos, consultar_assento);
            }

            contador_assento++;
            
        }else{
            
            printf("\nN existe voo com esse codigo, cadastre agora: ");
            scanf("%d", &consultar_codigo);

            j++;

            printf("Digite o assento desejado: ");
            scanf("%d", &consultar_assento);
            indice_assento = buscar_assento(assentos, consultar_assento);
            
        }
    } while (opcao != 1);

}
int buscar_assento(int assentos[NMR_ASSENTOS], int consultar_assento)
{
    int i;
    
    if (assentos[consultar_assento] == 1)
    {
        printf("Assento jah ocupado, escolha outro!!!\n\n");
        return -1;

    }else if(assentos[consultar_assento] == 0)
    {
        assentos[consultar_assento] = 1;
        printf("Assento reservado para vc!!!\n\n");
        return 1;
    }
}
int buscar_codigo_voo(int codigo[TAM_CODIGOS], int consultar_codigo)
{
    int i;

    for (i = 0; i < TAM_CODIGOS; i++)
    {
        if (codigo[i] == consultar_codigo) //existe
        {
            return 1;

        }else if (codigo[TAM_CODIGOS] != consultar_codigo) //n existe
        {
            return -1;
        }
    }
}
