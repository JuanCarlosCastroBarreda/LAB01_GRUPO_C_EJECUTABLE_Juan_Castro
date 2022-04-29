#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
    int a, b, c;
    cout<<"Ingrese 2 numeros: "<<endl;
    scanf("%d%d", &a, &b);
    c=a%b;
    if ((b<a) && (c==0)) {
        cout<<"Si es divisible";
    }
    else{
        cout<<"No es divisible";
    }

    return 0;
}