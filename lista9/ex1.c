#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1 – Faça um programa em C que leia o nome, a idade e o endereço de uma pessoa e
// armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
// estrutura lida.
typedef struct{
    char rua[50];
    unsigned int numero;
    char bairro[50];
    char cidade[50];
}Endereco;

typedef struct{
    char nome[50];
    unsigned int idade;
    Endereco endereco;
}Pessoa;

int main(){

    Pessoa p1;
    printf("Digite o nome: ");
    scanf("%[^\n]", p1.nome);
    printf("Digite a idade: ");
    scanf("%d", &p1.idade);
    printf("Digite o nome da rua: ");
    scanf("%s", p1.endereco.rua);
    printf("Digite o nome da bairro: ");
    scanf("%s", p1.endereco.bairro);
    printf("Digite o nome da cidade: ");
    scanf("%s", p1.endereco.cidade);
    printf("Digite o numero da casa ");
    scanf("%d", &p1.endereco.numero);

    printf("Nome: %s\n", p1.nome);
    printf("Idade: %d\n", p1.idade);
    printf("Rua: %s\n", p1.endereco.rua);
    


}