#include<stdio.h>
int seis(){
	int a,b;
						//recebe um numero e a partir do resto identifica se ele � par ou impar
	scanf("%d",&a);
	b=a%2;
	
	if (b==0){
	printf("� par");}
	
	else{
	printf("� impar");
}}

int main(){
	
	seis();

return 0;
}
