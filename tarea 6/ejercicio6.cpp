#include <iostream>

using namespace std;

int main(){

    int n, contador, x; 
    contador=0;

    cout<<"Ingrese la cantidad de nuemeros que tendra el arreglo: ";
    cin>>n;
    int arreglo[n];

    
    for (int i=0; i<n; i++){
	    cout<<"Digite los numeros de la lista: ";
		cin>>arreglo[i];
    }
    cout<<"Ingrese el numero que quiere saber cuantas veces se repite: ";
    cin>>x;

    for(int i=0; i<n; i++){
        if(x == arreglo[i]){
        contador ++; 
        }
    }
    cout<<"El numero "<<x<<" Se repite "<<contador;

   


    return 0;
} 