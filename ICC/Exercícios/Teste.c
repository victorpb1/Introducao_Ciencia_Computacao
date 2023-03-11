#include <stdio.h>
int main(){
    int i,j,Linha,Coluna,maiorColuna;
    float  mat[4][7],menorMat,maiorLinha;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 7; j++){
            printf("Digite um numero para [%d][%d]: ", i, j);
            scanf("%f", &mat[i][j]);
        }
    }
    menorMat = mat[0][0];
    Linha = 0;
    Coluna = 0;
    maiorLinha = mat[0][0];
    maiorColuna = 0;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 7; j++){
            if(mat[i][j] < menorMat){
                Linha = i;
                Coluna = j;
                
                menorMat = mat[i][j];
            }
        }
    }
    for (i = 0; i < 4; i++){
        if (mat[Linha][i] > maiorLinha){
            maiorLinha = mat[Linha][i];
            maiorColuna = i;
        }
    }
    printf("\nOs Termos minimos: [%d][%d]: %.2f", Linha, Coluna, menorMat);
    printf("\nOs Termos maximo: [%d][%d]: %.2f\n", Linha, maiorColuna, maiorLinha);
    
    return 0;
}