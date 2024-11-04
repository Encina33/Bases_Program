//
// Created by Maria Encina on 04/11/2024.
//
#include <iostream>
using namespace std;



int main(){
    int numero, i = 1;
    cout << "Introduce un numero para ver su tabla de multiplicar: ";
    cin >> numero;
    cout << "Tabla de multiplicar del " << numero << " usando un bucle while: " << endl;
    while(i < 10) {
        cout << numero << "x" << i << "=" << numero * i << endl;
        i++;
    }
    return 0;
}