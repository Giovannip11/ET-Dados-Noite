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
}
