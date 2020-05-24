#include <iostream>
#include <string.h>

using namespace std;

int main(){

  char palabra[25];
  int longitud;
  int final; 
  cout<<"Ingrese la palabra: ";
  cin>>palabra; 
  longitud = strlen(palabra);
  final = longitud - 1;

  if (palabra[0] == palabra[final])
        cout << "Son iguales" << endl;
    else
        cout << "Son distintas" << endl;

  return 0;

}