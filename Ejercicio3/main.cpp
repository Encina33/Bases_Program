/*
Sintaxis de declaración: Practica la declaración de variables en C++
en varios contextos: dentro de una función, fuera de las funciones
(variables globales), dentro de un bloque (como dentro de un bucle o una
declaración if), etc.
 */
using namespace std;
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int variableGlobal = 100;

void ejemploFuncion() {
    int variableLocal = 10;
    cout << "Dentro de ejemploFuncion: " << variableGlobal << endl;
    cout << "Variable global: " << variableGlobal << endl;
    cout << "Variable local dentro de ejemploFuncion: " << variableLocal << endl;
}

int main() {
   int variableLocalMain = 20;
    cout << "Dentro de ejemploFuncion: " << endl;
    cout << variableGlobal << endl;
    cout << "Variable local dentro de main: " << variableLocalMain << endl;

    //Ejemplo declaracion dentro de un bloque
    if(variableLocalMain > 10) {
        int VariableBloque = 30;
        cout << "Dentro del bloque if: " << endl;
        cout << "Variable global: " << variableGlobal << endl;
        cout << "Variable local main: " << variableLocalMain << endl;
        cout << "Variavle local bloque if: " << VariableBloque << endl;

    }

    for(int i = 0; i < 3; i++) {
        int varibleLocalFor = 40;
        cout << "Dentro del bloque for: " << endl;
        cout << "Variable global: " << variableGlobal << endl;
        cout << "Variable local main: " << variableLocalMain << endl;
        cout << "Variable local for: " << varibleLocalFor << endl;
    }

    ejemploFuncion();
}