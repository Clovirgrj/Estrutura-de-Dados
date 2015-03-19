#include<stdio.h>
int exame(){
	float a,n1, n2, n3,media;
									
	
	printf("Digite suas tres notas\n");
	scanf("%f%f%f",&n1,&n2,&n3);
	media=(n1+n2+n3)/2;								// calcula a media
	
	
	if (media<3){
	printf("Reprovado %f",media);}
	
	else if (media>=7){
	printf("Aprovado %f",media);}		//se for menor que 3 reprova e se for maior ou igual a 7 aprova
										// caso esteja entre 3 e 7 fará um novo exame e precisará de uma nota para passar
	else if(media >=3 & media<7){
	a=6-media;
	printf("Exame %f",a);}}
	
	
	int main(){

	exame();
	
	return 0;
}

