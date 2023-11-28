#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
11 - Crie um programa que declare uma estrutura (registro) para o cadastro de alunos.
(a) Deverão ser armazenados, para cada aluno: matrícula, sobrenome (apenas um) e ano
de nascimento.
(b) Ao início do programa, o usuário deverá informar o número de alunos que serão
armazenados
(c) O programa devera alocar dinamicamente a quantidade necessária de memória para
armazenar os registros dos alunos.
(d) O programa deverá pedir ao usuário que entre com as informações dos alunos.
(e) Ao final, mostrar os dados armazenados e liberar a memória alocada.
*/

typedef struct {
    int matricula;
    char sobrenome[20];
    int anoNascimento;
} Aluno;

Aluno * alocaDinamicamente (int tamanho){

    Aluno * lista = (Aluno *) malloc (tamanho * sizeof(Aluno));

    return lista;
}

void lerListaDeAlunos (Aluno * lista, int tamanho){

    for(int i = 0; i < tamanho; i++){
        printf("Matricula do aluno %d: ", i + 1);
        scanf("%d", &(lista + i)->matricula);
        printf("Sobrenome do aluno %d: ", i + 1);
        scanf("%s", (lista + i)->sobrenome);
        printf("Ano Nascimento do aluno %d: ", i + 1);
        scanf("%d", &(lista + i)->anoNascimento);
        printf("--------------------\n");
    }
}

void imprimirListaDeAlunos (Aluno * lista, int tamanho){

    for(int i = 0; i < tamanho; i++){
        printf("--------------------\n");
        printf("\n\nAluno: %d", i + 1);
        printf("\n--------------------\n");
        printf("\nMatricula do aluno: %d ", ((lista + i)->matricula));
        printf("\nSobrenome do aluno: %s", ((lista + i)->sobrenome));
        printf("\nAno Nascimento do aluno: %d", ((lista + i)->anoNascimento));
        printf("\n--------------------\n\n");
    }
}
int main(){

    int tamanhoLista;
    Aluno * lista = NULL;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &tamanhoLista);

    lista = alocaDinamicamente(tamanhoLista);

    lerListaDeAlunos(lista, tamanhoLista);
    imprimirListaDeAlunos(lista, tamanhoLista);


    free(lista);

    //checar o que pode estar errado
}

