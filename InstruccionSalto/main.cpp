//
// Created by Maria Encina on 04/11/2024.
//
#include <iostream>
using namespace std;


int main() {
    cout << "Bucle for por instruccion break: " << endl;
    for(int i = 0; i <= 10; i++) {
        if( i == 5) {
            cout << "Se ha alcanzado el numero 5" << endl;
            break;
        }
        cout << i << endl;
    }
    cout << endl;
    return 0;
}