#include<iostream>
using namespace std;

int main(){
	string tablero[4][4];
	tablero[0][0]="#";
	tablero[0][1]="1";
	tablero[0][2]="2";
	tablero[0][3]="3";
	tablero[1][0]="1";
	tablero[2][0]="2";
	tablero[3][0]="3";
	for(int i=1;i<4;i++){
			for(int j=1;j<4;j++){
			tablero[i][j]="-";
		}
	}
	string y,x;
	int a,b;
	int turno=1;
	int n=0;
string label;
	while(n!=1){
			if(turno%2!=0){
			label="ES EL TURNO DEL JUGADOR X";
			}
			else		
				label="ES EL TURNO DEL JUGADOR 0:";
	cout<<label<<endl;
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				cout<<tablero[i][j]<<"\t";
			}
			cout<<endl;
		}
		
		cout<<"Ingrese la posicion en x:"<<endl;
		getline(cin, x);
		cout<<"Ingrese la posicion en y:"<<endl;
		getline(cin,y);
		try{
			
			a=stoi(x);
			b=stoi(y);
			if(a<1||a>3||b<1||b>3){
				cout<<"********************************************"<<endl;
				cout<<"Ingrese unicamente numeros de 1 a 3"<<endl;
				continue;
			}
		}catch(exception ex){
			cout<<"********************************************"<<endl;
			cout<<"Ingrese solo numeros enteros"<<endl;
			continue;
		}
		
		if(tablero[a][b]=="-"){
			if(turno%2!=0){
			tablero[a][b]="X";
			}
			else{		
				tablero[a][b]="0";	
			}	
		}
		else{
			cout<<"********************************************"<<endl;
			cout<<"Puesto seleccionado"<<endl;
			continue;
		}
	
		if(tablero[1][1]=="X" && tablero[1][2]=="X" && tablero[1][3]=="X"){
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					cout<<tablero[i][j]<<"\t";
				}
				cout<<endl;
			}
			cout<<"JUEGO FINALIZADO, GANAN LAS X"<<endl;
			cout<<"GRACIAS POR JUGAR:"<<endl;
			break;
		}
		if(tablero[2][2]=="X" && tablero[2][2]=="X" && tablero[2][3]=="X"){
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					cout<<tablero[i][j]<<"\t";
				}
				cout<<endl;
			}
			cout<<"JUEGO FINALIZADO, GANAN LAS X"<<endl;
			cout<<"GRACIAS POR JUGAR:"<<endl;
			break;
		}
		if(tablero[3][1]=="X" && tablero[3][2]=="X" && tablero[3][3]=="X"){
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					cout<<tablero[i][j]<<"\t";
				}
				cout<<endl;
			}
			cout<<"JUEGO FINALIZADO, GANAN LAS X"<<endl;
			cout<<"GRACIAS POR JUGAR:"<<endl;
			break;
		}
		if(tablero[1][1]=="X" && tablero[2][1]=="X" && tablero[3][1]=="X"){
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					cout<<tablero[i][j]<<"\t";
				}
				cout<<endl;
			}
			cout<<"JUEGO FINALIZADO, GANAN LAS X"<<endl;
			cout<<"GRACIAS POR JUGAR:"<<endl;
			break;
		}
		if(tablero[1][2]=="X" && tablero[2][2]=="X" && tablero[3][2]=="X"){
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					cout<<tablero[i][j]<<"\t";
				}
				cout<<endl;
			}
			cout<<"JUEGO FINALIZADO, GANAN LAS X"<<endl;
			cout<<"GRACIAS POR JUGAR:"<<endl;
			break;
		}
		if(tablero[1][3]=="X" && tablero[2][3]=="X" && tablero[3][3]=="X"){
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					cout<<tablero[i][j]<<"\t";
				}
				cout<<endl;
			}
			cout<<"JUEGO FINALIZADO, GANAN LAS X"<<endl;
			cout<<"GRACIAS POR JUGAR:"<<endl;
			break;
		}
		if(tablero[1][1]=="X" && tablero[2][2]=="X" && tablero[3][3]=="X"){
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					cout<<tablero[i][j]<<"\t";
				}
				cout<<endl;
			}
			cout<<"JUEGO FINALIZADO, GANAN LAS X"<<endl;
			cout<<"GRACIAS POR JUGAR:"<<endl;
			break;
		}
		if(tablero[1][3]=="X" && tablero[2][2]=="X" && tablero[3][1]=="X"){
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					cout<<tablero[i][j]<<"\t";
				}
				cout<<endl;
			}
			cout<<"JUEGO FINALIZADO, GANAN LAS X"<<endl;
			cout<<"GRACIAS POR JUGAR:"<<endl;
			break;
		}
		
		if(tablero[1][1]=="0" && tablero[1][2]=="0" && tablero[1][3]=="0"){
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					cout<<tablero[i][j]<<"\t";
				}
				cout<<endl;
			}
			cout<<"JUEGO FINALIZADO, GANAN LAS 0"<<endl;
			cout<<"GRACIAS POR JUGAR:"<<endl;
			break;
		}
		if(tablero[2][2]=="0" && tablero[2][2]=="0" && tablero[2][3]=="0"){
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					cout<<tablero[i][j]<<"\t";
				}
				cout<<endl;
			}
			cout<<"JUEGO FINALIZADO, GANAN LAS 0"<<endl;
			cout<<"GRACIAS POR JUGAR:"<<endl;
			break;
		}
		if(tablero[3][1]=="0" && tablero[3][2]=="0" && tablero[3][3]=="0"){
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					cout<<tablero[i][j]<<"\t";
				}
				cout<<endl;
			}
			cout<<"JUEGO FINALIZADO, GANAN LAS 0"<<endl;
			cout<<"GRACIAS POR JUGAR:"<<endl;
			break;
		}
		if(tablero[1][1]=="0" && tablero[2][1]=="0" && tablero[3][1]=="0"){
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					cout<<tablero[i][j]<<"\t";
				}
				cout<<endl;
			}
			cout<<"JUEGO FINALIZADO, GANAN LAS 0"<<endl;
			cout<<"GRACIAS POR JUGAR:"<<endl;
			break;
		}
		if(tablero[1][2]=="0" && tablero[2][2]=="0" && tablero[3][2]=="0"){
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					cout<<tablero[i][j]<<"\t";
				}
				cout<<endl;
			}
			cout<<"JUEGO FINALIZADO, GANAN LAS 0"<<endl;
			cout<<"GRACIAS POR JUGAR:"<<endl;
			break;
		}
		if(tablero[1][3]=="0" && tablero[2][3]=="0" && tablero[3][3]=="0"){
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					cout<<tablero[i][j]<<"\t";
				}
				cout<<endl;
			}
			cout<<"JUEGO FINALIZADO, GANAN LAS 0"<<endl;
			cout<<"GRACIAS POR JUGAR:"<<endl;
			break;
		}
		if(tablero[1][1]=="0" && tablero[2][2]=="0" && tablero[3][3]=="0"){
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					cout<<tablero[i][j]<<"\t";
				}
				cout<<endl;
			}
			cout<<"JUEGO FINALIZADO, GANAN LAS 0"<<endl;
			cout<<"GRACIAS POR JUGAR:"<<endl;
			break;
		}
		if(tablero[1][3]=="0" && tablero[2][2]=="0" && tablero[3][1]=="0"){
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					cout<<tablero[i][j]<<"\t";
				}
				cout<<endl;
			}
			cout<<"JUEGO FINALIZADO, GANAN LAS 0"<<endl;
			cout<<"GRACIAS POR JUGAR:"<<endl;
			break;
		}
		turno++;
		if (turno==9){
			n=1;
			cout<<"No quedan mas movimientos, es empate"<<endl<<endl;
			system("pause");
		}
		cout<<"*************************************************"<<endl;
		system("cls");
		}
		return 0;
 
}
