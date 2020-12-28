#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int leitura;

typedef struct le {
   int  conteudo; 
   struct le *prox;
} le;

typedef struct fila{
 le *inicio;
 le *final;
}fila;

fila *construtor(){
 fila *prim = (fila*)malloc(sizeof(fila));
 prim->inicio = NULL;
 prim->final = NULL;
 return prim;
}

void *inserir(fila *fila, int x){
le *novo = (le*)malloc(sizeof(le));
 novo->conteudo = x;
 novo->prox = NULL;
 if(fila->inicio==NULL){
  fila->inicio = novo;
  fila->final = novo;
 }else{
  fila->final->prox = novo;
  fila->final = novo;
 }

}

int remover(fila *fila){
 le *ptr;
int x;
 ptr = fila->inicio;
x = ptr->conteudo;
 fila->inicio = ptr->prox;
 if(fila->inicio==NULL)
  fila->final = NULL;
 free(ptr);
 return x;
}

int filaVazia(fila *fila){
 return fila->inicio==NULL;
}

int main(){
fila *fila;
fila = construtor();

    scanf("%d",&leitura);

 for(int i=1;i<=leitura;i++){
     inserir(fila,i);
 }
 int i = leitura;
    printf("Cartas descartadas:");

    while(i!=1){
    printf(" %d", remover(fila));
    inserir(fila, remover(fila));

    if(i!=2)
     printf(",");
    i--;
   }
 
   if(!filaVazia(fila))
    printf("\nCarta restante: %d\n", remover(fila));
  

    return 0;
}