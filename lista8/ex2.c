#include <stdio.h>
#include <stdlib.h>

/*
2 - Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a
alocação dinâmica de memória. Em seguida, leia do usuário seus valores e imprima o
vetor lido.
*/

void lerVetor(int * vetor, int tamanho)
{
    for(int i = 0; i < tamanho; i++)
    {
        printf("Vetor[%d]: ", i);
        scanf("%d", (vetor + i));
    }
}
void imprimirVetor(int * vetor, int tamanho)
{
    for(int i = 0; i < tamanho; i++)
    {
        printf("Vetor[%d] = %d\n", i, *(vetor + i));
    }
}

int main()
{
    int * vetor = NULL;
    int tamanho = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int*) malloc (tamanho * sizeof(int));

    lerVetor(vetor, tamanho);
    imprimirVetor(vetor, tamanho);

    free(vetor);
    return 0;

}