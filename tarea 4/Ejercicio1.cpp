#include <iostream>
using namespace std;

int main(){

    int a, b;
    cout<<"Ingrese el valor de a: ";
    cin>>a;
    cout<<"Ingrese el valor de b: ";
    cin>>b;

    if((a % b == 0 ) && (b!=0)){
        cout<< a << " es divisible entre " <<b;
    }else{
        cout<< a << " no es divisible entre " <<b; 
    }

    return 0; 
}