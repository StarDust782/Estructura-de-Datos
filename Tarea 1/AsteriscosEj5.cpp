#include<iostream>
using namespace std;

int main(){
	string cadena;
	cout<<"Ingrese una cadena de texto que contenga espacios en blanco: "<<endl;
	getline(cin, cadena);
	
	for(int i=0; i<cadena.length(); i++){
		if(cadena[i]==' ')
		cadena[i] = '*';
	}
	
	cout<<cadena<<endl;
	return 0;
}
