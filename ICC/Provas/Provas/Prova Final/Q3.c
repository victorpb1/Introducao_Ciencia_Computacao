#include <stdio.h>
#include <stdlib.h>

int main()
{
    void poltronasJanelas(int poltronasJ[]);
    void poltronasCorredor(int poltronasC[]);

    int pJanelas[24], pCorredor[24];
    char opcao;

    do{
        system("cls");

        opcoes();

        printf("\n\nEscolha uma opcao: ");
        scanf("%c", &opcao);

        switch(opcao){

            case 'J':
                poltronasJanelas(pJanelas);
                break;

            case 'C':
                poltronasCorredor(pCorredor);
                break;

            case 'S':
                system("exit");
                break;

        }

    }while(opcao != 'S');


    return 0;
}

void opcoes(){

    printf("Opcoes:\n\n");
    printf("J - Janela.\n");
    printf("C - Corredor.\n");
    printf("S - Sair.\n");

}

void poltronasJanelas(int poltronasJ[]){

    static int i = 0;
    int numeroPoltrona;

    if(i < 24){

        for(int e = 0; e < 24; e++){
            if(poltronasJ[e] != 1){
                printf("Poltrona %i das janelas vazia.\n", e+1);
            }
        }

        while(numeroPoltrona > 25){
            printf("\n\nEscolha o numero da poltrona de 1 a 24: ");
            scanf("%i", &numeroPoltrona);
        }

        if(poltronasJ[numeroPoltrona - 1] != 1){

            poltronasJ[numeroPoltrona - 1] = 1;
            i++;
            printf("Poltrona %i das janelas comprada.\n\n", numeroPoltrona);
            system("pause");
            return;

        }else{

            printf("Compra nao realizada, poltrona %i das janelas ja foi comprada.\n\n", numeroPoltrona);
            system("pause");
            return;

        }

    }else{

        printf("Poltronas das janelas esgotadas.");
        #include <stdio.h>
#include <stdlib.h>

int main()
{
    void poltronasJanelas(int poltronasJ[]);
    void poltronasCorredor(int poltronasC[]);

    int pJanelas[24], pCorredor[24];
    char opcao;

    do{
        system("cls");

        opcoes();

        printf("\n\nEscolha uma opcao: ");
        scanf("%c", &opcao);

        switch(opcao){

            case 'J':
                poltronasJanelas(pJanelas);
                break;

            case 'C':
                poltronasCorredor(pCorredor);
                break;

            case 'S':
                system("exit");
                break;

        }

    }while(opcao != 'S');


    return 0;
}

void opcoes(){

    printf("Opcoes:\n\n");
    printf("J - Janela.\n");
    printf("C - Corredor.\n");
    printf("S - Sair.\n");

}

void poltronasJanelas(int poltronasJ[]){

    static int i = 0;
    int numeroPoltrona;

    if(i < 24){

        for(int e = 0; e < 24; e++){
            if(poltronasJ[e] != 1){
                printf("Poltrona %i das janelas vazia.\n", e+1);
            }
        }

        while(numeroPoltrona > 25){
            printf("\n\nEscolha o numero da poltrona de 1 a 24: ");
            scanf("%i", &numeroPoltrona);
        }

        if(poltronasJ[numeroPoltrona - 1] != 1){

            poltronasJ[numeroPoltrona - 1] = 1;
            i++;
            printf("Poltrona %i das janelas comprada.\n\n", numeroPoltrona);
            system("pause");
            return;

        }else{

            printf("Compra nao realizada, poltrona %i das janelas ja foi comprada.\n\n", numeroPoltrona);
            system("pause");
            return;

        }

    }else{

        printf("Poltronas das janelas esgotadas.");
        system("pause");


    }

}

void poltronasCorredor(int poltronasC[]){

    static int j = 0;
    int numeroPoltrona;

    if(j < 24){

        for(int e = 0; e < 24; e++){
            if(poltronasC[e] != 1){
                printf("Poltrona %i do corredor vazia.\n", e+1);
            }
        }

        while(numeroPoltrona > 25){
            printf("\n\nEscolha o numero da poltrona de 1 a 24: ");
            scanf("%i", &numeroPoltrona);
        }

        if(poltronasC[numeroPoltrona - 1] != 1){

            poltronasC[numeroPoltrona - 1] = 1;
            j++;
            printf("Poltrona %i do corredor comprada.\n\n", numeroPoltrona);
            system("pause");
            return;

        }else{

            printf("Compra nao realizada, poltrona %i do corredor ja foi comprada.\n\n", numeroPoltrona);
            system("pause");
            return;

        }

    }else{

        printf("Poltronas do corredor esgotadas.");
        system("pause");

    }

}


    }

}

void poltronasCorredor(int poltronasC[]){

    static int j = 0;
    int numeroPoltrona;

    if(j < 24){

        for(int e = 0; e < 24; e++){
            if(poltronasC[e] != 1){
                printf("Poltrona %i do corredor vazia.\n", e+1);
            }
        }

        while(numeroPoltrona > 25){
            printf("\n\nEscolha o numero da poltrona de 1 a 24: ");
            scanf("%i", &numeroPoltrona);
        }

        if(poltronasC[numeroPoltrona - 1] != 1){

            poltronasC[numeroPoltrona - 1] = 1;
            j++;
            printf("Poltrona %i do corredor comprada.\n\n", numeroPoltrona);
            system("pause");
            return;

        }else{

            printf("Compra nao realizada, poltrona %i do corredor ja foi comprada.\n\n", numeroPoltrona);
            system("pause");
            return;

        }

    }else{

        printf("Poltronas do corredor esgotadas.");
        system("pause");

    }

}