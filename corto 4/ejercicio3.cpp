#include <iostream>

using namespace std;

float leer(float ar[][5],int n);
float final(float ar[][5],int n);

int main(){
    int n;
    cout<<"Ingrese el numero de estudiantes: ";
    cin>>n;

    float notas[n][5];

    leer(notas,n);
    final(notas,n);
    
    return 0;
}

float leer(float ar[][5],int n){
    for(int i=0; i<n;i++){
        for(int j=0; j<5; j++){
            cout<<"Ingrese la nota del estudiante: ";
            cin>>ar[i][j];
        }
        cout<<endl;
    }
}

float final(float ar[][5],int n){
    float final;
    for(int i=0; i<n;i++){
        final = ar[i][0] * 0.20 + ar[i][1] * 0.20 + ar[i][2] * 0.20 + ar[i][3] * 0.20 + ar[i][4] * 0.20;

         cout<<"La nota final del estudiante es: " << final<< endl; 
   

        if(final>=7){
            cout<<"El estudiante ha aprobado.\n";
        }else{
            cout<<"El estudiante a reprobado.\n";
        }

        
    }   

}