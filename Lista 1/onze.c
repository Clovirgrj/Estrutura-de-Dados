#include<stdio.h>
int conversao(){
	float a, b;
											//conversão de farenheit para celsius
	
	printf("Temperatura em Farenheit.\n");
	scanf("%f",&b);
	a = (5*(b-32)/9);
	printf("Temperatura em celsius %.1b.", a);}
	
	
	int main(){
		conversao();
	return 0;
}


