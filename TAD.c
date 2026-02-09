#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int a; // numerador
    int b; // denominador
} Racional;

Racional cria_racional(int x, int y) {
    if (y == 0) {
        printf("Erro: denominador zero!\n");
        exit(1);
    }

    Racional r;
    r.a = x;
    r.b = y;
    return r;
}

Racional mult(Racional x, Racional y) {
    Racional r;
    r.a = x.a * y.a;
    r.b = x.b * y.b;
    return r;
}

int main() {

    Racional r1 = cria_racional(2, 3);
    Racional r2 = cria_racional(4, 5);

    Racional m = mult(r1, r2);

    printf("Resultado: %d/%d\n", m.a, m.b);

    return 0;
}
