#include <stdio.h>
#include <stdlib.h>

// 13 - Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de
// dimensões definidas pelo usuário e a leia. Em seguida, implemente uma função que
// receba um valor, retorne 1 caso o valor esteja na matriz ou retorne 0 caso não esteja na
// matriz.
int procurarValor(int **, int);

int main(){
    int linha = 0;
    int coluna = 0;
    
    printf("Informe a quantidade de linhas: ");
    scanf("%d", &linha);
    printf("Informe a quantidade de colunas: ");
    scanf("%d", &coluna);

    int **matriz = calloc (linha, sizeof(int*));
    for(int i = 0; i < linha; i++){
        matriz[i] = calloc (coluna, sizeof(int));
    }

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", matriz[i][j]);
        }
    }
}

int procurarValor (int **matriz, int valor){

}

