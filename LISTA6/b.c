#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct no {
  int dado;
  struct no *esq, *dir;
} no;

typedef struct pilha{
    no *topo;
    struct pilha *prox; 
}pilha;

pilha *criapilha (){
    pilha *topo = malloc(sizeof(pilha));
    topo->prox = NULL;
    return topo;
}

void empilha (pilha *topo, no *x){
    pilha *novo = malloc(sizeof(pilha));
    novo->topo = x;
    novo->prox = topo->prox;
    topo->prox = novo;
}
no *desempilha (pilha *topo){
    pilha *lixo = topo->prox;
    no *x = lixo->topo;
    topo->prox = lixo->prox;
    free(lixo);
    return x;
}
bool pilhavazia (pilha* p){
 if(p->prox == NULL) return false;
  return true;
}







void em_ordem (no *raiz){
   pilha *p = criapilha();
   int fim = 0;
   
   
   while (!fim) {
      
      if (raiz != NULL) {
        
         empilha (p, raiz);
         raiz = raiz->esq;
      }
      else {
        
         if (pilhavazia (p)){
           
         
         raiz = desempilha (p);
         printf ("%d ", raiz->dado);
        raiz = raiz->dir;
         
         }else{fim =1;}
      }
   }
}