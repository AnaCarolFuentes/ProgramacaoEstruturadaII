#include <stdio.h>
#include <stdlib.h>

// 9 - Faça um programa que leia uma quantidade qualquer de números armazenando-os na
// memória e pare a leitura quando o usuário entrar um número negativo. Em seguida,
// imprima o vetor lido. Use a função REALLOC.

int main() {
    int *numbers = NULL; // Ponteiro para armazenar os números
    int num;
    int count = 0;

    printf("Digite uma sequência de números (digite um número negativo para parar):\n");

    while (1) {
        scanf("%d", &num);

        if (num < 0) {
            break; // Encerra o loop quando um número negativo for inserido
        }

        // Aloca espaço para mais um número no vetor
        numbers = (int *)realloc(numbers, (count + 1) * sizeof(int));

        if (numbers == NULL) {
            printf("Erro ao alocar memória.\n");
            exit(1);
        }

        // Armazena o número no vetor
        numbers[count] = num;
        count++;
    }

    printf("Números lidos: ");
    
    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }

    // Libera a memória alocada
    free(numbers);

    return 0;
}
