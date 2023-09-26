#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 3 – Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve
// conter o número de matrícula do aluno e as notas de três provas. Agora, escreva um
// programa em C que leia os dados de cinco alunos e os armazene nessa estrutura. Em
// seguida, exiba o nome e as notas do aluno que possui a maior média geral dentre os cincos.

typedef struct{
    int matricula;
    float n1;
    float n2;
}Aluno;

int main(){
    Aluno aluno[2];

    for(int i = 0; i < 2; i++){
        printf("Aluno %d", i);
        scanf("%d", &aluno[i].matricula);
        scanf("%f", &aluno[i].n1);
        scanf("%f", &aluno[i].n2);
    }


}