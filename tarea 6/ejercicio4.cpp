#include <iostream>

using namespace std;

void leer(float ar[],int n);
void sumar(float ar1[],float ar2[], int n, float resultado[]);
void desplegar(float resultado[],int n);



int main(){
    int n;
    cout <<"Ingrese el tamanio de los arreglos: ";
    cin>>n; 

    float arreglo1[n], arreglo2[n], arreglosuma[n];
    
    cout<<"Ingresar arreglo 1: \n";
    leer(arreglo1, n);
    cout<<"Ingresar arreglo 2; \n";
    leer(arreglo2, n);
    sumar(arreglo1, arreglo2, n, arreglosuma);
    desplegar(arreglosuma,n);
    
    return 0;
}

void leer(float ar[],int n){
    for(int i=0; i<n; i++){
        cout<<"Ingrese el dato de la posicion ["<<i<<"]: ";
        cin>>ar[i];
    }
}

void sumar(float ar1[],float ar2[], int n, float resultado[]){
    for(int i=0; i<n; i++){
        resultado[i]=ar1[i] + ar2[i];
    }    
}

void desplegar(float resultado[],int n){
    for(int i=0; i<n; i++){
        cout<<"La suma de los arreglos en la posicion ["<<i<<"] es: "<<resultado[i]<<endl;
    }
}