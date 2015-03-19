#include<stdio.h> 

int datad(){
	int a, b, c, x, y, z;
	printf("data 1\n");
	scanf("%d%d%d", &a, &b, &c);
	printf("data 2\n");
	scanf("%d%d%d", &x, &y, &z);
	if ( c > z){
		printf("data 1\n");}
	else if(z > c){
		printf("data 2\n");}
	else if (c == z & b > y){
		printf("data 1\n");}
	else if (c == z & y > b){
		printf("data 2\n");}
	else if (c == z & b == y &  a > x){
		printf("data 1\n");}
	else if (c == z & b == y &  x > a){
		printf("data 2\n");}				
}

int main(){
    datad();
    return 0;
}

