#include<iostream>
using namespace std;

int main(){
	
	string cadena;
	int contador=0;
	cout<<"Ingrese una cadena de texto: "<<endl;
	getline(cin, cadena);
	
	for(int i=0;i<cadena.length();i++){
		if(i==0){
			if(cadena[i]!=' ')
				contador++; 
		}
		else{
			if(cadena[i]==' ' && cadena[i+1]!=' '){
				contador++; 
			}
		}
	}
	cout<<"El texto contiene "<<contador<<" palabras"<<endl;
	return 0;
}
