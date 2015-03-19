#include<stdio.h>
int conceito(){										
	float n1, n2, n3,p1,p2,p3,media;             
	
	printf("Digite suas tres notas\n");            //recebe as tres notas
	scanf("%f%f%f",&n1,&n2,&n3);
	printf("Digite os pesos\n");					// recebe os tres pesos
	scanf("%f%f%f",&p1,&p2,&p3); 
	media = (n1*p1)+(n2*p2)+(n3*p3);				// calcula a media ponderada
	media=media/(p1+p2+p3);
	
	if (media>8){
	printf("O conceito e A e a media e %f",media);}
	
	else if (media>7 & media<=8){
	printf("O conceito e B e a media e %f",media);}
														
	else if (media>6 & media<=7){							// se a media está entre os valores imprime o conceito e a media
	printf("O conceito e C e a media e %f",media);}
	
	else if (media>5 & media<=6){
	printf("O conceito e D e a media e %f",media);}
	
	else if (media>=0 & media<=5){
	printf("O conceito e E e a media e %f",media);}}
	
	
	int main(){
	
	conceito();
	
return 0;
}
	
