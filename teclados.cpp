#include<iostream>
using namespace std;

int main(){
	int cantidad, costo;
	cout << "Ingresar la cantidad a comprar: ";
	cin >> cantidad;
	switch(cantidad){
		case 1: case 2: case 3:
				costo = 100;
				break;
		case 4: case 5: case 6: case 7: case 8:
				costo = 90;
				break;
		default:
				costo = 85;
	
	}
	cout << endl;
	cout << "costo por cada teclado : " <<costo << endl;
	cout << "Total a pagar : " << (costo*cantidad) << endl;
	return 0;
}

