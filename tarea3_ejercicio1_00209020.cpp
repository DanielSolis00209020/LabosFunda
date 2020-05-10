//Daniel Vladimir Solis Marroquin
//Calculo del promedio de 3 enteros
#include "iostream"

using namespace std;

    int main(){
    //se declara la variable respectiva para cada número como entero y la variable promedio como float ya que nos interesan respuestas decimales
    int n1, n2, n3;
    float promedio;
    //mostramos en pantalla la solicitud del primer valor
    cout << "Ingrese el primer numero" << endl;
    //Utilizamos "cin" para recibir el valor de las variables que representan a los números
    //enviamos el primer valor
    cin >> n1;
    //mostramos en pantalla la solicitud del segundo valor
    cout << "Ingrese el segundo numero" << endl;
    // //enviamos el segundo valor
    cin >> n2;
    //mostramos en pantalla la solicitud del tercer valor
    cout << "Ingrese el tercer numero" << endl;
     //enviamos el tercer valor
    cin >> n3;

    //forzamos un valor de tipo float para promedio, ya que nos interesan respuestas decimales y los tres valores ingresados son int
    promedio = (float)(n1 + n2 + n3)/3;
    //Le damos el valor a promedio dividiendo la sumatoria de las variables, que representan a los numeros, entre 3

    //mostramos al usuario el resultado de la operacion
    cout << endl << "El promedio es de: ";
    cout << promedio;

    return 0;
    //fin del programa

    }
