#include <iostream>

using namespace std;

int main(){

    int x;
    string respuesta;
    cout <<"ingrese un numero por favor: ";
    cin>>x;
    if(x!=0){
        respuesta = (x >= 0) ? "positivo" : "negativo";

        cout<< x <<" es "<< respuesta;

    }else{
        cout<<"El numero ingresado es 0";
    }
    
    return 0;
}