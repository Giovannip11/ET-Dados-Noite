#include <stdio.h>
#include <stdlib.h>

int **create_matriz(int n, int m) {
    int i, j;


    int **matriz = (int**)malloc(n * sizeof(int*));
    if (matriz == NULL) {
        printf("ERRO");
        exit(1);
    }

    for (i = 0; i < n; i++) {
        matriz[i] = (int*)malloc(m * sizeof(int));
        if (matriz[i] == NULL) {
            printf("ERRO NA COLUNA");
            exit(1);
        }
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            matriz[i][j] = i + j;
        }
    }

    return matriz;
}

int main(void) {
    int n = 3, m = 4;

    int **matriz = create_matriz(n, m);


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
