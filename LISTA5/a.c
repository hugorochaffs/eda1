#include <stdio.h>
#include <string.h>

char leitura[501];
int  maxPilha = 501;
char pilha[501];
int topo;
int desbalanc = 0;

void criapilha(){
topo=-1;
}




void push(char valor){
    if(topo < maxPilha-1){
topo++;
pilha[topo] = valor;}
}

char pop(){
if(topo > -1){
    char carac;
    carac = pilha[topo];
    topo--;
    return carac;
}

}







int main(){

scanf("%[^\n]",leitura);

criapilha();



for(int i=0; i<strlen(leitura);i++){

    if(leitura[i] == '{'){push('{');}
    if(leitura[i] =='('){push('(');}
    if(leitura[i] == '['){push('[');}
   if(leitura[i] == '}' && topo < 0 || leitura[i] == ']' && topo < 0 || leitura[i] == ')' && topo < 0 ){desbalanc++;}
if(topo != -1){
    if(leitura[i] == '}' && pop() != '{'){desbalanc++;}else{}
    if(leitura[i] == ']' && pop() != '['){desbalanc++;}else{}
    if(leitura[i] == ')' && pop() != '('){desbalanc++;}else{}
    
}
}


if(desbalanc == 0 && topo == -1){
    printf("sim\n");
}else{printf("nao\n");}




    return 0;
}