#include <stdio.h>
#include <stdlib.h>

struct elemento{
	int info;
    struct elemento *ant;
	struct elemento* prox;
};
typedef struct elemento Elemento;

/*struct elemento{
	int info
	Elemento* prox;
};*/

/* fun��o de cria��o: retorna uma lista vazia */
Elemento* lst_cria(void){
 return NULL;
}

/* inser��o no in�cio: retorna a lista atualizada */
Elemento* lst_insere(Elemento* lst, int val){

	Elemento* novo = (Elemento*) malloc(sizeof(Elemento));
	novo->info = val;
	novo->prox = lst;
	
	return novo;
}

/* fun��o busca: busca um elemento na lista */
Elemento* busca(Elemento* lst, int v){
	Elemento* p;
	for(p=lst; p!=NULL; p = p->prox){
		if(p->info == v){
			return p;
		}		
	}
	return NULL; /* n�o achou o elemento */
}

/* fun��o retira: retira elemento da lista */
Elemento* lst_retira(Elemento* lst, int val){
	Elemento* a = NULL; /* ponteiro para elemento anterior */
	Elemento* p = lst; /* ponteiro para percorrer a lista */
	
	/* procura elemento na lista, guardando anterior */
	while(p != NULL && p->info != val){
 		a = p;
 		p = p->prox;
 	}
 	if(p == NULL){ /* verifica se achou elemento */
 		return lst; /* n�o achou: retorna lista original */
	}
 	if(a == NULL){ /* retira elemento */
 		lst = p->prox; /* retira elemento do inicio */
	}
	else{ 
 		a->prox = p->prox; /* retira elemento do meio da lista */
	}

	free(p);
	return lst;
}


int main(){
	Elemento* x;
	
	x = lst_cria();
	lst_insere(x,1);
	lst_insere(x,3);
    busca(x,3);
    lst_retira(x,3);


	return 0;
}

