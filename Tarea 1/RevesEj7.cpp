#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	
	string cadena;
	string cadena2;
	cout<<"Ingrese una cadena de texto: "<<endl;
	getline(cin, cadena);
	int tamanio = end(cadena)-begin(cadena);
	transform(cadena.begin(), cadena.end(),cadena.begin(), ::toupper);
	for(int i=tamanio; i>=0; i--)
	{
	cadena2 += cadena[i];
	}
	cout<<"Cadena dada vuelta en mayuscula: "<<endl;
	cout<<cadena2<<endl;
	return 0;
}
