/*Crie um programa que leia uma matriz 4x4 de números inteiros. 
Multiplique cada elemento da matriz por 2 e exiba a matriz resultante.*/
#include<stdio.h>
void receberMatriz(int matriz[4][4]){
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            printf("linha %d coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
}
void dobraMatriz (int matriz[4][4]){
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            matriz[i][j]=matriz[i][j]*2;
        }
    }
}
int main() {
    int matriz[4][4];
    printf("preencha a matriz: \n");
    receberMatriz(matriz);
    printf("matriz digitada: \n");
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            printf("[%d]",matriz[i][j]);
        }
        printf("\n");
    }
    dobraMatriz(matriz);
    printf("matriz dobrada: \n");
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            printf("[%d]",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}