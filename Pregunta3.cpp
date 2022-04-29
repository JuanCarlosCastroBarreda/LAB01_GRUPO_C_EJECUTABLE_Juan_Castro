#include <iostream>
#include<stdio.h>
using namespace std;

int main(){
    int horas=0, minutos=0 ,min=0;

    cout <<"Ingrese una hora: ";
    cin>>horas;
    cout <<"Ingrese los minutos: ";
    cin>>minutos;
    
    while(horas<=24){
        while(minutos>=60){
            minutos=minutos-60;
            horas=horas+1;
        }
        if (horas<12){
        cout<<"La hora es "<<horas<<":"<<minutos<<" AM"<<endl; 
        }
        else{
            cout<<"La hora es "<<horas<<":"<<minutos<<" PM"<<endl;    
        }
        
    return 0;
    }

}

