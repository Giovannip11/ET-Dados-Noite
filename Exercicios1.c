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
    int n;
    int TAM=1;
    int *vetor;
    int i;
    
    while(1){
        
        if(n<0){
            break;
        }
         
        printf("Digite um numero positivo:");
        scanf("%d",&n);
        vetor = (int *)malloc(TAM* sizeof(int));   
        for(i=0;i<=TAM;i++){
            realloc
        }


      }
    
    
    return 0;
}

