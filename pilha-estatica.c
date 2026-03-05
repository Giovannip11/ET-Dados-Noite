#include <stdio.h>

    typedef struct{
        int topo;
        int T[10];
    }Pilha;

Pilha inicPilha(void){
    Pilha p;
    p.topo = -1;
    return p;
}
int vaziaPilha(Pilha p){
    return (p.topo==-1);
}
void push(Pilha *p,int elem){
    if(p->topo == 9){
        printf("Pilha cheia\n");
        return;
    }
    p->topo++;
    p->T[p->topo] = elem;
}
int pop(Pilha *p){
    if(vaziaPilha(*p)){
        printf("Pilha vazia\n");
        return -1;
    }
    int valor = p->T[p->topo];
    p->topo--;

    return valor;
}
int freePilha(Pilha p){
    if(p.topo == -1){
        printf("Pilha vazia\n");
        return -1;
    }
    return p.T[p.topo];
}
int infoTopo(Pilha p){
    if(p.topo == -1){
        printf("Pilha vazia\n");
        return -1;
    }
    return p.T[p.topo];
}



int main() {
        Pilha p = inicPilha();

        push(&p,10);
        push(&p,20);
        push(&p,30);

        printf("O topo:%d\n",infoTopo(p));
        pop(&p);

        freePilha(p);

    return 0;
}
