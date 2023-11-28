#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Exercicio 2 - Fazer um programa em C que tenha a funcao digito(N, K) para determinar o
// valor do k- ́esimo digito da direita para a esquerda de um numero inteiro N.
// Ex:
// digito(379836,3) = 8
// digito(567,8) = 0

int digito (int n, int k){

    int resto = n / (pow(10, (k-1)));
    
    return resto % 10;
}

int main(){
    int i = 567;
    int j = 2;

    printf("%d", digito(i, j));

    return 0;

}
