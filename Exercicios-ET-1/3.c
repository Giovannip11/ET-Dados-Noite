//3)Vetor com swap
#include <stdio.h>
#include <stdlib.h>
void swap_ranges(int *a_begin,int *a_end,int *b_begin){
    while(a_begin != a_end){

        int temp = *a_begin;
        *a_begin = *b_begin;
        *b_begin = temp;

        a_begin++;
        b_begin++;
    }
}

int main() {
    int V[]= {10,20,30,40,50};
    swap_ranges(&V[0],&V[3],&V[3]);

    return 0;
}
