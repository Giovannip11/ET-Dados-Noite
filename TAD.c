/*
Terminar usando TAD
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int a;
    int b;
}Racional;




Racional cria_racional(int x,int y){
    if(y==0){
    printf("zero");
    }
    Racional*racional = (Racional*) malloc(sizeof(*racional));
    racional->a=x;
    racional->b=y;

    return *racional;
}

Racional mult(int x, int y){
    cria_racional(x,y);
    mult(x,y);
    mult(x,y);
}
int main() {


    return 0;
}
