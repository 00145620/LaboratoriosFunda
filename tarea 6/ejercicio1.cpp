#include <iostream>

using namespace std;

int main (){

    int n;
    cout<<"ingrese el tamanio del arreglo: "; cin>>n;

    int vector[n];

    //llenamos el array
    for(int i=0; i<n; i++){
        cout<<"ingrese un dato: "; cin>>vector[i];
    }

    //Mostrando el array
    cout << "Array [";
    for(int i=0; i<n; i++){
        cout<< vector[i]<< " "; 
    }
    cout<<"]";

    return 0;
}