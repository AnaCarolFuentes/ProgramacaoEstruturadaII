#include <stdio.h>
#include <stdlib.h>

/*
1 - Crie um programa que:
(a) Aloque dinamicamente um array de 5 números inteiros,
(b) Peça para o usuário digitar os 5 números no espaço alocado,
(c) Mostre na tela os 5 números,
(d) Libere a memória alocada.
*/

void lerArray (int * array)
{
    for(int i = 0; i < 5; i++)
    {
        printf("Digite o numero da posicao %d: ", i);
        scanf("%d", (array + i));
    }
}

void imprimirArray (int * array)
{
    for(int i = 0; i < 5; i++)
    {
        printf("Array[%d] = %d\n", i, *(array + i));
    }
}

int main(){
    
    int * array;
    array = (int*) malloc (5 * sizeof(int));

    lerArray(array);
    imprimirArray(array);

    free(array);

    return 0;
}