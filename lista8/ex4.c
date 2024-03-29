#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
4 - Faça um programa que receba do usuário o tamanho de uma string e chame uma
função para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o
conteúdo dessa string. O programa imprime a string sem suas vogais.
*/
char * alocaDinamicamenteString (int tamanho)
{
    char * p = (char*) malloc (tamanho * sizeof(char));

    return p;

}

void removeVogais (char * p, int tamanho)
{
    int aux = 0;
    for(int i = 0; i < tamanho ; i++)
    {
        if(p[i] != 'A' && p[i] != 'a' &&
           p[i] != 'E' && p[i] != 'e' &&
           p[i] != 'I' && p[i] != 'i' &&
           p[i] != 'O' && p[i] != 'o' &&
           p[i] != 'U' && p[i] != 'u')
           {
            printf("%c", p[i]);
           }
    } 
}

int main(){

    char * p;
    int tamanho;

    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);

    p = alocaDinamicamenteString(tamanho);
   
    printf("Digite o conteudo da string: ");
    scanf("%s", p);

    printf("Palavra: %s\n", p);
    removeVogais(p, tamanho);

    free(p);

    //ERRO: funcao removeVogais 

    return 0;

}