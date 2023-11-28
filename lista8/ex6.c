#include <stdio.h>
#include <stdlib.h>

// 6 - Faça um programa que simule a memória de um computador: o usuário irá especificar
// o tamanho da memória, ou seja, quantos bytes serão alocados do tipo inteiro. Para tanto,
// a memória solicitada deve ser um valor múltiplo do tamanho do tipo inteiro. Em seguida,
// o usuário terá 2 opções: inserir um valor em uma determinada posição ou consultar o
// valor contido em uma determinada posição. A memória deve iniciar com todos os dados
// zerados.

int * alocarVetorDinamicamente (int tamanho) {
   
    int * array = (int*) malloc (tamanho * sizeof (int));
    
    return array;
}

void lerArray (int * array, int tamanho)
{
    for(int i = 0; i < tamanho; i++) {
        printf("Vetor[%d] : ", i);
        scanf("%d", (array + i));
    }
}

void imprimirArray (int * array, int tamanho){
    
    for(int i = 0; i < tamanho; i++){
        printf("Vetor[%d] : %d\n", i, *(array + i));
    }
}

void consultarValor (int * array, int tamanho, int posicao){
    for(int i = 0; i < tamanho; i++){
        if(i == posicao){
            printf("Valor consultado = %d\n", *(array + i));
            break;
        }
    }
}

int * inserirValor (int * array, int tamanho, int posicao, int valor){

    array = (int *) realloc (array, (++tamanho) * sizeof(int));
    int cont = 0;
    tamanho--;
    do
    {
        array[tamanho] = array[tamanho - 1];
        tamanho--;
        cont++;
        if(posicao == cont){
            array[cont] = valor;
        }
    }while (tamanho >= 0);

    return array;
}
int lerTamanho (){
    int tamanho = 3;
    while (tamanho % 4 != 0){
        printf("Digite o tamanho da memória: ");
        scanf("%d", &tamanho);
    }
    return tamanho/4;
}

int main()
{
    int tamanho = lerTamanho();
    int * array = alocarVetorDinamicamente(tamanho);
    lerArray(array, tamanho);

    int opcao = 0;

    do{
            printf("\n---------Menu Opcoes---------------\n");
            printf("1- Inserir valor em qualquer posicao\n");
            printf("2- Consultar valor em qualquer posicao\n");

            printf("Digite a opcao desejada: ");
            scanf("%d", &opcao);

        switch (opcao)
        {
        int posicao;
        int valor;
        case 1:
            printf("\nDigite a posicao que deseja inserir o valor: ");
            scanf("%d", &posicao);
            printf("\nDigite o valor que deseja inserir: ");
            scanf("%d", &valor);
            inserirValor (array, tamanho, posicao, valor);
            tamanho++;
            imprimirArray(array, tamanho);
            break;
        case 2:
            printf("\nDigite a posicao que deseja consultar o valor: ");
            scanf("%d", &posicao);
            consultarValor(array, tamanho, posicao);
            break;

        case -1:
            printf("Saindo...");
            break;
        
        default:
            printf("Inválido!\n");
            break;
        }
}  while(opcao != -1);

    free(array);
    return 0;

}

//problema: to perdendo a referencia do ultimo valor -> Perguntar pro Simon 