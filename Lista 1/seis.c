#include<stdio.h>
int media(){
	float n1, n2, n3, n4, media;
												//soma as quatros notas divide por 4 e imprime a media
	printf("Digite suas quatro notas\n");
	scanf("%f%f%f%f",&n1,&n2,&n3,&n4); 
	media = (n1+n2+n3+n4)/4;
	printf("%.2f", media);}
	
	
	int main(){
		media();
		
		
		return 0;
	}
	

