#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string cadena;
	int a = 0;
	int e = 0;
	int i = 0;
	int o = 0;
	int u = 0;
	cout<<"Ingrese una cadena de texto: "<<endl;
	getline(cin, cadena);
	string copia = cadena;
	transform(copia.begin(), copia.end(), copia.begin(), ::tolower);
	for(int j=0; j<copia.length(); j++){
		if(copia[j] == 'a')
		a++;
		if(copia[j] == 'e')
		e++;
		if(copia[j] == 'i')
		i++;
		if(copia[j] == 'o')
		o++;
		if(copia[j] == 'u')
		u++;
	}
	
	cout<<"La cadena de texto contiene la siguiente cantidad de cada silaba:\n  "<<endl;
	cout<<"Vocal: "<<"\t\t\t\t\t\t"<<"Cantidad"<<endl;
	cout<<"a: "<<"\t\t\t\t\t\t"<<a<<endl;
	cout<<"e: "<<"\t\t\t\t\t\t"<<e<<endl;
	cout<<"i: "<<"\t\t\t\t\t\t"<<i<<endl;
	cout<<"o: "<<"\t\t\t\t\t\t"<<o<<endl;
	cout<<"u: "<<"\t\t\t\t\t\t"<<u<<endl;
	
	return 0;
}
