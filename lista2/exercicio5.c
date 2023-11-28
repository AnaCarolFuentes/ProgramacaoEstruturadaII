#include <stdio.h>
#include <stdlib.h>

/*
5) Crie um arquivo Exercicio5.c e dentro do arquivo crie a função main. Usando alguma
estrutura de repetição imprima o 10o valor da sequencia de Fibonacci. O valor do 2o
elemento da sequência de Fibonacci é dado pela soma do 1o e do 0o
,onde:
• Fibonaaci de 0o é 1.
• Fibonacci de 1o é 1.
*/

int main(){

    int atual = 0;
    int proximo = 1;
    int valor = 0;
    int cont = 0;

    scanf("%d", &valor);

    do{
        printf(" %d -", atual);
        proximo += atual; 
        atual = proximo;
        cont++;
    }while (cont < valor);

}