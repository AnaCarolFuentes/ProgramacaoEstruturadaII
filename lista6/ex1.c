#include <stdio.h>
#include <stdlib.h>

// 1 – Uma locadora de vídeos tem guardada, em um vetor de 50 posições, a quantidade de
// filmes retirados por seus clientes durante o ano de 2017. Agora, esta locadora está fazendo
// uma promoção e, para cada 10 filmes retirados, o cliente tem direito a uma locação grátis.
// Faça um algoritmo que crie outro vetor contendo a quantidade de locações gratuitas a que
// cada cliente tem direito.


int main(){
    int vetor1[10] = {20, 30, 67, 4, 26, 97, 102, 78, 26, 65};
    int vetor2 [10] = {0};
    int aux = 0;

    for(int i = 0; i < 10; i++){
        int cont = 0;
        while (vetor1[i] >= 10){
            vetor1[i] -= 10;
            cont++;
        }
        vetor2[i] = cont;
        aux++;              
    }

    for(int i = 0; i < 10; i++){
        printf("Vetor[%d] = %d\n", i, vetor2[i]);
    }
}