#include <stdio.h>
#include <stdlib.h>

// Exerc ́ıcio 5 - Fazer um programa em C que tenha a fun ̧c ̃ao troca, para receber dois valores
// inteiros como parˆametros e trocar o conte ́udo das vari ́aveis sem utilizar uma terceira vari ́avel
// auxiliar.

void troca( int *, int *);

int main(){
    int x = 10; 
    int y = 30;

    troca(&x, &y);
    printf("x = %d e y = %d", x, y);
}

void troca( int * a, int * b){
    
    *a = *a + *b; 
    *b = *a - *b;
    *a = *a - *b;
}