#include <stdio.h>
#include <stdlib.h>


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
}