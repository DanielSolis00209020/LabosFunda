//Daniel Vladimir Solis Marroquin
//Saber el dia siguiente de una fecha cualquiera
#include "iostream"
#include "math.h"

using namespace std;
//definiendo variable booleana para asignar los casos de un año bisiesto
bool bisiesto(int year)
{
    return ((year % 4) == 0 && (year % 100) != 0) || ((year % 400) == 0);
}
//variable que guarda los dias de un mes
int day_monthes(int month, int year)
{
    //valor inicial de dias para cada mes es 31
    int day = 31;
    //Trabajamos con las excepciones que son 5 meses del año, tales que el numero de sus dias no es 31
    // Para el cuarto, sexto, el noveno y el onceavo mes el numero de dias es 30
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        day = 30;
    }
    else if (month == 2)
    {
        //si el año es bisiesto se le agrega un dia al mes 2 (febrero)
        if (bisiesto(year))
        {
            day = 29;
        }
        //Si no es bisiesto no se le agrega
        else
        {
            day = 28;
        }
    }
    //devuelve el numero de dia
    return day;
}

int main()
{

    int day, month, year;
    bool verdad= true;     /*verdad1*/
    //Bucle para que el usuario no ponga dias inexistentes
    do
    {
        cout << "Calculo del siguiente dia, ingrese correctamente un dia" << endl;
        //Pedimos el dia
        cout << "Digite el dia: ";
        cin >> day;
        //Pedimos el mes
        cout << "Digite el mes: ";
        cin >> month;
        //Pedimos el año
        cout << "Digite el año: ";
        cin >> year;
        cout << endl;
        //Si ingreso un dia falso el bucle se repite
        //Validacion de dias reales
        if (day > 31 || day < 1 || month > 12 || month < 1)
        {
            verdad = false;
        }else{
            verdad = true;
        }
       
                                                            /*NOTA: Como? relizar la validacion para:
                                                            //Para Abril, Junio, Septiembre y Noviembre... //Para Febrero en año bisiesto...//Para Febrero en año no bisiesto...

                                                            Mi idea fue esta pero no lo valida(esta validacion no es necesaria para el programa lo se pero queria aprender)
                                                            if (((month == (4 || 6 || 9 || 11)) && (day > 30))||((bisiesto(year) == true) && (month == 2) && (day > 29))||((bisiesto(year) == false) && (month == 2) && (day > 28))||((bisiesto(year) == false) && (month == 2) && (day > 28))){
                                                                verdad1 = false;
                                                            }else
                                                            {
                                                                verdad1 = true;
                                                            }*/
        //El bucle seguira cerrado si las condiciones de un dia real antes declaradas dan falso 
    } while ( /* verdad1 || */ verdad == false);
    //aumentamos un dia a la fecha ingresada
    day++;
    if (day > day_monthes(month, year))
    {
        //Si day llega al valor maximo de dias para su respectivo mes, el mas aumenta uno
        day = 1;
        month++;
        if (month > 12)
        {
            //Si el mes aumenta a 13, month se reinicia y toma el valor de 1 y el año aumenta
            month = 1;
            year++;
        }
    }
    cout << endl;
    //Damos respuesta al usuario
    cout << "Un dia despues del ingresado anteriormente sera: " << endl
         << day << "/" << month << "/" << year << endl;
    cout << endl;

    //Fin del programa
}