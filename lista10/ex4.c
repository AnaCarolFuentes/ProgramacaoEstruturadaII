#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Exerc ́ıcio 4 - Fazer um programa em C que tenha a fun ̧c ̃ao MIX, para receber dois valores
// literais como parˆametros e retornar o conte ́udo dos literais intercalados, caracter a caracter.
// Ex: MIX(“ABCD”, “EFGH”) = “AEBFCGDH”
// MIX(“AAAA”, “BBBB”) = “ABABABAB”
// MIX(“primeiro”, “segundo”) = “psreigmuenidroo”

char * MIX(char *, char *);

int main(){

    
    char * palavra1 = "ABCD";
    char * palavra2 = "EFGH";

    printf("%s", MIX(palavra1, palavra2));

}

char * MIX(char * palavra1, char * palavra2){
    int tamanho = (strlen(palavra1) + strlen(palavra2));
    char * mix = (char*) malloc (tamanho * sizeof(char));

    for(int i = 0; i < tamanho; i++) {
        mix[i] = palavra1[i];

        if((i + 1) > tamanho){
            break;
        }
    
        mix[i + 1] = palavra2[i];
    }

    return mix;
}