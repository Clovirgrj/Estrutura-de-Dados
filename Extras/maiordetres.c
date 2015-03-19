int maiordetres(int x,int y, int z){

if (x>z & x>y){
	return x;
}
else if (y>z & y>x){
	return y;
}
else if (z>x & z>y){
	return z;
}
}
#include <stdio.h>
int main(){
	long int x,y,z;
	scanf("%i%i%i",&x,&y,&z);
	maiordetres(x,y,z);
	return (0);
}

