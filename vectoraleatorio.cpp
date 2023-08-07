#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;






void aleatorio(){
	
	

	int vector [10],Mayor = 0,Menor = 200, NAleatorio, Resultado = 0;
	double promedio;
	srand(time(NULL));
	for(int i=0;i<10;i++){
		NAleatorio = rand()%101;
		cout<<NAleatorio<<" \n ";
		
		promedio = NAleatorio;
		Resultado = Resultado + promedio;
		
		if (NAleatorio > Mayor){
			Mayor = NAleatorio;
		}
		
		if (NAleatorio < Menor){
			Menor = NAleatorio;
		}
		Resultado = Resultado / 10;
	}
		cout<<"\n"<<"El numero menor es: "<<Menor<<endl;
		cout<<"\n"<<"El numero mayor es: "<<Mayor<<endl;
		cout<<"\n"<<"El promedio es: "<<Resultado<<endl;
}

int main(){
int start,opc;

	cout<<"\nBienvenido elija su opción: ";
	cout<<"\n1- Iniciar";
	cout<<"\n2- Salir";
	cout<<"\nOpcion";
	
	cin>>opc;
	
	switch(opc){
	
		case 1: 
		cout<<"\nIntroduzca palabra clave para iniciar";
		cin>>start;
		aleatorio();
		break;
	
		case 2:
		cout<<"\nHasta luego";
		break;
	
	}
 return 0;
}
