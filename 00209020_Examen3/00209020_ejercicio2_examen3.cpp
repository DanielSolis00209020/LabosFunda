//Daniel Vladimir Solis Marroquin
//Ejercicio sobre "El número mágico"
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

int main()
{
    //definimos variables
    int numero, adivinar, continuar;
    bool condicion = true;
    int i = 5;
    //añadimos un contador
    //calculamos un numero al azar del 1 al 100
    srand(time(NULL));
    numero = 1 + rand() % (101 - 1);
    //Pedir que el usuario adivine el numero
    cout << "En el programa se encuentra un numero al azar del 1 al 100, trata de adivinarlo. Buena suerte crack!!" << endl;
    cout << "Tienes 5 intentos" << endl;
    //se habre un bucle hasta ganar o perder en el juego
    while (condicion == true && i > 0)
    {
        do
        {
            //se envia el numero
            cin >> adivinar;
            //validacion de que el numero cumpla el ranfo de [1-100]
            if (adivinar > 100 || adivinar <= 0)
            {
                cout << "El numero no esta en el rango [1-100]" << endl;
            }
        } while (adivinar > 100 || adivinar <= 0);
        //por cada ingreso de un nuevo numero se pierde un intento, por lo tanto i decrece en 1
        i -= 1;
        // condicionales para indicar si el numero es mayor al que ingreso
        if (adivinar > numero)
        {
            cout << "El numero que ingresaste es mayor que el que tienes que adivinar" << endl;
            cout << "Te quedan: " << i << " intentos." << endl;
            //Preguntamos si quiere seguir jugando y esperamos una respuesta especifica entre 2 opciones
            do
            {
                if (i >= 1)
                {
                    cout << "Quieres continuar jugando, si es asi elige 1 sino elige 2?" << endl;
                    cin >> continuar;
                    switch (continuar)
                    {
                    case 1:
                        cout << "Ok, Elige otro numero que cumpla la condicion anterior" << endl;
                        break;
                    case 2:
                        cout << "Te has rendido" << endl;
                        //si se rinde el bucle cierra y el programa acaba
                        condicion = false;
                        break;
                    default:
                        cout << "El numero que selecciono no le corresponde a ningun opcion, elija un si (1) o no (2)" << endl;
                        break;
                    }
                }
                //mientras la opcion sea incorrecta volvera a pedir que se elija un numero correcto que represente a una opción
            } while (i > 1 && continuar < 1 || continuar > 2);
        }
        else if (adivinar < numero)
        {
            cout << "El numero que ingresaste es menor que el que tienes que adivinar" << endl;
            cout << "Te quedan: " << i << " intentos." << endl;
            //Preguntamos si quiere seguir jugando y esperamos una respuesta especifica entre 2 opciones
            do
            {
                if (i >= 1)
                {
                    cout << "Quieres continuar jugando, si es asi elige 1 sino elige 2?" << endl;
                    cin >> continuar;
                    switch (continuar)
                    {
                    case 1:
                        cout << "Ok, Elige otro numero que cumpla la condicion anterior" << endl;
                        break;
                    case 2:
                        cout << "Te has rendido" << endl;
                        //si se rinde el bucle cierra y el programa acaba
                        condicion = false;
                        break;
                    default:
                        cout << "El numero que selecciono no le corresponde a ningun opcion, elija un si (1) o no (2)" << endl;
                        break;
                    }
                }
                //mientras la opcion sea incorrecta volvera a pedir que se elija un numero correcto que represente a una opción
            } while (i > 1 && continuar < 1 || continuar > 2 && i > 1);
        }
        //Si no es mayor ni menor entonces el numero ingresado es el mismolo que significa que acertó
        else
        {
            cout << "Correcto!!! Adivinaste, el numero era: " << numero << endl;
            //si adivina se cierra el bucle
            condicion = false;
        }
        //si se le acaban los intentos se cierra el bucle
        if (i == 0 && condicion == true)
        {
            cout << "Se te acabaron los intentos, crack!" << endl;
            cout << "Haz perdido" << endl;
            //Comentamos el numero
            cout << "El numero era: " << numero << endl;
        }
    }

    return 0;

    //fin del programa
}