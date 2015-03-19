#include <stdio.h>
#define c 3
int main(){
	int a,b,v[c],i;
	for (i=0;i<c;i++){
		scanf("%i",&v[i]);	
	}
	m2(c,v);
	return 0;
}
int m2(int b,int v[]){
	int a=0,i;
	for (i=0;i<b;i++){
		if(v[i]>a){
			a=v[i];		
		}	
	}
	return a;
}

