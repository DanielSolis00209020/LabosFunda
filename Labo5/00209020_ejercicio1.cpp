//Daniel Vladimir Solis Marroqquin
//M.C.D
#include <iostream>
#include <algorithm>
//uso de las bibliotecas necesarias
using namespace std;

int main()
{
    // Declaramos las variables
    int n1, n2, a, b, mcd;
    //Inicia bucle para validar que los numeros no sean 0
    do
    {   // Pedimos al usuario que ingrese el primer numero
        cout << "Ingrese el primer numero: " << endl;
        //mandamos el valor del primer numero
        cin >> n1;
        //Pedimos al usuario el segundo numero
        cout << "Ingrese el segundo numero: " << endl;
        //mandamos el valor del segundo numero
        cin >> n2;
        //Mostrar mensaje para mostrar al usuario que no puede ingresar el numero 0
        if (n1 == 0 || n2 == 0)
            cout << "Los numeros no pueden ser 0" << endl;
        //siempre y cuando los numeros no sean 0
    } while (n1 == 0 || n2 == 0);
    // Seleccionamos el mayor de los #
    a = std::max(n1, n2);
    //Seleccionamos el menor de los #
    b = std::min(n1, n2);
    //Proceso del calculo del MCD
    mcd = b;
    b = a % b;
    a = mcd;
    // Mostramos el resultado al usuario
    cout << "El M.C.D. entre " << n1 << " y " << n2 << " es: " << mcd;
    return 0;
    //Fin del programa
}