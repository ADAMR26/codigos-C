/*Crie um programa que leia uma matriz 4x4 de números 
inteiros e calcule a soma dos elementos de uma coluna 
específica, informada pelo usuário.*/
#include<stdio.h>
int main(){
    int matriz[4][4],i,j,num,soma=0;
    for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            printf("linha %d coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    while (1){
        printf("qual coluna deseja somar [0 a 3]: \n");
        scanf("%d",&num);
        if ((num<=3) && (num>=0)){
            break;
        }else{
            printf("valor digitado invalido\n");
        }
    }
    for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            if (j==num){
                soma+=matriz[i][j];
            }
        }
    }
    printf("matriz digitada: \n");
    for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            printf("[%d]",matriz[i][j]);
        }
        printf("\n");
    }
    printf("soma dos valores da coluna %d: %d",num,soma);
    return 0;
}