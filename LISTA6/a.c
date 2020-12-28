#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  int dado;
  struct no *esq, *dir;
} no;



no pilha[101];
int topo;

void criapilha(){
  topo = -1;
}


void push(no valor){
    if(topo < 99){
topo++;
pilha[topo] = valor;}
}

no pop(){
if(topo > -1){
    no carac;
    carac = pilha[topo];
    topo--;
    return carac;
}


}





void pre_ordem(no *ptr){
criapilha();
if(ptr != NULL){push(*ptr);}


while(topo>-1){
*ptr = pop();
if(ptr->dir !=NULL){push(*ptr->dir);}
  if(ptr->esq !=NULL){push(*ptr->esq);}

if(ptr!= NULL){printf("%d ",ptr->dado);}

}


}