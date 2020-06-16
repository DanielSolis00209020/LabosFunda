//Daniel Vladimir Solis Marroquin
//Año bisiesto
#include "iostream"

using namespace std;

    int main(){
    //se declara la variable
    int year, res, res2; 
    bool verdad;
    //solicitamos el año
    cout  << "Ingrese el año" << endl;
    //enviamos el valor numerico del año
    cin >> year;
    //asignamos los residuos a evaluar en las condicionales
    res=year%400;
    res2=year%4;
    /*un res3=year%100 es opcional*/
    //prueba 1, es divisible por 400?
    if(res==0){
        verdad=true;
    //prueba 2, es divisible por 4

    /*Es importante notar que si el numero del año no es divisible por 400 y si por 4 significa que no es divisible por 100 
    (au que de cierta manera la prueba 1 es innecesaria ya que con solo saber si es divisible por 4 se sabe que es divisible por 400
    es decir la prueba 1 depende dde que la prueba dos sea cierta, siendo la prueba 2 la unica estrictamente necesaria para saber si el año es bisiesto),
    por lo que no es necesario agregar un res3=year%100 y añadirlo en el segundo condicional de esta manera:

    else if(res2 == 0 && res3 =! 0)*/

    }else if(res2==0){
        verdad=true;
    //si no cumple ni una de las condicionales, entonces el año no es bisiesto
    }else{
        verdad=false; 
    }
    //dar respuesta segun el valor de verdad
    if(verdad=true){
        cout<< "El año: "<<year<< " es bisiesto" << endl;
    }else{
         cout<< "El año: "<<year<< " no es bisiesto" << endl;
    }
    return 0;
    //fin del programa
    } 