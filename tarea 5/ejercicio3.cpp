#include <iostream>

using namespace std; 

bool anio(){ 
  int year, div1, div2, div3; 
  bool bisiesto;

  cout << "Ingrese el anio: ";
  cin>>year;
  
  div1 = year % 4;
  div2 = year % 100; 
  div3 = year % 400;

  if((div3 == 0)||((div1 == 0) & (div2 != 0))){ 
    return true;
  }else{
    return false;
  }
}

int main(){


  if(anio() == true){
    cout<<"El anio es bisiesto.";
  }else{
    cout<<"El anio no es bisiesto.";
  }

  return 0;
}