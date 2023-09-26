#include <stdio.h>
#include <stdlib.h>

#define LINHA 3
#define COLUNA 3

// 4 – Fazer um programa em C para ler uma matriz A (10 x 10) e gerar uma outra matriz
// da seguinte forma:
// a) Trocar a 2a linha com a 5a coluna.
// b) Multiplicar por 2 a diagonal principal.
// c) Trocar a 10a coluna com a 3a coluna
// d) Trocar a última linha pela soma da 8a coluna com a 9a coluna
// e) Imprimir a matriz resultante

int main(){
    int matriz[LINHA][COLUNA] = {0};

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            printf("MATRIZ[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);   
        }
    }

    //TROCAR A SEGUNDA LINHA COM A QUINTA COLUNA
    int aux[LINHA][COLUNA] = {0};

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(i == 1){
                    aux[i][j] = matriz[i][j];
                    matriz[i][j] = matriz[j][i];
                    matriz[j][i] = aux[i][j];
            } else
            break;
        }
    }

    //MULTIPLICAR A DIAGONAL PRINCIPAL POR 2
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(i == j){
                matriz[i][j] = 2 * matriz[i][j];
            } 
        }
    }
    
     //Trocar a última linha pela soma da 8a coluna com a 9a coluna
    //  for(int i = 0; i < LINHA; i++){
    //      for(int j = 0; j < COLUNA; j++){
    //          if(i == (LINHA - 1)){
    //              matriz[i][j] = matriz[i][0] + matriz[i][1];
    //          }
    //      }
    //  }

   //TROCAR A 10 coluna COM A TERCEIRA COLUNA
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(j == (COLUNA - 1)){
                    aux[i][j] = matriz[i][j];
                    matriz[i][j] = matriz[i][2];
                    matriz[i][2] = aux[i][j];
            }
        }
    }

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            printf("\nMATRIZ[%d][%d]: ", i, j);
            printf("%d", matriz[i][j]);   
        }
    }

    return 0;

        
}


