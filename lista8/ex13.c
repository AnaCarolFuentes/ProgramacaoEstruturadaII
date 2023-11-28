#include <stdio.h>
#include <stdlib.h>

// 13 - Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de
// dimensões definidas pelo usuário e a leia. Em seguida, implemente uma função que
// receba um valor, retorne 1 caso o valor esteja na matriz ou retorne 0 caso não esteja na
// matriz.
int ** alocaDinamicamenteMatriz (int linhas, int colunas)
{
    int ** matriz = (int **) malloc (linhas * sizeof(int*));
    for(int i = 0; i < linhas; i++){
        matriz[i] = (int *) malloc (colunas * sizeof(int));
    }

    return matriz;
}

void lerMatriz (int **matriz, int linhas, int colunas){

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", *(matriz + i) + j);
        }
    }
}

void imprimirMatriz (int **matriz, int linhas, int colunas){

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Matriz[%d][%d]: %d\n", i, j, matriz[i][j]);
        }
    }
}

void liberarMatriz(int **matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]); // Libera cada linha
    }
    free(matriz); // Libera os ponteiros para as linhas
}

int main(){

    int ** matriz = NULL;
    int linhas, colunas;
    //supondo que seja uma matriz 2 / 2;

   linhas = 3; 
   colunas = 3;

    matriz = alocaDinamicamenteMatriz(linhas, colunas);
    lerMatriz(matriz, linhas, colunas);
    imprimirMatriz(matriz, linhas, colunas);
    liberarMatriz(matriz, linhas);

}

