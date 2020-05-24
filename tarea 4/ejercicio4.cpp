#include <iostream>
#include <string.h>

using namespace std;

int main(){

  char palabra[25];
  int longitud; 
  cout<<"Ingrese palabra: ";
  cin>>palabra; 

  longitud = strlen(palabra);
  if(longitud<10){
    cout<<palabra <<" es menor a 10 caracteres."<<endl;
  }else if(longitud==10){
    cout<<palabra <<" es igual a 10 caracteres."<<endl;
  }else{
    cout<<palabra << " es mayor a 10 caracteres."<<endl;
  }
  if(longitud % 2 == 0){
    cout<<"El numero de caracteres es par."<<endl;
  }else{
    cout<<"El numero de caracteres es impar."<<endl;
  }
  
  return 0;
}