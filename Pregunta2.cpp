#include <iostream>
#include<stdio.h>
using namespace std;

int main(){
    char nombre[20];
    char primer_apellido[20];
    char segundo_apellido[20];

    cout<<"Ingrese su Nombre: ";
    cin>>nombre;
    cout<<"Ingrese su Primer Apellido: ";
    cin>>primer_apellido;
    cout<<"Ingrese su Segundo Apellido: ";
    cin>>segundo_apellido;

    cout<<"Hola "<<nombre<<" "<<primer_apellido<<" "<<segundo_apellido<<endl;

    cout<<"Tu correo de la UNSA es:"<<nombre[0]<<primer_apellido<<segundo_apellido[0]<<"@unsa.edu.pe"<<endl;

    system("PAUSE");

   

}