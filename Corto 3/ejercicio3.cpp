#include <iostream>

using namespace std; 

int main(){

  int year, div1, div2, div3; 

  cout<<"Ingrese el anio: ";
  cin>>year;
  
  div1 = year % 4;
  div2 = year % 100; 
  div3 = year % 400;

  if((div3 == 0)||((div1 == 0) & (div2 != 0))){ 
    cout<<"El anio "<<year<<" es bisiesto.";

  }else{
    cout<<"El anio "<<year<<" no es bisiesto.";
  }
   

  return 0;
}
