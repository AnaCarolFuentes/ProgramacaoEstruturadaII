#include <stdio.h>
#include <stdlib.h>

/*
2 - Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a
alocação dinâmica de memória. Em seguida, leia do usuário seus valores e imprima o
vetor lido.
*/

int main()
{
    int *v;
    int num_posicoes;

    printf("Digite o numero de posicoes do vetor: ");
    scanf("%d", &num_posicoes);

    v = (int*) malloc (num_posicoes * sizeof(int));

    for(int i = 0; i < num_posicoes; i++)
    {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", (v + i));
    }
    for(int i = 0; i < num_posicoes; i++)
    {
        printf("Vetor[%d] = %d\n", i, *(v + i));
    }
    free(v);
    return 0;
}