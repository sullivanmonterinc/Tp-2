#include <iostream>
using namespace std;

int main(){
	int vector[4] = {10, 20, 30, 40};
	int suma;
	for(int i=0; i<4; i++){
		suma += vector[i];
	}
	
	float promedio;
	
	promedio=suma/4;
	
	cout<<"La suma del vector es: "<<suma<<endl;
	cout<<"El promedio de la suma del vector es: "<<promedio;
}
