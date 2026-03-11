#include <inttypes.h>
#include <stdio.h>
#include <math.h>

int hipotenusa(int *x,int *y){
   return(int) sqrt((*x)*(*x) + (*y)*(*y));
}
void image(int *x,int *y,int *h){
    int i,j;

    for(i=0;i<=*x;i++){
        for(j=0;j<=*y;j++){

            if(j==0)
                printf("|");

            else if(i==*x)
                printf("_");
            else if(j==i)
                printf("\\");

            else
                printf(" ");

        }
        printf("\n");
    }
}

int main(void){
    int a,b,c;
    printf("Digite o valor do cateto A:");
    scanf("%d",&a);
    printf("Digite o valor do cateto B:");
    scanf("%d",&b);

    c=hipotenusa(&a,&b);
    printf("%d\n",c);

    image(&a,&b,&c);


}
