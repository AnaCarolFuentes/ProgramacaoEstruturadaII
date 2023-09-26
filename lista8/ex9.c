#include <stdio.h>
#include <stdlib.h>

// 9 - Faça um programa que leia uma quantidade qualquer de números armazenando-os na
// memória e pare a leitura quando o usuário entrar um número negativo. Em seguida,
// imprima o vetor lido. Use a função REALLOC.

int main()
{

    int num = 0;
    int * vetor = NULL;
    int cont = 0;

    do{
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num < 0){
            break;
        }
        
        vetor = (int*) realloc (vetor, (cont + 1) * sizeof(int));
        *(vetor + cont) = num;
        cont++;
    } while (num >= 0);


    for(int i = 0; i < cont; i++){
        printf("Vetor[%d] = %d\n", i, *(vetor + i));
    }

    free(vetor);

    return 0;
}