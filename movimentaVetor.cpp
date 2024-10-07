/*Crie um programa que leia um vetor de 10 elementos e um valor inteiro ( k ). 
Rotacione o vetor ( k ) posições para a direita e exiba o vetor resultante. 
Por exemplo, se o vetor for ([1, 2, 3, 4, 5, 6, 7, 8, 9, 10]) e ( k = 3 ), 
o vetor resultante será ([8, 9, 10, 1, 2, 3, 4, 5, 6, 7]).*/

#include<stdio.h>
int main(){
    int vetor[10],i,k,salvar[10];
    for (i=0;i<10;i++){
        printf("insira o %d numero: ",i+1);
        scanf("%d",&vetor[i]);
    }
    printf("insira o vator da rotacao: ");
    scanf("%d",&k);
    k=k%10;
    for (i=0;i<10;i++){
        salvar[(i+k)%10]=vetor[i];
    }

    for (i=0;i<10;i++){
        vetor[i]=salvar[i];
        printf("[%d]",vetor[i]);
    }
    return 0;
}
