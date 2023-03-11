#include <stdio.h>

#define janela 5
#define corredor 5

int main()
{
    int opcao;

    int i;

    int vaga;
    int nmr_janela[janela];
    int nmr_corredor[corredor];

    for (i = 0; i < janela; i++)
    {
        nmr_janela[i] = 0;
    }
    

    printf("Insira a opcao desejada para a compra das passagens:\n1 - Poltrona na janela\n2 - Poltrona no corredor\n3 - Finalizar programa\n");
    scanf("%d", &opcao);

    do
    {
        switch (opcao)
        {
        case 1:


            printf("\nPoltrona da janela escolhida.\n");
            //vender_poltronas(opcao);

            printf("\n\nPoltronas disponiveis: \n\n");
            for (i = 0; i < janela; i++)
            {
                if (nmr_janela[i] != 1)
                {

                    printf("%d ", i + 1);    

                }
            }
            //for (i = 0; i < janela; i++)
            //{
                //if (nmr_janela[i] != 0) 
                //{

//                printf("\n\nTodas as poltronas da janela estao ocupadas!\n\n************************\n\n");

  //              }
    //        }

            printf("\n\nInsira o nmr da sua poltrona: ");
            scanf("%d", &vaga);
            
            if (nmr_janela[vaga] != 0)
            {
                printf("\n\nVaga ja ocupada!\n\n");

            }else if (nmr_janela[vaga] != 1)
            {

                nmr_janela[vaga] = 1;
            
            }
            
            break;
            
        case 2:


            printf("\nPoltrona do corredor escolhida.\n");
            //vender_poltronas(opcao);
            break;


        case 3:


            printf("\nFinalizando programa...\n");
            break;


        default:


            printf("\n********************\n");
            printf("Numero invalido");
            printf("\n********************\n");
            break;


        }

    } while (opcao != 3);

    return 0;
}