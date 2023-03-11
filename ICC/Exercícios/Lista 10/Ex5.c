/*
5. Escreva um algoritmo que lê uma matriz M 5x5, calcule as somas e mostre: (olhar img)
*/
#define L 4
#define C 4
#include <stdio.h>

int main(){
    
    int letraA(int matriz[L][C]);//reparar nisso daqui, vi no vídeo de dá pra fazer assim 
    int letraB(int matriz[L][C]);//(falar pro programa q existe a função), n precisa ser fora do main
    int letraC(int matriz[L][C]);
    int letraD(int matriz[L][C]);
    int letraE(int matriz[L][C]);

    int num[L][C], l, c;
    
    for (int i = 0; i < L; i++){
        for (int j = 0; j < C; j++){
            printf("Insira o valor da Linha %d, coluna %d: ", i, j);
            scanf("%d", &num[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < L; i++){
        for (int j = 0; j < C; j++){
            printf("[%d] ", num[i][j]);
        }
        printf("\n");
    }
    letraA(num);
    letraB(num);
    letraC(num);
    letraD(num);
    letraE(num);
}
int letraA(int matriz[L][C]) {
    
    int somaL4 = 0;
    
    for(int i = 0; i < L; i++) {
        somaL4 += matriz[3][i];
    }
    printf("\nA soma da linha 4: %d", somaL4);
}
int letraB(int matriz[L][C]) {

    int somaC2 = 0;

    for(int i = 0; i < L; i++) {
        somaC2 += matriz[i][2];
    }
    printf("\nA soma da coluna 2: %d", somaC2);
}
int letraC(int matriz[L][C]) {

    int somaDiagonalMain = 0;
    
    for(int i = 0, j = i; i < L; i++) {
        somaDiagonalMain += matriz[i][j];
        j++;
    }
    printf("\nA soma da diagonal principal: %d", somaDiagonalMain);
}
int letraD(int matriz[L][C]) {

    int somaDiagonalSec = 0;
    
    for(int i = 0, j = L - 1; i < L; i++, j--) {
        somaDiagonalSec += matriz[i][j];
    }
    printf("\nA soma da diagonal secundaria: %d", somaDiagonalSec);
}
int letraE(int matriz[L][C]) {

    int somaElementos = 0;
    
    for(int i = 0; i < L; i++) {
        for (int g = 0; g < L; g++) {
            somaElementos += matriz[i][g];
        }
    }
    printf("\nA soma de todos os elementos: %d", somaElementos);
}