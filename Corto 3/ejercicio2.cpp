#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
  int ranum , numero,n;
  srand(time(NULL));
  ranum = rand()%(101-1);
  ranum;

  cout<<"Intenta adivinar el numero!\n";
  cout<<"Si en algun momento quieres salir escribe el numero 0\n";

  int contador = 5;
  for (int i = 0; i < n; i++)

  while(contador!=0){
    
    cout<<"Escribe un numero del 1 al 100: ";
    cin>>numero;
    
    if(numero == ranum){
      cout<<"Adivinaste el numero!\n";
      contador = 0;
    }else if(numero == 0){
      contador = 0;
    }else{ 
      cout<<"Fallaste :(\n";
      if(numero < ranum){
        cout<<"El numero que buscas es mayor, ";
      }else{
        cout<<"El numero que buscas es menor, ";
      }
      contador -= 1;
      cout<<"tienes "<<contador<<" oportunidades\n";
    }
  }
  cout<<"El numero que buscabas es:"<<ranum<<"\n";
  cout<<"Vuelve pronto!";
  
  return 0;
}