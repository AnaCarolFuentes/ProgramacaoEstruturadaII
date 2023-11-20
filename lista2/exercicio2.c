#include <stdio.h>
#include <stdlib.h>

    /*2) Crie um arquivo Exercicio2.c e dentro do arquivo crie a função main. Usando a
estrutura de repetição while exibir os múltiplos de 100 até o valor 1000.*/

int main(){

    int n1 = 100;

    while(n1 <= 1000){
        if (n1 % 100 == 0){
            printf("%d - ", n1);
        }
        n1++;
    }

    return 0;
}