#include<stdio.h>
int aumento(){
	float a,b,c,d;
	
							// recebe o salario e a percentual do aumento e calcula o valor do aumento e o novo salario
	printf("salario\n");
	scanf("%f", &a);
	printf("percentual de aumento\n");
	scanf("%f", &b);
	c=b/100;
	d=c*a;
	printf("O valor do aumento é de %.2f", d);
	d=d+a;
	printf("O novo salario é %.2f", d);}
	
	
	int main(){
		
		
		aumento();
	
	
	return 0;
	 
}
