//Daniel Vladimir Solis Marroquin
// Numeros impares
#include <iostream>
using namespace std;
//Iniciamos nuestro main
int main()
{
    //Declaramos nuestras variables
    //Iniciamos el valor inicial del arreglo en 0
    int Impares[100] = {0};
    //Declaramos un contador
    int count = 0;
    //contaremos los primeros 100 numeros enteros que cumplen con que su residuo al dividirlos con 2 es 1
    for (int i = 0; count < 100; i++)
    {
        if (i % 2 == 1)
        {
            Impares[count] += i;
            /*Al ocupar una nueva posicion en el arreglo de 100 numeros el contador aumenta,
            lo que significa que hay mas espacios ocupados dentro de los arreglos por un numero impar*/
            count++;
        }
    }
    for (int i = 99; i >= 0; i--)
    {
        //Para mostrarlos descendentemente, iniciamos con el numero impar que ocupa la posicion 99 y...
        //...terminamos con el numero 1(primer impar entero positivo), el cual ocupa la posición 0 en el arreglo
        cout << Impares[i] << endl;
    }

    return 0;
    //Fin del programa
}