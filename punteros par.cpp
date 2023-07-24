#include<iostream>
#include<conio.h>
using namespace std;

int main(){

	int numero, *dirnumero;
	
	cout<<"Digite un numero: ";
	cin>> numero;
	
	dirnumero = &numero; //Se guarda la posicion de la memoria.
	
	if(*dirnumero%2 == 0){
		cout<<"El numero "<<*dirnumero<<"es par."<<endl;
		}else{
		cout<<"El numero "<<*dirnumero<<"es impar."<<endl;
		}
	
	getch();
	return 0;
}
