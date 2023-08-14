#include<iostream>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

using namespace std;

void calificacion()
{
		int promedio,bueno,muybueno,excelente,reprobado,NAleatorio,resultado;
	int vector[25];
	
	srand(time(NULL));
	for(int i=0;i<=100;i++){
		
		NAleatorio = rand()%101;
	
		
		resultado = resultado + NAleatorio;
		
		reprobado = NAleatorio <= 65;
		bueno = NAleatorio >= 75;
		muybueno = NAleatorio >= 85;
		excelente = NAleatorio > 86;
		
		
		if(NAleatorio <= 65){
			cout<<NAleatorio<<"\nreprobado"<<"\n";
			reprobado++;
		}
		
		if(NAleatorio >= 75){
			cout<<NAleatorio<<"\nbueno"<<"\n";
			bueno++;
		}
		
		if(NAleatorio >= 85 ){
			cout<<NAleatorio<<"\nMuy bueno"<<"\n";
			muybueno++;
		}
		
		if(NAleatorio > 86){
			cout<<NAleatorio<<"\nExcelente"<<"\n";
			excelente++;
		}
	
}
	cout<<"\nReprobados: "<<reprobado++<<endl;
	cout<<"\nBueno"<<bueno++<<endl;
	cout<<"\nMuy bueno"<<muybueno++<<endl;
	cout<<"\nExcelente"<<excelente++<<endl;

}

int main(){
	
int opc;

	cout<<"\nBienvenido";
	cout<<"\n1. Iniciar";
	cout<<"\n2. Salir";
	cout<<"\nOpcion :";
	
	cin>>opc;
	
	
	switch(opc)
	{
		
		case 1: calificacion(); break;
		case 2: break;
		
	}
	
	
	
	
	
	
	
	return 0;
}

