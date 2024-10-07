/*Crie um programa que leia uma matriz 4x4 de 
números inteiros e um valor inteiro ( x ). Verifique 
se ( x ) está presente na matriz e, se estiver, exiba 
a posição (linha e coluna) de ( x ). Caso contrário, exiba 
uma mensagem informando que o valor não foi encontrado.*/
#include<stdio.h>
void receberMatriz(int matriz[4][4]){
    for(int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            printf("linha %d coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
}
int encontrarVariavel (int matriz[4][4],int num){
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            if (matriz[i][j]==num){
                printf("numero se encontra na linha %d, coluna %d",i,j);
                return 1;
            }
        }
    }
    printf("numero nao encontrado");
    return 0;
}
int main(){
    int matriz[4][4],num;
    printf("insira os valores da matriz: \n");
    receberMatriz(matriz);
    printf("qual numero deseja encontrar: ");
    scanf("%d",&num);
    encontrarVariavel(matriz,num);
    return 0;
}
