#include <iostream>

using namespace std;

int main(){
    int dia, mes, anio, d; 
    cout<<"introduce el dia: ";
    cin>>dia;
    cout<<"Introduce el mes: ";
    cin>>mes;
    cout<<"Introduce el anio: ";
    cin>>anio;

  d=dia+1;

    if((dia>31)||(mes>12)||(anio<0)){
        cout<<"La fecha no es valida";
    }else if((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12)){
        if((dia > 31)||dia<1){
            cout<<"Dia no valido";
        }else if((d>31)&(mes!=12)){
            dia = 1;
            mes = mes + 1;
            cout<<dia<<"/"<<mes<<"/"<<anio;
        }else if(d<31){
            cout<<d<<"/"<<mes<<"/"<<anio;
        }else if((d>31)&(mes==12)){
            dia = 1;
            mes = 1;
            anio = anio + 1;
            cout<<dia<<"/"<<mes<<"/"<<anio;
        }
    }else if(mes==2){
        if((anio % 4 != 0)&((anio % 400 !=0))){
            if((dia > 28)||(dia<1)){
                cout<<"Dia no valido";
            }else if(d>28){
                dia = 1;
                mes = mes + 1;
                cout<<dia<<"/"<<mes<<"/"<<anio;
            }else if(d<28){
                cout<<d<<"/"<<mes<<"/"<<anio;
            }
        }else if((anio % 4 == 0)&(((anio % 100!=0))||(anio % 400==0))){
            if((dia > 29)||(dia<1)){
                cout<<"Dia no valido";
            }else if(d>29){
                dia = 1;
                mes = mes + 1;
                cout<<dia<<"/"<<mes<<"/"<<anio;
            }else if(d<=29){
                cout<<d<<"/"<<mes<<"/"<<anio;
            }
        }
    }else if((mes==4)||(mes==6)||(mes==9)||(mes==11)){
        if((dia > 30)||(dia<1)){
            cout<<"Dia no valido";
        }else if(d>30){
            dia = 1;
            mes = mes + 1;
            cout<<dia<<"/"<<mes<<"/"<<anio;
        }else if(d<30){
            cout<<d<<"/"<<mes<<"/"<<anio;
        }
        
        
    } 
  

    return 0;
}