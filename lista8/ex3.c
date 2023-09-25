#include <stdio.h>
#include <stdlib.h>

/*
3 - Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a
alocação dinâmica de memória. Em seguida, leia do usuário seus valores e mostre quantos
dos números são pares e quantos são ímpares.
*/

int main()
{
    int *v;
    int num_posicoes, contPar, contImpar;
    contImpar = 0;
    contPar = 0;

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
        if(((*(v + i)) % 2) == 0)
        {
            contPar++;
        } 
        else
        {
            contImpar++;
        }
    }

        printf("Numeros pares: %d ", contPar);
        printf("Numeros impares: %d ", contImpar);

    free(v);
    return 0;
}
