#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h>

int data(){ 

											//recebe as informa��es do dia mes e ano
int dia, mes, ano,inteira_hs; 
float hs,min;

printf("Informe o dia no formato: DD.\n"); 
scanf("%d",&dia); 
system("cls");

printf("Informe o m�s no formato: MM.\n"); 
scanf("%d",&mes); 
system("cls");

printf("Informe o ano no formato: AAAA.\n"); 
scanf("%d",&ano); 
system("cls");

printf("Informe a hora no formato: HORA,MINUTOS.\n"); 
scanf("%f",&hs); 
system("cls");

printf("A data informada �: %d/%d/%d.\n",dia,mes,ano);

switch(mes) 
{ 													// o numero representa o mes
    case 1: 
    printf("O m�s informado � JANEIRO.\n"); 
    break;

    case 2: 
    printf("O m�s informado � FEVEREIRO.\n"); 
    break;

    case 3: 
    printf("O m�s informado � MAR�O.\n"); 
    break;

    case 4: 
    printf("O m�s informado � ABRIL.\n"); 
    break;

    case 5: 
    printf("O m�s informado � MAIO.\n"); 
    break;

    case 6: 
    printf("O m�s informado � JUNHO.\n"); 
    break;

    case 7: 
    printf("O m�s informado � JULHO.\n"); 
    break;

    case 8: 
    printf("O m�s informado � AGOSTO.\n"); 
    break;

    case 9: 
    printf("O m�s informado � SETEMBRO.\n"); 
    break;

    case 10: 
    printf("O m�s informado � OUTUBRO.\n"); 
    break;

    case 11: 
    printf("O m�s informado � NOVEMBRO.\n"); 
    break;

    case 12: 
    printf("O m�s informado � DEZEMBRO.\n"); 
    break;

    default: 
    printf("O m�s informado n�o confere.\n");

}
												// calcula a hora e os minutos
inteira_hs=(int)hs; 
min=(hs-inteira_hs)*100;

printf("O hor�rio informado � %.2d:%.0f.\n",inteira_hs,min);

 

system("pause"); 
}
int main(){
	data();
	return 0;
}

