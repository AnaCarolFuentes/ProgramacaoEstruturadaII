#include <stdio.h>

int main() {
    int tamanho = 20;
    int vetor[tamanho];
    int vetorTrocado[tamanho];

    // Lê os elementos do vetor
    printf("Digite os %d elementos do vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    // Gera o vetor com posições pares e ímpares trocadas
    for (int i = 0; i < tamanho; i++) {
        if (i % 2 == 0) {
            // Se a posição for par, pegue o valor da próxima posição ímpar
            vetorTrocado[i] = vetor[i + 1];
        } else {
            // Se a posição for ímpar, pegue o valor da posição anterior par
            vetorTrocado[i] = vetor[i - 1];
        }
    }

    // Imprime o vetor original
    printf("Vetor original: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Imprime o vetor com posições pares e ímpares trocadas
    printf("Vetor com posições pares e ímpares trocadas: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorTrocado[i]);
    }
    printf("\n");

    return 0;
}
