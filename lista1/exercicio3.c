#include <stdio.h>
#include <stdlib.h>

#define INT_MIN -2147483647
/*
3) Crie um arquivo Exercicio3.c e dentro do arquivo crie a função main. Defina duas
variáveis do tipo float e atribua um valor para cada uma delas. Mande o programa exibir qual
delas é maior.
*/
int retornaMenor (int, int);

int main(){
    int n1 = 4;
    int n2 = 4;

    if(retornaMenor(n1, n2) == n1){
        printf("%d < %d", n1, n2);
    } 
        else if(retornaMenor(n1, n2) == -1){
            printf("%d = %d", n1, n2);
    }
            else{
                printf("%d < %d", n2, n1);
    }

    return 0;
}

int retornaMenor (int n1, int n2){
    if (n1 < n2){
        return n1;
    } else if (n1 == n2){
        return -1;
    } else{
        return n2;
    }

    
}