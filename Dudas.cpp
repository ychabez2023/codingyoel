#include<math.h>
#include<iostream>
using namespace std;

void triangulo(){
	
	int triangulo=0,a,b;

	cout<<"Ingrese el valor de la base: ";
	cin>>a;
	cout<<"Ingrese el valor de la altura: ";
	cin>>b;

	triangulo = (a*b)/2;
	cout<<"El valor del area del triangulo es: "<<triangulo<<endl;
}
		
void cuadrado(){
	
int cuadrado=0,a,b;
			
			cout<<"Ingrese el valor de los lados";
			cin>>a;
			
			cuadrado =a*a;
			cout<<"El area del cuadrado es: "<<cuadrado<<endl; 
	
}		

void circulo(){
	
int circulo;
float r,pi=3.14;

		cout<<"Ingrese el radio del circulo: ";
		cin>>r;

		circulo = 3.14*(r*r);
	
	
		cout<<"El area del circulo es: "<<circulo<<endl;
	
}

void salir(){
	
	cout<<"Hasta luego";
}
		
int opc;		
int main(){	
	do{
		cout<<"Bienvenido\t";	
		cout<<"\n1. Calcular el area de un triangulo";
		cout<<"\n2. Calcular el area de un cuadrado";
		cout<<"\n3. Calcular el area de un circulo";
		cout<<"\n4. Salir";
		cout<<"\nOpcion: ";
		cin>>opc;

		switch(opc)
		{
			case 1:
				
				triangulo();
				
				
				break;
		
			case 2:
	
				cuadrado(); 
				
				break;

			case 3:
			
				circulo();
				
				break;
	
			case 4:
			
				salir();
				
				break;
			
			default:
				
				break;
			
		}
	
	} while(opc!=4);


}


