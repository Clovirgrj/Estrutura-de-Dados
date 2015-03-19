#include<stdio.h>
int salario(){
	float a, b, c;
	
								//multiplica o valor por hora e o numero de horas trabalhadas, para mostra o salario
	printf("valor da hora\n");
	scanf("%f", &b);
	printf("A quantidades de horas\n");
	scanf("%f", &a);
	c = a * b;
	printf("Seu salario e de %.2f", c);}
	
	
	int main(){
		salario();
		return 0;
	}
