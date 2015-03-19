#include<stdio.h>
int seis(){
	int a,b;
						//recebe um numero e a partir do resto identifica se ele é par ou impar
	scanf("%d",&a);
	b=a%2;
	
	if (b==0){
	printf("é par");}
	
	else{
	printf("é impar");
}}

int main(){
	
	seis();

return 0;
}
