#include <stdio.h>
#include <stdlib.h>

/*
1 - Crie um programa que:
(a) Aloque dinamicamente um array de 5 números inteiros,
(b) Peça para o usuário digitar os 5 números no espaço alocado,
(c) Mostre na tela os 5 números,
(d) Libere a memória alocada.
*/

int main()
{

    int *p;
    p = (int*) malloc(5 * sizeof(int));
    
    for(int i = 0; i < 5; i++)
    {
        printf("Digite a posicao %d do vetor: ", i);
        scanf("%d", (p + i)); //A aritmetica de ponteiro consegue acessar mais rapido as posicoes 
    }
    for(int i = 0; i < 5; i++)
    {
        printf("vetor[%d] = %d\n", i, *(p + i));
    }
    free(p);
    
    return 0;
}