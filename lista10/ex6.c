#include <stdio.h>
#include <stdlib.h>
/*
Fazer um programa em C para ler uma sequˆencia de n ́umeros inteiros (at ́e ler
0 e determinar quais desses n ́umeros s ̃ao divprimos. Um n ́umero  ́e divprimo se o n ́umero de
divisores dele for primo.
Ex:
O n ́umero 7  ́e divprimo, pois 7 tem 2 divisores (1 e 7) e 2  ́e primo.
Mas o n ́umero 12 n ̃ao  ́e divprimo, pois 12 tem 6 divisores (1, 2, 3, 4, 6 e 12) e 6 n ̃ao  ́e primo.
*/

int main(){
    int * vetor = NULL;
    int cont = 0;
    int numero = 0;

    do 
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if(numero != 0){
            vetor = (int *) realloc(vetor, (cont + 1) * sizeof(int));
            *(vetor + cont) = numero;
            cont++;
        }
    } while (numero != 0);

    printf("PRIMOS: ");
    
    for(int i = 0; i < cont; i++){
        int contador = 0;
        for(int j = 2; j < (vetor[i] / 2); j++){
            if(vetor[i] % j == 0){
                contador++;
            }
        }
        if(contador == 0){
            printf("%d ,", vetor[i]);
        }
    }

//refazer
}