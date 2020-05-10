//Daniel Vladimir Solis Marroquin
//Calculo del area y perimetro de un circulo
#include "iostream"
//para uso de la funcion pow o sqrt incluimos cmath
#include "cmath"

using namespace std;

    //definimos el valor de la constante de PI
    const float PI = 3.14159;
    
    int main(){
    //se declara la variable A(area), P(perimetro), r(radio)
    float A, P, r;
    //se solicita el valor de la variable r al usuario
    cout << "Ingrese el valor del radio(r) del circulo a calcular" <<endl;
    //se recibe el valor de la variable r 
    cin >> r;
    //se asigna el valor respectivo a A y P segun sus respectivas formulas con base al radio de un circulo
    //Usamos pow(), para elevar el radio al cuadrado
    A=PI*(pow(r,2));
    P=2*PI*r;
    //Otorgamos los valores al usuario
    cout << "El valor del area del circulo de radio '"<< r << "' es:" << endl << "A = " << A <<endl;
    cout << "El valor del perimetro del circulo de radio '"<< r << "' es:" << endl << "P = " << P;
    return 0;
    //fin del programa
    }