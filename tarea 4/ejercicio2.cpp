#include <iostream>

using namespace std;

int main(){

  int n;

    while(n!=0){
    
        cout<< "ingrese el numero por favor: ";
        cin>>n;
        if(n!=0){
            if(n % 2 == 0){
                cout<<"el numero es par"<<endl;
            }else{
                cout<<"el numero es impar"<<endl;
            }
        }else{
            cout<<"Ingresaste el numero 0";
        }
 
    }
    
  return 0;
}