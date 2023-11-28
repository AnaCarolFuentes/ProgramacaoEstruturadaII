#include <stdio.h>
#include <stdlib.h>

/*
3 - Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a
alocação dinâmica de memória. Em seguida, leia do usuário seus valores e mostre quantos
dos números são pares e quantos são ímpares.
*/

void lerVetor (int * array, int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("Array[%d]: ", i);
        scanf("%d", (array + i));
    }
}

void imprimirVetor (int * array, int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("Array[%d]: %d\n", i, *(array + i));    
    }    
}
int contPar (int * array, int tamanho){
    int contPar = 0;
    for(int i = 0; i < tamanho; i++){
        if((*(array + i) % 2) == 0)
            contPar++;
    }
    return contPar;
}


int main()
{
   int * array = NULL;
   int tamanho;

   printf("Digite o tamanho do vetor: ");
   scanf("%d", &tamanho);

   array = (int*) malloc (tamanho * sizeof(int));

    lerVetor (array, tamanho);
    imprimirVetor (array, tamanho);
    
    printf("Pares = %d\n", contPar(array, tamanho));
    printf("Impares = %d\n", (tamanho - contPar(array, tamanho)));

    free(array);

    return 0;
}
