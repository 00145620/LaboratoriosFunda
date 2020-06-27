#include <iostream>

using namespace std;

float promedio(float a[]);
int comparar(float a[]);

int main (){
    cout<<"Estatura de 25 alumnos:\n";

    float estaturas[25];

    for(int i=0; i<25; i++){
        cout<<"Ingrese la estatura: ";
        cin>>estaturas[i];
    }


    cout<<"Su promedio de estaturas es: "<< promedio(estaturas) <<endl;

    comparar(estaturas);

    return 0;
}
float promedio(float estaturas[]){
    float suma=0, promedio; 

    for(int i =0; i<25; i++){
        suma += estaturas[i];
    } 
    promedio = suma/25;
    return promedio;
}
int comparar(float estaturas[]){
    int arriba, abajo;
    arriba = 0;
    abajo = 0;
    for(int i =0; i<25; i++){
        if(estaturas[i] >= promedio(estaturas)){
            arriba += 1;
        }else{
            abajo += 1;
        } 
    }

    cout<<"Hay "<<arriba<<" estaturas arriba del promedio y "<<abajo<<" abajo del promedio,";


}