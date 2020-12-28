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
pilha[topo] = valor;

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


void preOrdem(no *ptr){
criapilha();
if(ptr != NULL){push(*ptr);}


while(topo>-1){
*ptr = pop();
if(ptr->dir !=NULL){push(*ptr->dir);}
  if(ptr->esq !=NULL){push(*ptr->esq);}

if(ptr!= NULL){printf("%d ",ptr->dado);}

}


}

 
  

void emOrdem(no *ptr){


}







void preordem (no *raiz) {
  if (raiz != NULL) {
    printf ("%d ", raiz->dado);
    preordem (raiz->esq);
    preordem (raiz->dir);
  }
}

void emordem (no *raiz) {
  if (raiz != NULL) {
    emordem (raiz->esq);
    printf ("%d ", raiz->dado);
    emordem (raiz->dir);
  }
}

void posordem (no *raiz) {
  if (raiz != NULL) {
    posordem (raiz->esq);
    posordem (raiz->dir);
    printf ("%d ", raiz->dado);
  }
}

no *criar_arvore (int x, no *esq, no *dir) {
  no *raiz = malloc (sizeof (no));
  raiz->dado = x;
  raiz->esq = esq;
  raiz->dir = dir;
  return raiz;
}

no *procurar (no *raiz, int x) {
  if (raiz == NULL || raiz->dado == x) return raiz;
  no *esq = procurar (raiz->esq, x);
  if (esq != NULL) return esq;
  return procurar (raiz->dir, x);
}

void inserir (no *raiz, int x, int y, char L) {
  // inserir x do lado L de y
  no *procurado = procurar (raiz, y);
  if (L == 'E') {
    no *novo = criar_arvore (x, procurado->esq, NULL);
    procurado->esq = novo;
  }
  else {
    no *novo = criar_arvore (x, NULL, procurado->dir);
    procurado->dir = novo;
  }
}

int main () {
  int elem, novo;
  char lado;
  // printf ("Digite a raiz: ");
  scanf ("%d", &novo);
  no *raiz = criar_arvore (novo, NULL, NULL);
  // printf ("Digite NOVO LADO EXISTENTE: ");
  while (scanf ("%d %c %d", &novo, &lado, &elem) != EOF) {
    inserir (raiz, novo, elem, lado);
    // printf ("Digite NOVO LADO EXISTENTE: ");
  }

  //printf ("Pre-ordem: ");
  //preordem (raiz);
  //printf ("\n");
  //printf (" Pre-ordem ITERATIVO: ");
 // preOrdem (raiz);
  //printf ("\n");
  

printf ("em ordem: ITERA ");

  emOrdem (raiz);
  printf ("\n");
 
  return 0;
}