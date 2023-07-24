#include<iostream>
using namespace std;

int main(){
	
	int numero=0, *definir;
	
	cout<<"Ingrese un numero";
	cin>>numero;
	
	definir = &numero;
	
	if(*definir > 0){
		
		cout<<"El numero es positivo"<<endl;
		}else{
			
		cout<<"El numero es negativo"<<endl;
		}
	
	return 0;
}

