#include<iostream>
#include<string.h>
#include<cctype>
#include<cstdlib>

using namespace std;

bool entero(string);

int main(){
	string seccion;
	int numero;
	bool repite = true;
	
	do{
		cout<<"Ingrese un valor: ";
		getline(cin,seccion);
		
		if (entero(seccion)){
			repite = false;
		}else{
			cout<< "No es un valor entero, Intentelo otra vez"<<endl;
			}
	}while(repite);
	
	numero = atoi(seccion.c_str());
	
	cout<< "El numero ingresado es: "<<numero<<endl;
	cin.get();
	return 0;
}

bool entero(string seccion){
	bool entero = true;
	int longitud = seccion.size();
	
	if(longitud == 0){
		entero = false;
	}else if (longitud == 1&& !isdigit(seccion[0])){
		entero = false;
	}else{
		int indice = 0;
		if (seccion[0]== '+' || seccion[0]== '-'){
			indice = 1;
		}else{
			indice = 0;
		}
		
		while(indice < longitud){
			if(!isdigit(seccion[indice])){
				entero = false;
				break;
			}
			indice++;
		}
	}
	
	return entero;
}



