#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Exercicio 2 - Fazer um programa em C que tenha a funcao digito(N, K) para determinar o
// valor do k- ́esimo digito da direita para a esquerda de um numero inteiro N.
// Ex:
// digito(379836,3) = 8
// digito(567,8) = 0

int digito (int n, int k){

    float divisao = 0;
    float resto = 0;
    divisao = n / (pow(10, k));
    
}
