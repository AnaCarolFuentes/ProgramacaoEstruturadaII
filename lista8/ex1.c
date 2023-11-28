#include <stdio.h>
#include <stdlib.h>

/*
1 - Crie um programa que:
(a) Aloque dinamicamente um array de 5 números inteiros,
(b) Peça para o usuário digitar os 5 números no espaço alocado,
(c) Mostre na tela os 5 números,
(d) Libere a memória alocada.
*/

void lerArray (int * array, int tamanho){

    for(int i = 0; i < tamanho; i++){
        printf("Array[%d]: ", i);
        scanf("%d", (array + i));
    }
    
}

void imprimirArray (int * array, int tamanho){

    for(int i = 0; i < tamanho; i++){
        printf("Array[%d]: %d\n", i, *(array + i));
    }
}

int main(){

    int * array = NULL;
    array = (int*) malloc (5 * sizeof(int));
    int tamanho = (sizeof(array) * 5)/sizeof(int); //refazer o tamanho
    lerArray(array, tamanho);
    imprimirArray(array, tamanho);

    free(array);
}