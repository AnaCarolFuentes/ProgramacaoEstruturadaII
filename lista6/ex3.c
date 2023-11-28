#include <stdio.h>
#include <stdlib.h>

// 3 – Fazer um programa em C para ler um vetor com 20 elementos, gerar um outro vetor
// com os elementos das posições pares trocados com os das posições ímpares. Imprimir o
// vetor lido e o gerado.

int main(){
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int vetorTrocado[10] = {0}; //2,1,4,3,6,5,8,7,10,9
    int swap = 0;
    int cont = 0;

    for(int i = 0; i < 10; i++){
        if(vetor[i] % 2 == 0){
            swap = vetor[i];
            vetor[i] = vetor[i+1];
            vetor[i+1] = swap;
        }
    }
    




}