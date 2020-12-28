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


void imprime(celula *le){
celula *ptr = le->prox;
if(ptr == NULL){printf("NULL\n");}else{
while(ptr != NULL){
printf("%d",ptr->dado);
printf(" -> ");
ptr = ptr->prox;

}
printf("NULL\n");
}}

void imprime_rec(celula *le){
    celula *ptr = le->prox;
    if(ptr == NULL){
        printf("NULL\n");
    }else{
    
    printf("%d",ptr->dado);
        printf(" -> ");
        ptr = ptr->prox;
        imprime_rec(le->prox);
        
    
    
    }
}
