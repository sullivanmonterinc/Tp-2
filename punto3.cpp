#include <iostream>
using namespace std;

int main(){
	int pos;
	int valor;
	cout<<"Ingrese en la posicion que desea ingresar un nuevo elemento (del 1 al 4): ";
	cin>>pos;
	if(pos>4){
		cout<<"Tiene que ser menor o igual a 4.";
		return 0;
	}
	if(pos<1){
		cout<<"Tiene que ser mayor o igual a 1.";
		return 0;
	}
	
	int posfix = pos - 1; 
	
	cout<<"Ingrese el valor que desea ingresar al nuevo elemento: ";
	cin>>valor;
	if(valor<0){
		cout<<"No tiene que ser negativo.";
		return 0;
	}
	if(valor==0){
		cout<<"No tiene que ser cero.";
		return 0;
	}
		
	int vector[4] = {5, 10, 0, 15};
	int aux[4] = {0};
	int contadoraux = 0;
	
	for(int i=0; i<4; i++){
		if(i==posfix){
			vector[i] = valor;
		}
		vector[i] += vector[i];
		if(vector[i] != 0){
			aux[contadoraux] += vector[i];
			contadoraux++;
		}
	}
	
	for(int i=0; i<contadoraux; i++){
		cout<<aux[i]<<endl;
	}
}
