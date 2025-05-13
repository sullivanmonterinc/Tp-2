#include <iostream>
using namespace std;

int main(){
	
	int vector[10] = {0};
	
	int num[10];
	
	for(int i=0; i<10; i++){
		cout<<"Ingrese el numero "<< i+1 <<":";
		cin>>num[i];
		vector[i] = num[i];
	}
	
	int min = 0;
	int max = 0;
	
	for(int i=0; i<10; i++){
		if(min == 0){
			min = vector[i];
		}
		if(min > vector[i]){
			min = vector[i];
		}
		if(max < vector[i]){
			max = vector[i];
		}
	}
	
	cout<<"El numero mas alto es: "<<max<<endl;
	cout<<"El numero mas bajo es: "<<min;
}
