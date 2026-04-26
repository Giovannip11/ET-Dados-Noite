#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int info;
    struct no*esq;
    struct no*dir;
}no;

typedef struct no * ArvBin;



ArvBin*criar_arv_bin(){
  ArvBin *raiz=(ArvBin)malloc(sizeof(ArvBin));
  if(raiz!=NULL){
    *raiz=NULL;
  }
  return raiz;
}
ArvBin* contar_num_nos(raiz){
  if(raiz==NULL){return 0;}
  else{
    return 1 + contar_num_nos(no->esq) + contar_num_nos(no->dir);
  }
}

ArvBin* contar_folhas(raiz){
  if(raiz !=NULL){
    if(no->dir || no->esq == NULL){
      return 0;
      contar_folhas(no->dir);
      contar_folhas(no->esq);
    }else{
      return 1;
      contar_folhas(no->dir);
      contar_folhas(no->esq);
    }
  }else{
    return -1;
  }
}

ArvBin *nos_n_folha(raiz){
  if(raiz !=NULL){
    if(no->dir || no->esq !=NULL){
        return +1 nos_n_folha(no->dir) nos_n_folha(no->esq);
    }
    else{
      return 0;
      nos_n_folha(no->dir);
      nos_n_folha(no->esq);
    }
  }
}
int main (void){



}
