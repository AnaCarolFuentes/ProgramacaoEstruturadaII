#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
2) Crie um arquivo Exercicio2.c e dentro do arquivo crie a função main. Defina uma
variável inteira e atribua um valor para ela. Mande o programa exibir “Eh par!” se o valor
atribuído for par e “Eh impar!”, caso contrário. Use o operador % para verificar se o valor é par.
*/

bool verificaPar (int *);

int main(){
    int *n1; 
    int num1 = 21;
    n1 = &num1;

    if(verificaPar(n1) == true)
        printf("eh par!\n");
    else
        printf("eh impar!\n");

    return 0;
}

bool verificaPar (int * n1){
    if(((*n1) % 2) == 0){
        return true;
    } else 
        return false;
}