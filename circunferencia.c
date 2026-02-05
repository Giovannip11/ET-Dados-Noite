/* Criar uma circunferencia e alocar na memória.
 * Destruir a circunferencia.
 * Dado um ponto (X,Y) determinar se está dentro ou fora da circunferencia.
 */
#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int x;
    int y;
}Ponto;
typedef struct{
    int raio;
    Ponto ponto;
}Circunferencia;


Circunferencia* criar_circunferencia(int r){
    Circunferencia*ci = (Circunferencia*)malloc(sizeof(Circunferencia));
    if(ci!=NULL){
        ci->raio=r;
        ci->ponto.x=0;
        ci->ponto.y=0;
    }return ci;
}
void  destruir_circunferencia(Circunferencia *c){
    free(c);
}
void fora_ou_dentro(Circunferencia *c,int x, int y){
    int dx= x - c->ponto.x;
    int dy= y - c->ponto.y;

    int distancia=dx*dx + dy*dy;
    int raio = c->raio * c->raio;

    if(distancia<=raio){
        printf("Dentro");
    }else{
        printf("Fora");
    }
}

int main (void){
    Circunferencia *c = criar_circunferencia(10);
    fora_ou_dentro(c,3,4);
    destruir_circunferencia(c);


    return 0;
}
