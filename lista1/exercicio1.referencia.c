#include <stdio.h>

/*
1) Crie um arquivo Exercicio1.c e dentro do arquivo crie a função main. Defina duas
variáveis inteiras e atribua um valor para cada uma delas. Mande o programa exibir o valor da
soma, multiplicação, divisão e subtração.
*/
int soma(int *, int *);
int multiplicacao(int *, int *);
float divisao(int *, int *);
int subtracao(int *, int *);

int main(){
    int num1 = 5;
    int num2 = 6;
    int * n1;
    int * n2;
    n1 = &num1;
    n2 = &num2;

    printf("\n****Calculadora***\n");
    printf("n1 + n2 = %d\n", soma(n1, n2));
    printf("n1 * n2 = %d\n", multiplicacao(n1, n2));
    printf("n1 / n2 = %.2f\n",divisao(n1, n2)); //O resultado considerou apenas o valor absoluto
    printf("n1 - n2 = %d\n", subtracao(n1, n2));

    return 0;
}

int soma(int * n1, int * n2) {
 return *n1 + *n2;
}
int multiplicacao(int * n1, int * n2){
 return (*n1) * (*n2);
}
    
float divisao(int * n1, int * n2){
    return (*n1) / (*n2);
}
int subtracao(int * n1, int * n2){
    return (*n1)-(*n2);
}