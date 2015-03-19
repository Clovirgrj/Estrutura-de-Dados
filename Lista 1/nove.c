#include<stdio.h>
int areaq(){
	int a, b;
												// acha a area do quadrado a partir de um lado e multiplica por 2
	
	printf("digite um lado do quadrado\n "); 
	scanf("%d",&a);
	b = a*a;
	b = b*2;
	printf("%d",b);}
	
	
	int main(){
		areaq();
	return 0;

}	
