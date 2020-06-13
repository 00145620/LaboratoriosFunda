#include <iostream>
 
using namespace std;


int main(){
  char Nombre[10], Apellido[10]; 
  int nhn, nhe,n;
  float salariot, salarior;
  n = 1;

  while(n!= 0){
    cout<<"Ingrese el nombre del trabajador: ";
    cin>>Nombre;
    cout<<"Ingrese el apellido del trabajador: ";
    cin>>Apellido;
    cout<<"Ingrese cuantas horas normales trabajo: ";
    cin>>nhn;
    cout<<"Ingrese cuantas horas extras trabajo: ";
    cin>>nhe;

    salariot= (nhn * 1.75) + (nhe * 2.50);

    if(salariot>500){

      salarior = salariot - ((salariot * 0.04) + (salariot  * 0.0625) + (salariot * 0.1));
    }else{
      salarior = salariot - ((salariot * 0.04) + (salariot  * 0.0625));
    }
  
    cout<< Nombre<< " "<< Apellido <<" tiene un salario total de: $"<< salariot<< " Y un salario real de: $"<< salarior;
    cout<<"\nSi desea continuar presione 1, si no, presione 0: ";
    cin>>n;
  }


  return 0;  
}