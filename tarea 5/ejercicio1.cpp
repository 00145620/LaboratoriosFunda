#include <iostream>

using namespace std;

int mcd(){
  int num1,num2,a, b, resultado;

  cout<<"Ingrese el primer numero: ";
  cin>>num1;
  cout<<"Ingrese el segundo numero: ";
  cin>>num2;

  a = std::max(num1, num2);
  b = std::min(num1, num2);

  do{
    resultado = b;
    b = a%b;
    a = resultado;
  }while (b!=0);
  
  return resultado;
} 
int main(){

  cout<<"M.C.D.\n";


  cout<<"El M.C.D. es: "<<mcd();

  return 0;
}