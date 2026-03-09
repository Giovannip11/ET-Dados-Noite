#include <stdio.h>
#include <stdlib.h>
#define M 8191 //tamanho

#define hash(v,M) (v%M)

typedef struct{
    int chave;
    char* info;
}Item;

typedef struct STnode* link;
struct STnode{
    Item item;
    link next;
};

link *tab;

void inicHash(Item item){
    tab = malloc(M *sizeof(link));
    for (int h = 0; h < M;h++){
        tab[h] = NULL;
    }
}

void STinsere(Item item){
    int v = item.chave;
    int h = hash(v, M);
    link novo = malloc(sizeof(struct STnode));
    novo->item = item;
    novo->next = tab[h];
    tab[h] = novo;
}


Item STBusca(int v){

    Item itemnulo;
    itemnulo.chave = -1;
    link t;
    int h = hash(v,M);
    for(t = tab[h]; t !=NULL; t=t->next){
        if(t->item.chave==v){
            break;
        }
        if(t!=NULL){
            return t->item;
            return itemnulo;
        }
    }
}
int main (void){

}
