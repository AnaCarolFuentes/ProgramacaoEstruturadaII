#include <stdio.h>
#include <stdlib.h>

/*1) Crie um arquivo Exercicio1.c e dentro do arquivo crie a função main. Usando a
estrutura de repetição for exibir os números ímpares de 0 a 100.
*/

int main(){

    for(int i = 1; i < 100; i+=2){
        printf("%d - ", i);
    }
    return 0;
}