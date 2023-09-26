#include <stdio.h>
#include <stdlib.h>

int main(){

int x, y, *p; 
y = 0;  
p =&y;  
x = *p;  
x = 4; 
(*p)++;  
--x;  
(*p) += x;

    printf("%d\n", x); //3
    printf("%d\n", y); //4
    printf("%d\n", *p); //4
}
