#include<iostream>
using namespace std;
int main(){
	char l;
	 
	cout<< "Ingresar una letra : ";
	
	cin>> l;
	
	switch(l){
		case 'a':
				cout << "\nVocal"; break;
		case 'e':
				cout << "\nVocal"; break;
		case 'i':
				cout << "\nVocal"; break;
		case 'o':
				cout << "\nVocal"; break;
		case 'u':
				cout << "\nVocal"; break;
				
		default:
				cout << "\nConsonante"; break;
				
	}
	
	return 0;
}
