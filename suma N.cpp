#include<iostream>
using namespace std;

int main(){
	int cont, num, suma;
	cont = 0;
	num = 0;
	suma = 0;
	
	cout<<"Ingresar un numero: ";
	cin>> num;
	
	while (cont <= num){
		suma = suma + cont;
		cont = cont + 1;
	}
	
	cout<< "La suma es : " <<suma<<endl;
	
	return 0;
}
