#include <stdio.h>
#include <stdlib.h>

typedef struct{
    
    int topo;
    char vetor[];
} pilha;

void cria_Pilha(pilha *p){
    
    p->topo = -1;
}

int verifica_vazio(pilha *p){
    
    if(p->topo <= -1){
        return 1;
    } else {
        return 0;
    }
}

void insere_Pilha(pilha *p, char a){
    
    p->topo++;
    p->vetor[p->topo] = a;
}

void remove_Pilha(pilha *p){
    
    if(verifica_vazio(p) == 1){
        printf("ERROR - Pilha vazia!");
    } else {
        p->topo--;
    }
}

void le_Pilha(pilha *p){
    
    for(int i = 0; i <= p->topo; i++){
        printf("\n %c", p->vetor[i]);
    }
}

int main()
{
    
    pilha *p = (pilha*)malloc(sizeof(pilha));
    
    cria_Pilha(p);
    insere_Pilha(p, 'a');
    insere_Pilha(p, 'b');
    insere_Pilha(p, 'c');
    remove_Pilha(p);
    insere_Pilha(p, 'd');
    
    le_Pilha(p);
    
}
