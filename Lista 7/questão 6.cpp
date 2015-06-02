#include <stdio.h>
#include <stdlib.h>

struct elemento{
	int info;
	struct elemento* prox;
	struct elemento* ant;
};
typedef struct elemento Elemento;

Elemento* lst_cria(void){
	return NULL;
}

Elemento* lst_insere(Elemento* r,int x){
    Elemento* novo;
    Elemento* head=r;
    Elemento* inicio=r;
    Elemento* fim;
    
	if(r==NULL){
    	novo=(Elemento*)malloc(sizeof(Elemento));                
    	novo->ant=NULL;
    	novo->info=x;
    	inicio=novo;
    	fim=inicio;
    	novo->prox=r;
    	r=novo;
    	return novo;
    }
    else{
    	novo->info=x;
     	novo->ant=head;
     	novo->prox=r;
     	r=novo;
     	fim=novo;
     	head=r; 
     	fim->prox=inicio;
     	inicio->ant=fim;
     	return novo;   
    }
}          


Elemento* lst_remove(Elemento* r){
	r=r->prox;
	free(r->ant);
	r->ant=NULL;
	return r;              
}

int main(){
    Elemento* l;
    l = lst_cria();
    l = lst_insere(l,1);
    l = lst_insere(l,2);
    l = lst_insere(l,3);
    l = lst_remove(l);
    
    return 0;
    
} 
