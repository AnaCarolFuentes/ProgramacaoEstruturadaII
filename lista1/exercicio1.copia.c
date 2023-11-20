#include <stdio.h>
#include <stdlib.h>
/*
1) Crie um arquivo Exercicio1.c e dentro do arquivo crie a função main. Defina duas
variáveis inteiras e atribua um valor para cada uma delas. Mande o programa exibir o valor da
soma, multiplicação, divisão e subtração.
*/
int soma(int, int);
int multiplicacao(int, int);
float divisao(int, int);
int subtracao(int, int);

int main(){
    int n1, n2;
    float div;

    printf("Digite o n1: ");
    scanf("%d", &n1);
    printf("Digite o n2: ");
    scanf("%d", &n2);

    printf("\n****Calculadora***\n");
    printf("n1 + n2 = %d\n", soma(n1, n2));
    printf("n1 * n2 = %d\n", multiplicacao(n1, n2));
    printf("n1 / n2 = %.2f\n", divisao(n1,n2)); //O resultado ta dando 0
    printf("n1 - n2 = %d\n", subtracao(n1, n2));

    return 0;
}

int soma(int n1, int n2) {
 return n1 + n2;
}
int multiplicacao(int  n1, int n2){
 return n1 * n2;
}
    
float divisao(int n1, int n2){
    return (n1 / n2);
}
int subtracao(int n1, int n2){
    return n1- n2;
}