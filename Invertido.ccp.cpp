#include<iostream>
using namespace std;

int main(){
	int cont, d, r, x, num, sw, suma;
	printf("Ingresar numero : ");
	scanf("%i",&num);
	
	sw = 0;
	cont = 1;
	suma = 0;
	
	if (num<10){
		printf("%i\n", num);} else {
		while (sw == 0)	{ 
		if (num>(cont*10)){
			cont = cont*10;
		}else {
			sw =1;
			}
			}
		}
		x=1;
		r=0;
		d=0;
		while (num > 10){
			r = num%cont;
			d = (num - r)/cont;
			suma = (d*x) + suma;
			x = x*10;
			num = r;
			cont = cont/10;
		}
		printf("\n");
		printf("%d\n",(x*r)+suma);
		
		return 0;
}
		

