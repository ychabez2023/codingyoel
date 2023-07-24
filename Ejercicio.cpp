#include<iostream>
#include<time.h>
using namespace std;

void numeros(){
	
int i,n,n1,n2,n3,suma=0,producto;

		for(i=0;i<=3;i++){

		cout<<"Ingrese un numero\n: ";
		cin>>n1;
	
		cout<<"Ingrese un numero\n: ";
		cin>>n2;
	
		cout<<"Ingrese un numero\n: ";
		cin>>n3;
		
			if(n1>0){
				
				producto = n1*n2*n3;
			
			cout<<"\nEl producto de los numeros es: "<<producto<<endl;
			
			}else{
			
				suma = n1 + n2 + n3;
		
			cout<<"\nLa suma de los numeros es: "<<suma<<endl;
				}
 		 }  
}

void tablas(){
	
	int tabla;	
	int cont;
	int n;
	cout<<"Ingrese el numero para la Tabla: ";
	cin>>n;
		
		for(cont=0;cont<=12;cont++){
			cout<<cont<< " X " << n <<" = "<< (cont*n) <<endl;
		}
	
}

void positivonegativo(){
	
int f,positivo=0 ,negativo=0,array[10];

	for(f=0;f<=9;f++){
		cout<<"Ingrese el numero"<<f+1<<" : ";
		cin>>array[f];
	}
			
	for(f=0;f<=9;f++)
			if(array[f]>0)
			
				positivo = positivo + 1;
				
			else
				
				negativo = negativo + 1;
			
		cout<<"\nLa cantidad de numeros positivos son: "<<positivo<<endl;	
		cout<<"\nLa cantidad de numeros negativos son: "<<negativo<<endl;
	}
	

void salir(){
	
	cout<<"\tHasta luego";
}

int opc=0;
int main(){
		do{
		cout<<"\tBienvenido";
		cout<<"\n1. Suma o producto de tres numeros";
		cout<<"\n2. Tablas de multiplicar";
		cout<<"\n3. Numeros Positivos/Negativos";
		cout<<"\n4. Salir";
		cout<<"\nopcion: ";
		cin>>opc;


			switch(opc){
			
				case 1:
					
					numeros();
					
					break;
				
				case 2:
					
					tablas();
					
					break;
		
				case 3:
					positivonegativo();
					
					break;		
				
				case 4:
					salir();
					
					break;
						}
						
		}while(opc!=0);
	
}

