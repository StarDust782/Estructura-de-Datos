#include<iostream>
#include<fstream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
	fstream archivo;
	 int num;
	 int azar;
    srand(time(NULL));
	archivo.open("numerosAzar.txt", ios::app);
if(archivo.is_open())
{
	cout<<"archivo encontrado"<<endl;
	for( int i = 0; i <2000; i++ ){
		azar = rand()%(85-5+1)+5;
		archivo << azar << endl;
	}
	archivo.close();	
	cout<<"Numeros insertados con exito: "<<endl;
}
else
cout<<"El archivo no existe o no tiene permiso para abrirlo: "<<endl;

return 0;
}
