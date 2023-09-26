#include <stdio.h>

int main()
{
    int x = 100, *p, **pp;
    p = &x;
    pp = &p;
    printf("Valor de pp: %d\n", **pp);
    return 0;
}