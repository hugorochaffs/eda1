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
celula *ptr = le;
    for(ptr;ptr!=NULL && ptr->dado!=x;ptr = ptr->prox);

    return ptr;
}

celula *busca_rec(celula *le,int x){
    if(le == NULL || le->dado == x){
       return le;
    }else{busca_rec(le->prox,x);}
}




