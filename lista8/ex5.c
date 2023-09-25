#include <stdio.h>
#include <stdlib.h>

/*
5 - Faça um programa que leia um número N e:
• Crie dinamicamente e leia um vetor de inteiro de N posições;
• Leia um número inteiro X e conte e mostre os múltiplos desse número que existem no
vetor.
*/

int main()
{
    int num, tamanho;
    int * vetor;

    printf ("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int*) malloc(tamanho * sizeof(int));

    for(int i = 0; i < tamanho; i++)
    {
        printf("Vetor[%d]: ", i);
        scanf("%d", (vetor + i));
    }

    printf("Digite um numero: ");
    scanf("%d", &num);

    int cont = 0;

    for(int i = 0; i < tamanho; i++)
    {
        if((*(vetor + i) % num) == 0)
        {
            cont++;
            printf("%d ," , *(vetor + i));
        }
    }
    printf("\nTotal de Multiplos: %d\n", cont);

    free(vetor);

    return 0;
}