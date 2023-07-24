#include<iostream>
using namespace std;
int main(){
	int cont;
	int n;
	cout<< "Ingresar numero del 1 - 12:  ";
	cin>> n;
	for (cont=0;cont<=12;cont++){
	cout << cont << "x" << n << " = " << (cont*n) << endl;	
	}
	
	return 0;
}
