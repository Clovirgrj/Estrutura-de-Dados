#include <stdio.h>
#include <math.h>
int menu(){
	int a,b,c;
	
	printf("1. Somar dois numeros.\n");
	printf("\n2. Subtrair dois numeros.\n");
	printf("\n1. Multiplicar dois numeros.\n");
	printf("\n3. Dividir dois numeros.\n");				// menu
													//o numero digitado fará com que o programa faça uma das operações
	printf("\n4. Raiz quadrada de um numero.\n");
	scanf("%d",a);
	
	if (a==1){
		scanf("%d%d",a,b);
		c=a+b;
		printf("%d",c);
	}
	else if (a==2){
		scanf("%d%d",a,b);
		c=a-b;
		printf("%d",c);
	}
	else if (a==3){
		scanf("%d%d",a,b);
		c=a*b;
		printf("%d",c);
	}
	else if (a==4){
		scanf("%d%d",a,b);
		c=a/b;
		printf("%d",c);
	}
	else if (a==5){
		scanf("%d",a);
		c=sqrt(a);
		printf("%d",c);
	}
}

int main(){
	
	menu();
	
	return 0;
}
