#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int opc,x,y,i;
int main(){
	
	cout<<"\tBienvenido";
	
	cout<<"\n1.Lanzar monedas";
	cout<<"\n2.Lanzar dados";
	cout<<"\n3.Salir";
	cout<<"\nopcion";
	cin>>opc;
	
	
	
	
	
	switch(opc)
	{
		case 1:{
		int x,veces,cara=0,escudo=0;
		srand((unsigned)time(NULL));
		
		cout<<"\tBienvenido a Lanzar Monedas";
		
		printf("Prueba a lanzar.\n\n");		
		
		for(i=1;i<=10;i++){
				x=rand()%(2);
				if(x==1){
					printf("\nCara\n\n");
					cara++;
				}else{
					printf("\nEscudo\n\n");
					escudo++;
				}
				
		}
		
		cout<<"\Recuento\n\n";
		cout<<"La Cara ha salido\n"<<cara<<endl;
		cout<<"El Escudo ha salido\n"<<escudo<<endl;
			
		}
		
		break;
		
		
		case 2:{
			
		int i=1,dado,lanzamiento,suma;{
		suma = 0;
		
		
		while(i<=10)
		
		{
			
			dado = rand() % 6 + 1;
			
		cout<<"Lanzamiento"<<i<<" "<<dado<<endl;
		
	
		i++;
		
		suma = dado + i;
					
		}
		
		cout<<"La suma de los lanzamientos dan: "<< suma <<endl;

				
			break;
		}
	}
			
			
			
		case 3:{
			
			
			cout<<"\tHasta Luego!";
			
			break;
			
			
			}
			
						
	
	}
	
	return 0;
}


