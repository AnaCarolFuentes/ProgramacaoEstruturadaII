#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Exerc ́ıcio 4 - Fazer um programa em C que tenha a fun ̧c ̃ao MIX, para receber dois valores
// literais como parˆametros e retornar o conte ́udo dos literais intercalados, caracter a caracter.
// Ex: MIX(“ABCD”, “EFGH”) = “AEBFCGDH”
// MIX(“AAAA”, “BBBB”) = “BAABABAB”
// MIX(“primeiro”, “segundo”) = “psreigmuenidroo”

char * MIX(char *, char *);

int main(){

    
    char * palavra1 = NULL;
    palavra1 = "ABCD";
    char * palavra2 = "EFGH";

    char * resultado = MIX(palavra1, palavra2);
    printf("%s", resultado);

}

char * MIX(char * palavra1, char * palavra2){
    int tamanho = strlen(palavra1) + strlen (palavra2);
    char * palavraInvertida[tamanho];
    int cont = 0;

    for(int i = 0; i < strlen(palavra1); i++){
            palavraInvertida[cont] = palavra1[i];
            cont+=2;
    }
    cont = 1;
    for(int i = 0; i < strlen(palavra2); i++){
            palavraInvertida[cont] = palavra2[i];
            cont+=2;
    }

    return palavraInvertida;
}
//Corrigir