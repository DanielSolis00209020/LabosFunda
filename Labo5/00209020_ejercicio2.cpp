//Daniel Vladimir Solis Marroquin
//Segundo despues
#include <cstdlib>
#include <iostream>

using namespace std;

int main()

{
    //definimos las variables
    int h = 0, m = 0, s = 0;
    bool malo;
    //Inicia bucle para asegurar una hora valida
    do
    {
        //pedimos la hora
        cout << endl
             << "Inserte la hora" << endl;
        cout << "\n   Introduzca el numero de horas: ";
        cin >> h;
        cout << "\n   Introduzca el numero de minutos: ";
        cin >> m;
        cout << "\n   Introduzca el numero de segundos: ";
        cin >> s;
        //asignacion al valor booleano para encerrar en un bucle hasta que ponga una hora coorecta
        if (h < 0 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59)
        {
            malo = true;
        }

        if (h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59)
        {
            //s aumenta 1, hasta que vale 60 su valor cambia a 0
            s++;
            if (s == 60)
            {
                //cuando s vuelve a tomar el valor de 0, m aumenta uno, si m llega a valer 60 toma el valor de 0
                s = 0;
                m++;
                if (m == 60)
                {
                    //cuando m vuelve a tomar el valor de 0, h aumenta uno, si h llega a valer 24 toma el valor de 0
                    m = 0;
                    h++;
                    if (h == 24)
                        h = 0;
                }
            }
            //mostramos el segundo despues
            cout << "\n   Un segundo despues la hora es: " << h << ":" << m << ":" << s;
            //si la hora fue correcta sale del bucle
            malo = false;
        }
        else
            //si la hora ingresada fue erronea y no se pudo procesar, devuelve al usuario al bucle
            cout << "\n   ERROR: La hora es incorrecta." << endl
                 << "Ingresa una hora correcta";
    } while (malo == true);

    return 0;
    //fin del programa
}