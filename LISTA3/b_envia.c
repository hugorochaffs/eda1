#include <stdio.h>
#include <stdlib.h>


typedef struct celula{

    int dado;
    struct celula *prox;

}celula;

void mescla_listas (celula *l1, celula *l2, celula *l3){

     celula *ptrl1 = l1->prox, *ptrl2 =l2->prox, *ptrl3 = l3;
 
 

 while(1){

if(ptrl1 == NULL || ptrl2 == NULL){
    if(ptrl1 == NULL)
    ptrl3->prox = ptrl2;
    else
    {
        ptrl3->prox = ptrl1;
    }
    
    
    
    break;}
     if(ptrl1->dado < ptrl2->dado){
         
         ptrl3->prox = ptrl1;

         ptrl1 = ptrl1->prox;
         
         
     }
else{
         ptrl3->prox = ptrl2;
         ptrl2 = ptrl2->prox;
         
         
     }
     ptrl3 = ptrl3->prox;
 }
 
}
