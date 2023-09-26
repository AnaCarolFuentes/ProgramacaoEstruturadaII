#include <stdio.h>
#include <stdlib.h>

// 2 - Escreva um algoritmo que leia um vetor de 20 posições e mostre-o. Em seguida, troque
// o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o
// antepenúltimo, e assim sucessivamente. Mostre o novo vetor depois da troca.

int main(){
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int vetorNovo[10] = {0};
    int aux = 9;

    for(int i = 0; i < 10; i++){
        vetorNovo[aux] = vetor[i];
        aux--;
    }

    for(int i = 0; i < 10; i++){
        printf("Vetor[%d] = %d\n", i, vetorNovo[i]);
    }
    


}