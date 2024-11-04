/*
Utilidad de las variables: Crea un
programa en C++ que haga uso de variables para
almacenar información. Por ejemplo, un programa que solicite al
usuario su nombre y edad, almacene estos datos en variables y luego los
imprima en pantalla.
 */
using namespace std;
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string nombre;
    int edad;
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Hola " << nombre << " tienes " << edad << " anos." << endl;
}