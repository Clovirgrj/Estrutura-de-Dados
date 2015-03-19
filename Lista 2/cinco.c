#include<stdio.h>
int decrescente(){
	int a,b,c,d;
								// recebe tres numeros em ordem crescente
								// e um numero qualquer diferente dos outros tres
								// imprime em ordem decrescente
	scanf("%d%d%d",&a,&b,&c);
	scanf("%d",&d);
	
	if (d>c){
	printf("%d%d%d%d",d,c,b,a);}
	
	else if(d>b & d<c){
	printf("%d%d%d%d",c,d,b,a);}
	
	else if(d>a & d<b){
	printf("%d%d%d%d",c,b,d,a);}
	
	else if(d<a){
	printf("%d%d%d%d",c,b,a,d);}}
	
	int main(){
		
		decrescente();

return 0;
}

