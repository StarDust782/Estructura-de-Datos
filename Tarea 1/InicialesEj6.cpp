#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	string nombre;
string iniciales;
	cout<<"Ingrese su nombre completo: "<<endl;
	getline(cin, nombre);
	
	for(int i=0; i<nombre.length(); i++){
			if(i==0){
			if(nombre[i]!=' ')
			iniciales += nombre[i];
		}
		else{
			if(nombre[i]==' ' && nombre[i+1]!=' '){
			iniciales += nombre[i+1];
			}
		}
	}
	transform(iniciales.begin(), iniciales.end(),iniciales.begin(), ::toupper);
	cout<<"Las iniciales de su nombre son: "<<iniciales<<endl;
	return 0;
}
