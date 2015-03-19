#include<stdio.h>
int ponderada(){
	float n1, n2, n3,p1,p2,p3,media;
	
											//recebe as notas e os pesos e calcula a media ponderada
	printf("Digite suas tres notas\n");
	scanf("%f%f%f",&n1,&n2,&n3);
	
	printf("Digite os pesos\n");
	scanf("%f%f%f",&p1,&p2,&p3); 
	
	media = (n1*p1)+(n2*p2)+(n3*p3);
	media=media/(p1+p2+p3);
	printf("%.2f", media);}
	
	int main(){
		ponderada();
		return 0;
		
	}
	
	

