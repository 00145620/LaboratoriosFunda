#include <iostream>

using namespace std;

char codificar(char p[]);

int main(){
    char palabra[100];
    cout<<"inserte la palabra: "; 
    cin.getline(palabra,100);

    codificar(palabra);
    

    return 0;
}

char codificar(char palabra[]){
    for(int i=0; i<100; i++){
        if(palabra[i] == 'm'){
            palabra[i] = '0';

        }else if(palabra[i] == 'u'){
            palabra[i] = '1';

        }else if(palabra[i] == 'r'){
            palabra[i] = '2';

        }else if(palabra[i] == 'c'){
            palabra[i] = '3';
        
        }else if(palabra[i] == 'i'){
            palabra[i] = '4';

        }else if(palabra[i] == 'e'){
            palabra[i] = '5';
        
        }else if(palabra[i] == 'l'){
            palabra[i] = '6';

        }else if(palabra[i] == 'a'){
            palabra[i] = '7';
        
        }else if(palabra[i] == 'g'){
            palabra[i] = '8';
        
        }else if(palabra[i] == 'o'){
            palabra[i] = '9';
        }

    }

    cout<<palabra;
}