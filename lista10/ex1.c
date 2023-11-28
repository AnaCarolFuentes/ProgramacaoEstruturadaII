#include <stdio.h>
#include <stdlib.h>

// Exercicio 1 - Fazer um programa em C com a fun ̧c ̃ao potencia que recebe dois n ́umeros
// inteiros x e y por parˆametro e retorna o valor de x elevado a y.
//pow(numero, expoente)

int potencia (int, int);

int main(){
    int n1 = 7;
    int n2 = 2;

    printf("%d ^ %d = %d", n1, n2, potencia(n1, n2));

    return 0; 
}



int potencia(int x, int y){
    int resultado = 1;

    for(int i = 0; i < y; i++){
        resultado *= x;
    }

    return resultado;
}