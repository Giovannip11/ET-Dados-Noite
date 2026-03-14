#include <stdio.h>
#include <stdlib.h>
#define numEntradas 8


typedef struct _Hash{
    int chave;
    struct _Hash *prox;
}Hash;

typedef Hash* Tabela[numEntradas];




int funcHashing(int num){
    return num % numEntradas;
}



void insereHash(Tabela tabela,int n){
    Hash *novo;
    int pos = funcHashing(n);
    novo = (Hash*)malloc(sizeof(Hash));
    novo->chave=n;
    novo->prox=tabela[pos];
    tabela[pos]=novo;
}


Hash* localizarHash (Tabela tabela, int num){
    int pos = funcHashing(num);
    Hash* aux;
    if (tabela[pos]!=NULL)
        if(tabela[pos]->chave==num){
            return (tabela[pos]);
        }else{
            aux=tabela[pos]->prox;
        }
    while (aux!=NULL && aux->chave!=num) {
        aux=aux->prox;
        return (aux);
    }
        return NULL;
}
void excluirHash(Tabela tabela,int num){
    int pos = funcHashing(num);
    Hash* aux;
    if(tabela[pos]!=NULL){
        if(tabela[pos]!=NULL){
            if(tabela[pos]->chave==num){
                aux=tabela[pos];
                tabela[pos]=tabela[pos]->prox;
                free(aux);
            }
            else{
                aux=tabela[pos]->prox;
                Hash* ant=tabela[pos];
                while (aux !=NULL && aux->chave!=num) {
                    ant=aux;
                    aux = aux->prox;
                }
                if(aux!=NULL){
                    ant->prox=aux->prox;
                    free(aux);
                }else{
                    printf("\nNumero nao encontrado");
                }
            }
            printf("\nNumero nao encontrado");
        }
    }
}
int main (void){

}
