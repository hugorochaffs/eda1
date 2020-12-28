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


void remove_depois(celula *le){
    
    celula *ptr = le;
    celula *lixo;
   
    if(ptr!=NULL&&ptr->prox!=NULL){
    lixo = ptr->prox;
    ptr->prox = lixo->prox;
    free(lixo);
    }
}

void remove_elemento(celula *le,int x){
    
    celula *ptr;
    celula *lixo;
    

    for(ptr=le;ptr!=NULL&&ptr->prox!=NULL&&ptr->prox->dado!=x;ptr = ptr->prox);
   
    if(ptr->prox!=NULL&&ptr->prox->dado==x){
    lixo = ptr->prox;
    ptr->prox = lixo->prox;
    free(lixo);
    }
    
}

void remove_todos_elementos (celula *le, int x){
 celula *lixo;
int count = 0;
 celula *ptr = le;
 while(count <10){
     ptr = le;
    while(ptr != NULL && ptr->prox != NULL){
         
         if(ptr->prox->dado == x)
         remove_elemento(ptr,x);
         ptr = ptr->prox;

        
    }
 count++;
 }

 
}


