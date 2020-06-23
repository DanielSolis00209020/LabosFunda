//Daniel Vladimir Solis Marroquin
// Suma de dos arreglos
#include <iostream>
#include <conio.h>
using namespace std;
//Definimos la funcion leer
void funcionleer(int elementos[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        //Para n cantidad de elementos ingresaremos un valor para cada i(posición)
        cin >> elementos[i];
    }
}
//Definimos la funcion suma
void suma(int arreglo[], int arreglo2[], int n, int total[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        //Por cada elemento del arreglo 1 se le sumara su correspondiente de posicion i, y dicho valor se le asignará a total en la misma posicion i
        total[i] = arreglo[i] + arreglo2[i];
    }
}
void resultados(int total[], int n)
//Definimos la función que mostrará los resultadis
{
    int i;
    cout << "El grupo de la sumatoria de los numeros de ambos arreglos respectivamente, segun su posicion, es: [";
    for (i = 0; i < n; i++)
    {
        //Damos una respuesta a cada posición
        cout << " " << total[i];
        }
    cout << " ]" << endl;
}
//Iniciamos nuestro main
int main(void)
{
    //Declaramos la variable n, que definira el tamaño de los arreglos
    int n;
    cout << "Ingrese la cantidad de elementos" << endl;
    //Enviamos el valor de n
    cin >> n;
    //Declaramos los arreglos a utilizar, con n elementos, tenindo en cuenta el valor de n ya antes enviado a la consola
    int arreglo[n], arreglo2[n], total[n];
    //Pedimos los numeros correspondientes para cada i en arreglo
    cout << "Ingrese los numeros pertenecientes del primer grupo: " << endl;
    //Llamamos la funcion que leerá los elementos para arreglo, en cada uno de sus n espacios
    funcionleer(arreglo, n);
    //Pedimos los numeros correspondientes para cada i en arreglo2
    cout << "Ingrese los numeros pertenecientes del segundo grupo: " << endl;
    //Llamamos la funcion que leerá los elementos para arreglo2, en cada uno de sus n espacios
    funcionleer(arreglo2, n);
    //Llamamos la función suma para sumar los elementos correspondientes a cada i en ambos arreglos y estas respuestas se guardaran en su respectiva i en total
    suma(arreglo, arreglo2, n, total);
    //Llamamos la funcion que contiene el cout final, es decir la funcion que muestra os resultados para "total".
    resultados(total, n);
    return 0;
    //Fin del programa
}
