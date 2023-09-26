#include <stdio.h>
#include <stdlib.h>

// Exercicio 1 - Fazer um programa em C com a fun ̧c ̃ao potencia que recebe dois n ́umeros
// inteiros x e y por parˆametro e retorna o valor de x elevado a y.
//pow(numero, expoente)

int potencia (int, int);

int main(){
    int base, expoente;

    printf("Digite o valor da base: ");
    scanf("%d", &base);
    printf("Digite o valor do expoente: ");
    scanf("%d", &expoente);

    printf("Resultado: %d", potencia(base, expoente));

    return 0;
}

int potencia (int x, int y){

    int resultado = 1;
    for(int i = 0; i < y; i++){
        resultado = resultado * x;
    }
    return resultado;
}