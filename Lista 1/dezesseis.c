#include<stdio.h>
int salario(){
	float a, b,c;
	
						// recebe o salario base calcula um aumento de 5% do salario base, depois um decrescimo de 7%
	printf("salario\n");
	scanf("%f", &a);
	b=(0.05*a)+a;
	c=(b*7)/100;
	c=b-c;
	printf("Seu salario atual e de %.2f", c);}
	
	
	int main(){
		
		salario();
	
	return 0;
}
