#include<iostream>
using namespace std;
int main(){
	int x, a, num, matrix(4),(5);
	
	num = 1 ;
	
	for(x=0;x<=3;x++){
		
		for(a=0;a<=4;a++){
			matrix(x)(a) = num;
			num = num + 1;
		}
	}
	cout<<"Ingresar numeros del 1 al 20 : ";
	cin>> num;
	cout<< " " << endl;
	if (num>=1 && num<=20){
		for (x=0;x<=3;x++){
			cout<< matrix(x)(0)<<" " << matrix(x)(1) <<" " << matrix(x)(2)<<" " <<matrix(x)(3)<< " " <<matrix(x)(4) << endl;
		}
		cout << " " << endl;
		for (x=0;x<=3;x++){
			for(a=0;a<=4;a++){
				if (matrix(x)(a)==num){
					cout << "Posicion de la matriz["<< x+1 <<"," << +1 <<"]" << endl;
				}
			}
		}
	}else{
		cout << "Numero mal ingresado";
	} 
	return 0;	
}
