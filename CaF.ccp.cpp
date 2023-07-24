#include<stdio.h>

int main(){
	
	float c,f;
	
	printf ("Ingrese los grados celsius \n");
	
	scanf("%f", &c);
	
	f = (c*9/5) + 32;
	
	printf ("La conversion a fahrenheit son: %.2f", f);
	
	return 0;
}
