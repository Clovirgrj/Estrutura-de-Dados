#include <stdio.h>
#include <stdlib.h>

struct elemento{
	int info;
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

/* fun��o imprime: imprime valores dos elementos percorrendo a lista */
void lst_imprime(Elemento* lst){
	Elemento* p;
	for(p = lst; p != NULL; p = p->prox){
		printf("info = %d\n", p->info);
	}
}

/* fun��o vazia: retorna 1 se vazia ou 0 se n�o vazia */
int lst_vazia(Elemento* lst){
	return (lst == NULL);
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

void lst_libera(Elemento* lst){
	Elemento* p = lst;
	while (p != NULL){
		Elemento* t = p->prox; /* guarda refer�ncia p/ pr�x. elemento */
		free(p); /* libera a mem�ria apontada por p */
		p = t; /* faz p apontar para o pr�ximo */
	}
}

Elemento* lst_igual(Elemento* i,Elemento* j){
	int teste;
	while(i!=NULL){
	   if(i->info == j->info){
	   	teste = 1;
	   	i=i->prox;
	    j=j->prox;
	   }	
		else{
	    	teste=0;
			break;	
		} 	
	
	}
	if(teste == 1){
		printf("igual\n");
	} 
	else{
		printf("diferente\n");
	} 
}

Elemento* lst_copia(Elemento* x, Elemento* y){
	if(x == y){
		return x;
	}
	else{
		y = x;
		return y; 
	}
}

int main(){
	Elemento* x;
	Elemento* y;
	
	x = lst_cria();
	y = lst_cria();
	
	lst_vazia(x);
   	
	x = lst_insere(x, 10);
   	x = lst_insere(x, 15);
   	x = lst_insere(x, 20);
    x = lst_insere(x, 25);
    
	lst_imprime(x);
	
	printf("\n\n\n");
    
    y = lst_copia(x, y);
    
    lst_imprime(y);
    
	return 0;
}
