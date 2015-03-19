#include<stdio.h>
int media(){
	float n1, n2, n3, media;
	
											// soma as tres notas e divide por 3 para obter a media aritimetica
	printf("Digite suas tres notas\n");
	scanf("%f%f%f",&n1,&n2,&n3); 
	media = (n1+n2+n3)/3;
	printf("%.2f", media);}


	int main(){
	
	media();
	
	
	return 0;	
}
