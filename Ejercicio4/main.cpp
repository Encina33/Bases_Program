/*
Tipos de datos: Crea un programa en C++ que demuestre el uso de varios
tipos de datos en C++, como int, double, char, y bool. Para cada tipo de
datos, muestra cómo se puede inicializar y utilizar.
 */
using namespace std;
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {

    //Tipo int (numeros enteros)
    int numeroEntero = 42;
    cout << "Numero entero: " << numeroEntero << endl;
    numeroEntero += 10;
    cout << "Numero entero despues sumar 10: " << numeroEntero << endl;

    //Tipo double (numeros decimales)
    double numeroDecimal = 3.14;
    cout << "Numero decimal: " << numeroDecimal << endl;
    numeroDecimal *= 0.01;
    cout << "Numero decimal despues de multiplicar por 0.01: " << numeroDecimal << endl;

    //Tipo char (caracteres)
    char caracter = 'E';
    cout << "Caracter: " << caracter << endl;
    caracter = '&';
    cout << "Caracter despues de cambiarlo: " << caracter << endl;

    //Tipo bool (booleanos)
    bool booleano = true;
    cout << "Valor de Booleano: " << booleano << endl;
    booleano = false;
    cout << "Valor de Booleano despues de cambiarlo a falso el Booleano: " << booleano << endl;

    return 0;
}