#include <iostream>
#include<stdio.h>
using namespace std;

int main(){
    char contra[20], confir_contra[20];

    cout << "ingrese una contrasena ";
    cin >>contra;

    cout << "confirme contrasena ";
    cin >>confir_contra;

    while(contra==confir_contra){
        cout<<"contrasena correcta";
        if(contra!=confir_contra){
            cout<<"incorrecto";
        }
    return 0;
    }
}