#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Exerc ́ıcio 3 - Fazer um programa em C para ler uma palavra e imprimi-la ivnertida na tela.
// Ex: FACCAT → TACCAF
// Utilizar o procedimento invertePalavra para resolver este exerc ́ıcio.
// Nome: invertePalavra
// Entrada: uma palavra
// Saida: a mesma palavra com suas letras em ordem inversa

void invertePalavra(char[]);

int main(){

    int tamanho;
    char palavra[100];


    printf("Digite o conteudo da palavra: ");
    scanf("%s", palavra);

    invertePalavra(palavra);
    
    return 0;

    
}

void invertePalavra(char palavra[]){

    int aux = strlen(palavra);  

    for(int i = aux - 1; i >= 0; i--){
        printf("%c", palavra[i]);
    }

}