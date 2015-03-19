#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h>

int data(){ 

											//recebe as informações do dia mes e ano
int dia, mes, ano,inteira_hs; 
float hs,min;

printf("Informe o dia no formato: DD.\n"); 
scanf("%d",&dia); 
system("cls");

printf("Informe o mês no formato: MM.\n"); 
scanf("%d",&mes); 
system("cls");

printf("Informe o ano no formato: AAAA.\n"); 
scanf("%d",&ano); 
system("cls");

printf("Informe a hora no formato: HORA,MINUTOS.\n"); 
scanf("%f",&hs); 
system("cls");

printf("A data informada é: %d/%d/%d.\n",dia,mes,ano);

switch(mes) 
{ 													// o numero representa o mes
    case 1: 
    printf("O mês informado é JANEIRO.\n"); 
    break;

    case 2: 
    printf("O mês informado é FEVEREIRO.\n"); 
    break;

    case 3: 
    printf("O mês informado é MARÇO.\n"); 
    break;

    case 4: 
    printf("O mês informado é ABRIL.\n"); 
    break;

    case 5: 
    printf("O mês informado é MAIO.\n"); 
    break;

    case 6: 
    printf("O mês informado é JUNHO.\n"); 
    break;

    case 7: 
    printf("O mês informado é JULHO.\n"); 
    break;

    case 8: 
    printf("O mês informado é AGOSTO.\n"); 
    break;

    case 9: 
    printf("O mês informado é SETEMBRO.\n"); 
    break;

    case 10: 
    printf("O mês informado é OUTUBRO.\n"); 
    break;

    case 11: 
    printf("O mês informado é NOVEMBRO.\n"); 
    break;

    case 12: 
    printf("O mês informado é DEZEMBRO.\n"); 
    break;

    default: 
    printf("O mês informado não confere.\n");

}
												// calcula a hora e os minutos
inteira_hs=(int)hs; 
min=(hs-inteira_hs)*100;

printf("O horário informado é %.2d:%.0f.\n",inteira_hs,min);

 

system("pause"); 
}
int main(){
	data();
	return 0;
}

