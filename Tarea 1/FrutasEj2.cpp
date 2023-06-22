#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string frutas[] = {"toronja", "piña", "aguacate", "manzana", "pera", "uva", "mora", "limon", "melon", "durazno", "kiwi", "naranja", "sandia", "cereza", "fresa", "banano", "mango", "guayaba", "papaya", "coco"};
	string nombre;
	cout<<"Ingrese la fruta que desea buscar en el arreglo: "<<endl;
	getline(cin, nombre);
	int valido = 0;
	
	
	for(int i=0; i<=20; i++){	
	transform(frutas[i].begin(), frutas[i].end(),frutas[i].begin(), ::toupper);
	transform(nombre.begin(),nombre.end(),nombre.begin(), ::toupper);
		int posicion = frutas[i].find(nombre,0);
 	if( posicion != -1 ){
 		valido++;
	 }
}

if(valido > 0)
cout<<"La fruta fue encontrada en el arreglo:"<<endl;
else
cout<<"La fruta no existe en el arreglo: "<<endl;
	
	
	return 0;
}
