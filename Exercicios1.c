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

//2)Vetor dinamico
#include <stdio.h>
#include <stdlib.h>
int main() {
   int *vetor=NULL;
   int n;
   int i=0;
   int j;
   
   while(1){
       printf("Digite um numero para alocar no vetor:");
       scanf("%d",&n);
       
       if(n<0){
           break;
       }
       i++;
       int *temp = realloc(vetor,i * sizeof(int));
       if(temp==NULL){
           printf("ERRO");
           free(vetor);
           return 1;
       }
       vetor = temp;
       
       vetor[i-1]= n;
    }
    for (j=0;j<i;j++){
        printf("%d\t",vetor[j]);
    }
    free(vetor);
   
   
    return 0;
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
