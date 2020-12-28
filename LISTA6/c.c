#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  int dado;
  struct no *esq, *dir;
} no;

no pilha[101];
no pilha2[101];
int topo,topo2;

void criapilha(){
  topo = -1;
  topo2 = -1;
}


void push(no valor){
    if(topo < 99){
topo++;
pilha[topo] = valor;

}
}
void push2(no valor){
    if(topo2 < 99){
topo2++;
pilha2[topo2] = valor;

}
}

no pop(){
if(topo > -1){
    no carac;
    carac = pilha[topo];
    topo--;
    return carac;
}
}

no pop2(){
if(topo2 > -1){
    no carac2;
    carac2 = pilha2[topo2];
    topo2--;
    return carac2;
}}
void pos_ordem(no *ptr){
criapilha();
if(ptr != NULL){push(*ptr);}


while(topo>-1){
*ptr = pop();
push2(*ptr);
if(ptr->esq !=NULL){push(*ptr->esq);}
  if(ptr->dir !=NULL){push(*ptr->dir);}



}

while(topo2>-1){
 *ptr = pop2();
  printf("%d ",ptr->dado);
}


}