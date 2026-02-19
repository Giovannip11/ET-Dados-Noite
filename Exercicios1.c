//1)funcao de swap entre duas variaveis.
#include <stdio.h>

void troca(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 3;
    int y = 5;
    troca(&x,&y);
    
    printf("Resultado de x:%d\n",x);
    printf("Resultado de y:%d\n",y);
    return 0;
}

