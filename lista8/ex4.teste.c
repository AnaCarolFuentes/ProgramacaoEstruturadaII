#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * alocarString (int tamanho) {

    char * alocString = malloc(tamanho * sizeof(char));

    return alocString;
}

int main() {

    // 4 - Faça um programa que receba do usuário o tamanho de uma string e chame uma
    // função para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o
    // conteúdo dessa string. O programa imprime a string sem suas vogais.

    int tam = 0;

    scanf("%d", &tam);
    char * conteudo = alocarString(tam);

    scanf("%s", conteudo);

    printf("Sem vogais: ");

    char temp;

    for(int i = 0; i < tam; i++) {
        temp = conteudo[i];
        if( 
           temp != 'a' && temp != 'A' &&
           temp != 'e' && temp != 'E' && 
           temp != 'i' && temp != 'I' &&
           temp != 'o' && temp != 'O' && 
           temp != 'u' && temp != 'U') 
           {
            printf("%c", temp);
           }
    }

    free(conteudo);

    return 0;
}