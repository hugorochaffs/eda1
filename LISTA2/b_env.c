#include <stdio.h>


typedef struct celula{

    int dado;
    struct celula *prox;

}celula;

void insere_inicio(celula *le,int x){
    celula *novo = malloc(sizeof(celula));
    
    novo->dado=x;
    
    novo->prox = le->prox;
    le->prox = novo;

}

void insere_antes(celula *le,int x, int y){
    celula *novo = malloc(sizeof(celula));
    celula *ptr;
    novo->dado = x;

    for(ptr=le;ptr!=NULL&&ptr->dado!=y;ptr = ptr->prox);
    novo->prox = ptr->prox;
    ptr->prox = novo;
}







