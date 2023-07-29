#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

int main(){
	char letras[] = " solitario ";
	char letra2[] = { 'S','o','l','i','t','a','r','i','o'};
	char nombre[20];
	
	int longitud = 0;
	
	longitud = strlen (letras); 
	
	cout<<"Digite la palabra";
	cin.getline(nombre,20 ,'\n');
	cout<<nombre<<endl;
	cout<<"La longitud es: "<<longitud<<endl;
	
	
	getch();
	return 0;
}
