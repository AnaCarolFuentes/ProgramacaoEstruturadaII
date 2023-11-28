#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Exerc ́ıcio 3 - Fazer um programa em C para ler uma palavra e imprimi-la ivnertida na tela.
// Ex: FACCAT → TACCAF
// Utilizar o procedimento invertePalavra para resolver este exerc ́ıcio.
// Nome: invertePalavra
// Entrada: uma palavra
// Saida: a mesma palavra com suas letras em ordem inversa

void invertePalavra (char[]);

int main(){

    char palavra[5] = "Carol";
    invertePalavra(palavra);

}



void invertePalavra (char palavra[]){
    int aux = strlen(palavra);
    char palavraInvertida[aux];

    for(int i = (aux-2); i >= 0; i--){
        printf("%c", palavra[i]);
    }

    
}