#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	string cadena[10];
	string nombre;
	for(int i=0; i<10; i++)
	{
		cout<<"Ingrese un nombre para aniadir al arreglo: "<<endl;
		getline(cin, nombre);
		cadena[i] = nombre;
	}
	
	cout<<"Los nombres dentro del arreglo son: "<<endl;
		for(int j=0; j<10; j++)
	{
		cout<<cadena[j]<<endl;
	}
	
	return 0;
}
