#include<iostream>
using namespace std;
int f,negativo,positivo;
int array[10];

int main(){

	positivo = 0;
	negativo = 0;
	
	for(f=0;f<=9;f++) {
	cout<<"Ingrese el numero"<< f+1 << ":";
	cin>> array[f];
	}
	
	for(f=0;f<=9;f++) 
	
	if(array[f]>0){
	
	positivo = positivo + 1;
	
	}else{
	
		negativo = negativo + 1;}
			
	 cout<<endl<< "La cantidad de numeros positivos: "<< positivo <<endl;
	 cout<<endl<< "La cantidad de numeros negativos: "<< negativo <<endl;
		
return 0;
}
