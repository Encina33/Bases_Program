//
// Created by Maria Encina on 04/11/2024.
//

using namespace std;
#include <iostream>
#include <fstream>
using namespace std;


int main() {
    int numero, i = 1;

    cout << "Introduce un numero para ver su tabla de multiplicar: ";
    cin >> numero;
    do{
        cout << "Tabla de multiplicar del " << numero << " usando un bucle while: " << endl;
        cout << numero << "x" << i << "=" << numero * i << endl;
        i++;
    }while(i < 10);
}