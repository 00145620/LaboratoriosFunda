#include <iostream>

using namespace std;

const int longcad =20; 

struct CostoPorArticulo{
    char nombrearticulo[longcad + 1];
    int cantidad;
    float precio;
    float costoporarticulo;
};

float leer(struct CostoPorArticulo p[],int n);
float calcular(struct CostoPorArticulo p[],int n); 
float desplegar(struct CostoPorArticulo p[],int n);
float total(struct CostoPorArticulo p[],int n);

int main(){
        
    int n;
    cout<<"Cantidad de articulos: ";
    cin>>n;
    cout<<"\n";
    CostoPorArticulo CPA[n];


    leer(CPA, n);
    calcular(CPA, n);
    desplegar(CPA, n);
    cout<<"El precio total de la compra es: $" << total(CPA,n);

    return 0;
}


float leer(struct CostoPorArticulo p[],int n){
    for(int i =0; i<n; i++){
        cout<<"Ingrese nombre del articulo: ";
        cin>> p[i].nombrearticulo;
        cout<<"Ingrese la cantidad de articulos: ";
        cin>> p[i].cantidad;
        cout<<"Ingrese el precio del articulo: $";
        cin>>p[i].precio;
        cout<<"\n";
    }

}

float calcular(struct CostoPorArticulo p[],int n){
    for(int i =0; i<n; i++){
        p[i].costoporarticulo = p[i].cantidad * p[i].precio;
    }

}

float desplegar(struct CostoPorArticulo p[],int n){
    for(int i =0; i<n; i++){
        cout<<"Nombre del articulo: "<<p[i].nombrearticulo<<"\n";
        cout<<"Cantidad de articulos: "<<p[1].cantidad<<"\n";
        cout<<"Precio de cada articulo: $"<<p[i].precio<<"\n";
        cout<<"Precio total del articulo: $"<<p[i].costoporarticulo<<"\n";
        cout<<"\n";
    }

}

float total(struct CostoPorArticulo p[],int n){
    float preciototal = 0;
    for(int i =0; i<n; i++){

        preciototal += p[i].costoporarticulo;

    }
    return preciototal;
}