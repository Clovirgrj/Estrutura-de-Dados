#include<stdio.h>
int salario(){
	float a, b;
						// recebe um salario e calcula o mesmo com um acrescimo de 25%
	
	printf("salario\n");
	scanf("%f", &a);
	b=(0.25*a)+a;
	printf("Seu salario atual a de %.2f", b);}
	
	
	int main(){
		
		salario();
		
	
	return 0;
	 
}
