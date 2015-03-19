#include<stdio.h>
int salario(){
	float a,b,c;
	
								// recebe o salario base, calcula o salario com um decrescimo de 10% mais um acrescimo de 50
	printf("salario base\n");
	scanf("%f", &a);
	c=(a*10)/100;
	c=a-c;
	b=c+50;
	printf("Seu salario a receber e %.2f", b);}


	int main(){
	
	salario();
	
	return 0;
}
