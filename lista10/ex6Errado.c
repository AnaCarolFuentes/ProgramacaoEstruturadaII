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
    } while (numero != 0);+

    // int ajuda = 0;
    // do {
    //     int contador = 0;

    //     for(int i = 1; i < *(vetor + ajuda); i++) 
    //     {
    //         if(*(vetor + ajuda) % i == 0) {
    //             contador++;
    //         }
    //     }

    //     if(contador == 2) 
    //     {
    //         printf("%d", *(vetor + ajuda));
    //     }
    //     ajuda++;
    // } while(ajuda < cont);

    // for(int i = 0; i < cont; i++){
    //     printf("%d ,", vetor[i]);
    // }

//     int vetorPrimos[cont];
//     int aux = 0;
//     int resultado = 0;

//     for(int i = 0; i < cont; i++){
//         for(int j = 1; j < *(vetor + i); j++){
//             if(*(vetor + i) % j == 0){
//                 resultado++;
//                 break;
//             } 
//         }
//         if(resultado == 2){
//             vetorPrimos[aux] = *(vetor + i);
//             aux++;
//         }

//     }
//     printf("Primos:");
//     for (int i = 0; i < aux; i++){
//         printf(", %d", vetorPrimos[i]);
//     }
    
//     free(vetor);
//     return 0;
    
}
    


