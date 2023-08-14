#include<iostream>
using namespace std;

int cuenta_vocal(char*);

int main()
{
	char cadena[80];
	cout<<"Introducir cadena";
	cin.getline(cadena,80);
	
	cout<<"Numero de vocales: "<<cuenta_vocal(cadena)<<endl;
	system("pause");

}

int cuenta_vocal(char*s){
	
	int contador=0,a=0,e=0,i=0,o=0,u=0;
	while(*s)
	{
		switch(toupper(*s)){
			case 1:
			a++;
			contador;

			case 2:
			e++;
			contador;
			
			case 3:
			i++;
			contador;
			
			case 4:
			o++;
			contador;
				
			case 5:
			u++;	
			contador++;
		}
		s++;
		}
		cout<<"La cadena tiene"<<%i<<"vocales"<<contador<<endl;
		cout<<"A:"<<%i<<a<<endl;
		cout<<"E:"<<%i<<e<<endl;
		cout<<"I:"<<%i<<i<<endl;
		cout<<"O:"<<%i<<o<<endl;
		cout<<"U:"<<%i<<u<<endl;

		 
	}
