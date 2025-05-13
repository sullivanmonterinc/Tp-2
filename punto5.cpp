#include <iostream>
using namespace std;

int main(){
	float vector[5] = {1.86, 1.54, 1.60, 1.90, 1.74};
	float suma;
	
	for(int i=0; i<5; i++){
		suma += vector[i];
	}
	
	float prom;
	prom = suma/5;
	
	int altas = 0;
	int bajas = 0;
	
	for(int i=0; i<5; i++){
		if(vector[i] > prom){
			altas++;
		} else if(vector[i] < prom){
			bajas++;	
		}
	}
	
	cout<<altas<<" personas son mas altas que el promedio ("<<prom<<")"<<endl;
	cout<<bajas<<" personas son mas bajas que el promedio ("<<prom<<")"<<endl;
}

