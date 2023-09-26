#include <stdio.h>
#include <stdlib.h>

// 6 - Faça um programa que simule a memória de um computador: o usuário irá especificar
// o tamanho da memória, ou seja, quantos bytes serão alocados do tipo inteiro. Para tanto,
// a memória solicitada deve ser um valor múltiplo do tamanho do tipo inteiro. Em seguida,
// o usuário terá 2 opções: inserir um valor em uma determinada posição ou consultar o
// valor contido em uma determinada posição. A memória deve iniciar com todos os dados
// zerados.

int main()
{
    int opcao = 10;
    int tamanho = 0;
    int posicao = 0;
    int valor = 0;

    printf("Digite o numero de bytes que sera alocado: ");
    scanf("%d", &tamanho);

    while(tamanho % 4 != 0)
    {
        printf("OPS! O numero precisa ser um multiplo de 4. Digite outro valor: ");
        scanf("%d", &tamanho);
    }

    tamanho = (tamanho/sizeof(int));

    int * vetor = (int*) calloc (tamanho, sizeof(int));

    do
    {
        printf("\nDigite uma opcao: ");
        scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1:
        printf("Digite a posicao desejada: ");
        scanf("%d", &posicao);
        printf("Digite o valor: ");
        scanf("%d", &valor);
        vetor[posicao] = valor;
        break;
    case 2:
        printf("Digite a posicao desejada: ");
        scanf("%d", &posicao);
        printf("\n%d", vetor[posicao]);
        break;
    case 3: 
        for(int i = 0; i < tamanho; i++){
            printf("Vetor[%d] = %d\n", i, *(vetor + i));
        }
        break;
    case 0: 
        printf("Saindo...\n");
        break;
    default:
        printf("Opcao invalida!\n");
        break;
    }

    } while (opcao != 0);

    free(vetor);
    return 0;
}