#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 7 - Escreva um programa que leia primeiro os 6 números gerados pela loteria e depois os
// 6 números do seu bilhete. O programa então compara quantos números o jogador acertou.
// Em seguida, ele aloca espaço para um vetor de tamanho igual a quantidade de números
// corretos e guarda os números corretos nesse vetor. Finalmente, o programa exibe os
// números sorteados e os seus números corretos.

int main(){

    int numGerados[6] = {1,2,3,4,5,6};
    int numBilhete[6] = {2,2,9,4,4,7};
    int contador = 0;
    

    for(int i = 0; i < 6; i++){
        bool repete = false;
        for(int j = 0; j < 6; j++){
            if(numGerados[i] == numBilhete[j]){
                repete = true;
        }

        if(repete == false){
            //terminar
        }
    }
    }
    int * acertos = (int*) malloc(contador * sizeof(int));

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(numGerados[i] == numBilhete[j]){
                *(acertos + j) = numGerados[i];
        }
    }
    }

    for(int i = 0; i < contador; i++){
        printf("%d ,", *(acertos + i));
    }


//refazer 
}