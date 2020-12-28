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



void divide_lista (celula *l, celula *l1, celula *l2){

     celula *ptr = l->prox, *ptrP = l2, *ptrI = l1,*ptrantP = NULL,*ptrantI = NULL;
     
while (ptr!= NULL){


if(ptr->dado%2 == 0){
   
  ptrP->prox = ptr;
  ptrP = ptr;
}

else{
ptrI->prox = ptr;
  ptrI = ptr;
}

ptr = ptr->prox;

}
ptrP->prox = NULL;ptrI->prox = NULL;
}





