#include <stdio.h>
#include <stdlib.h>

struct elemento{
	int info;
	struct elemento* prox;
};
typedef struct elemento Elemento;


Elemento* lst_cria(void){
 return NULL;
}

Elemento* lst_insere(Elemento* lst, int val){

	Elemento* novo = (Elemento*) malloc(sizeof(Elemento));
	novo->info = val;
	novo->prox = lst;
	
	return novo;
}

Elemento* lst_circular(Elemento* r){
    Elemento* head;
    Elemento* inicio;
    Elemento* fim;
    inicio = r;
    for(head = r; head->prox != NULL; head=head->prox){
    	fim=head;
    	fim->prox=inicio;
    	return head; 
	}
}

Elemento* lst_linear(Elemento* r){
    Elemento* head;
    Elemento* inicio;
    Elemento* fim;
    inicio = r;
    for(head=r; head->prox!= NULL; head=head->prox){
    	fim=head;
    	fim->prox=NULL;
    	return head;
	}
}

int lst_tam_circular(Elemento* r){
    Elemento* atual;
    int n=0;
    for(atual=r; atual!=NULL; atual=atual->prox){
    	n++;
    }              
    return n;
}

int main(){
	Elemento* x;
	x = lst_cria();
   	x = lst_insere(x, 1);
   	x = lst_insere(x, 2);
   	x = lst_insere(x, 3);
   	x = lst_insere(x, 4);
   	x = lst_insere(x, 5);
   	x = lst_insere(x, 6);
   	x = lst_insere(x, 7);
   	
	printf("%d", lst_tam_circular(x));
    x = lst_circular(x);
    x = lst_linear(x);
    
    return 0;
}
     
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
