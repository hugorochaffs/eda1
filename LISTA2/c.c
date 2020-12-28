#include <stdio.h>
#include <stdlib.h>


typedef struct celula{

    int dado;
    struct celula *prox;

}celula;

celula *cria_lista(){
 celula *le = malloc(sizeof(celula));
 if(le == NULL) exit(1);
 le->prox = NULL;

 return le;
}


celula *busca(celula *le,int x){
    celula *ptr;
    for(ptr=le;ptr!=NULL,ptr->dado!=x;ptr = ptr->prox);

    return ptr;
}

celula *busca_rec(celula *le,int x){
    celula *ptr;
    ptr = le;
    if(ptr!=NULL && ptr->prox != NULL && ptr->dado !=x){
        busca_rec(ptr->prox,x);
    }else{return ptr;}
}




