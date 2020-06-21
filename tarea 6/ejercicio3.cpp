#include <iostream>
#include <math.h>
using namespace std;

float promedio(int a[], int n);
float incerteza(float vector[], int n);

int main (){
    int n;
    cout<< "tamanio del array: "; cin>>n;
    float vector[n];

    //llenar array
    for(int i=0; i<n; i++){
        cout<<"ingrese el dato: "; cin>>vector[i];
    }

    cout<<"el valor de la incerteza es: "<< incerteza(vector,n);


    return 0;
}

float promedio(float array[], int n){
    float suma=0, promedio;

    for(int i =0; i<n; i++){
        suma += array[i];
    }
    promedio = suma/n;
    return promedio;
}

float incerteza(float vector[], int n){
    float suma=0, resta, prom = promedio(vector,n), resultado;

    for(int i=0; i<n; i++){
        resta = vector[i] - prom;
        suma += pow((resta),2);
    }

    resultado = suma / (n-1);
    resultado = sqrt(resultado);

    return resultado;
}