//Daniel Vladimir Solis Marroquin
#include <cstring> //Incluimos esta biblioteca para poder compararlas
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    //longitud maxima de caracteres (30) en la variable palabra
    char palabra[30];
    cout << "Introduce una palabra: ";
    //enviamos nuestra palabra
    cin >> palabra;
    //guardamos cada letra en una variable de tipo char
    char primera = palabra[0];
    char ultima = palabra[strlen(palabra) - 1];
    //comparamos los char para saber si son la misma letra
    if (ultima == primera)
    {
        cout << "La inicial de la palabra coincide con su ultima letra, es decir la primera y la ultima letra de la palabra son iguales";
    }
    else
    {
        cout << "La inicial de la palabra no coincide con su ultima letra, es decir la primera y la ultima letra de la palabra son distintas";
    }
}
