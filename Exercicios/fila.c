#include <stdio.h>
#include <stdlib.h>

typedef struct cel{
  int info;
  struct cel *prox;
}Cel;
typedef struct {
  Cel *primeiro;
  Cel *ultimo;
}Fila;

Fila inicFila(void){
  Fila f;
  f.primeiro=NULL;
  f.ultimo=NULL;
  return f;
  
} 
int vaziaFila(Fila f){
  return (f.primeiro==NULL);
}

void adicFila(Fila *f, int elem){
  Cel *novo = (Cel*) malloc(sizeof(Cel));
  if (novo==NULL) return;

  novo->info = elem;
  novo->prox=NULL;

  if (vaziaFila(*f)){
    f->primeiro = novo;
  }else{
    f->ultimo->prox = novo;
  }
  f->ultimo=novo;
}
int elimFila(Fila *f){
    if(vaziaFila(*f)){
    return -1;
  }
  Cel *aux = f->primeiro;
  int valor = aux->info;
  f->primeiro = aux->prox;

  if (f->primeiro == NULL){
    f->ultimo==NULL;
  }
  free(aux);
  return valor;
}

int infoFila(Fila *f){
  if(vaziaFila(*f)){
    return -1;
  }
return f->primeiro->info;

}

void destruirFila(Fila *f){
  Cel *atual = f->primeiro;
  Cel *proximo;
  while (atual !=NULL){
    proximo = atual->prox;
    free(atual);
    atual = proximo;
  }
  f->primeiro = NULL;
  f->ultimo = NULL;

  printf("Fila destruida.\n");
}

Fila copiarFila(Fila f_original){
 Fila f_copia = inicFila();
 Cel *atual = f_original.primeiro;

while (atual!=NULL){
    adicFila(&f_copia,atual->info);

    atual = atual->prox;
  }
  return f_copia;
}

int longFila(Fila *f){
int i;
Cel *atual = f->primeiro;
Cel *proximo;

while(atual != NULL){
    proximo = atual->prox;
    i++;
    atual=proximo;
  }
  return i;

}
void concantFila(Fila *f1, Fila *f2){
if(vaziaFila(*f1) && vaziaFila(*f2)){
    return;
}
if (f1->primeiro == NULL){
    f1->primeiro = f2->primeiro;
    f1->ultimo = f2->ultimo;
  }
  else{
    f1->ultimo->prox= f2->primeiro;
    f1->ultimo = f2->ultimo;
  }

}
void inverterFila(Fila f){
if(vaziaFila(*f1)){
    return;
  }


}
int main (void){


}


