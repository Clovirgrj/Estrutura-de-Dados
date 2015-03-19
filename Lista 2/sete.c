#include<stdio.h>
int tabela(){
	float a,b,c;
	int d;
								// recebe tres numeros reais e um inteiro	
	scanf("%f%f%f",&a,&b,&c);
	scanf("%d",&d);
	
	if (d==1){
								// se o numero 1 for digitado imprime os 3 numeros em ordem crescente
		
		if (a>b & a>c & b>c){
	printf("%d%d%d",c,b,a);}
	else if(a>b & a>c & c>b){
	printf("%d%d%d",b,c,a);}
	else if(b>a & b>c & a>c){
	printf("%d%d%d",c,a,b);}
	else if(b>a & b>c & c>a){
	printf("%d%d%d",a,c,b);}
	else if(c>a & c>b & a>b){
	printf("%d%d%d",b,a,c);}
	else if(c>a & c>b & b>a){
	printf("%d%d%d",a,b,c);}

}
else if (d==2){
								// se o numero 2 for digitado imprime os 3 numeros em ordem decrescente
	
	if (a>b & a>c & b>c){
	printf("%d%d%d",a,b,c);}
	else if(a>b & a>c & c>b){
	printf("%d%d%d",a,c,b);}
	else if(b>a & b>c & a>c){
	printf("%d%d%d",b,a,c);}
	else if(b>a & b>c & c>a){
	printf("%d%d%d",b,c,a);}
	else if(c>a & c>b & a>b){
	printf("%d%d%d",c,a,b);}
	else if(c>a & c>b & b>a){
	printf("%d%d%d",c,b,a);}                  

}
else if (d==3){
								// se o numero 3 for digitado o maior numero fica entre os 3
	
	if (a>b & a>c & b>c){
	printf("%d%d%d",b,a,c);}
	else if(a>b & a>c & c>b){
	printf("%d%d%d",c,a,b);}
	else if(b>a & b>c & a>c){
	printf("%d%d%d",a,b,c);}
	else if(b>a & b>c & c>a){
	printf("%d%d%d",c,b,a);}
	else if(c>a & c>b & a>b){
	printf("%d%d%d",a,c,b);}
	else if(c>a & c>b & b>a){
	printf("%d%d%d",a,c,a);}

}}

int main(){

tabela();

return 0;
}


