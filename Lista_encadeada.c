#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
    int info;
    struct lista *prox;
} Lista;


Lista *lst_cria(void){
    return NULL;
}


Lista *insere_lista(Lista *l, int i){
    Lista *novo = (Lista*)malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
}

int verificar(Lista *l){
    return (l == NULL);
}


Lista *remove_lista(Lista *l, int r){
    Lista *ant = NULL;
    Lista *p = l;

    while (p != NULL && p->info != r){
        ant = p;
        p = p->prox;
    }

    if (p == NULL)
        return l;

    if (ant == NULL)
        l = p->prox;
    else
        ant->prox = p->prox;

    free(p);
    return l;
}


Lista *busca_lista(Lista *l, int n){
    Lista *p;
    for (p = l; p != NULL; p = p->prox){
        if (p->info == n)
            return p;
    }
    return NULL;
}


Lista *libera_lista(Lista *l){
    Lista *p = l;
    while(p != NULL){
        Lista *t = p->prox;
        free(p);
        p = t;
    }
    return NULL;
}

void imprime_lista(Lista *l){
    Lista *p;
    for (p = l; p != NULL; p = p->prox){
        printf("%d ", p->info);
    }
    printf("\n");
}

int main() {

    Lista *minha_lista = lst_cria();

    printf("Inserindo 10, 20 e 30...\n");
    minha_lista = insere_lista(minha_lista, 10);
    minha_lista = insere_lista(minha_lista, 20);
    minha_lista = insere_lista(minha_lista, 30);

    printf("Estado atual da lista: ");
    imprime_lista(minha_lista);

    int v = 20;
    Lista *buscado = busca_lista(minha_lista, v);
    if (buscado)
        printf("Elemento %d encontrado!\n", buscado->info);
    else
        printf("Elemento %d nao encontrado.\n", v);

    printf("Removendo 20...\n");
    minha_lista = remove_lista(minha_lista, 20);
    imprime_lista(minha_lista);

    minha_lista = libera_lista(minha_lista);
    printf("Lista liberada da memoria.\n");

    return 0;
}
