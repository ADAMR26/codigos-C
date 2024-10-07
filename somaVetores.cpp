/*Crie um programa que leia dois vetores de 
5 elementos cada. Calcule e exiba o produto escalar 
desses vetores. O produto escalar é a soma dos produtos 
dos elementos correspondentes dos vetores.*/
#include<stdio.h>
void receberVetor (int vetor[5]){
    for (int i=0;i<5;i++){
        printf("insira o %d numero: ",i+1);
        scanf("%d",&vetor[i]);
    }
}
void somarVetor(int vetor1[5],int vetor2[5],int vetor3[5]){
    for (int i=0;i<5;i++){
        vetor3[i]= vetor1[i]+vetor2[i];
    }
}
int main(){
    int vetor1[5],vetor2[5],vetor3[5];
    printf("primeiro vetor: \n");
    receberVetor(vetor1);
    printf("segundo vetor: \n");
    receberVetor(vetor2);
    somarVetor(vetor1,vetor2,vetor3);
    for (int i=0;i<5;i++){
        printf("[%d]", vetor3[i]);
    }
    return 0;
}
