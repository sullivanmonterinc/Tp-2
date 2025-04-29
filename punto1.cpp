#include <iostream>
using namespace std;
int main(){
    int A[8];
    int suma=0; 
    for(int i=0;i<8;i++){
        cout<<"ingrese los numeros que quiere sumar"<<endl;
        cin>>A[i];
         suma=suma+A[i];
        
    }
    cout<<"tu resultado es"<<suma;
    
}
