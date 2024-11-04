/*
Ámbito de las variables: Crea un programa en C++ que demuestre el uso
de variables locales y globales. Asegúrate de mostrar cómo las variables
locales se limitan a su función respectiva, mientras que las variables
globales son accesibles desde cualquier parte del código.
 */
using namespace std;
#include <iostream>
#include <fstream>
#include <string>
using namespace std;



int VariableGlobal = 10;;

void funcionA()
{
    int VariableLocal = 20;
    cout << "VariableGlobal en funcionA: " << VariableGlobal << endl;
    cout << "VariableLocal en funcionA: " << VariableLocal << endl;
}

void funcionB()
{
    cout << "VariableGlobal en funcionB: " << VariableGlobal << endl;
    //cout << "VariableLocal en funcionB: " << VariableLocal << endl;
    //ESTO NO FUNCIONA PORQUE LA VARIABLE LOCAL SOLO EXISTE EN LA FUNCION A
}

int main() {
    cout << "VariableGlobal en main: " << VariableGlobal << endl;
    //cout << "VariableLocal en main: " << VariableLocal << endl;
    ////ESTO NO FUNCIONA PORQUE LA VARIABLE LOCAL SOLO EXISTE EN LA FUNCION A
    funcionA();
    funcionB();
    return 0;
}