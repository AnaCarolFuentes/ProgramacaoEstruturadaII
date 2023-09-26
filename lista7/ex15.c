#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10, *px = &x, **ppx = &px;
    float y = 5.9, *py = &y, **ppy = &py;
    int teste = *px - 1;

    printf("Endereco para onde px aponta: %d\n", px);
    printf("Endereco para onde py aponta: %d\n", py);
    printf("Endereco para onde py aponta mais incremento: %d\n", (py++));
    printf("Endereco px: %d\n", &px);
    printf("Endereco py: %d\n", &py);
    printf("Endereco para onde ppx aponta: %d\n", ppx);
    printf("Endereco para onde ppy aponta: %d\n", ppy);
    printf("py++: %d\n", py++);
    printf("Conteudo de px -- %d\n", teste);
    printf("**ppx %d\n", **ppx);
    printf("**ppx++ %d\n", **ppx + 1);

}