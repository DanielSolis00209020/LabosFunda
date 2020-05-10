//Daniel Vladimir Solis Marroquin
//Calculo de total en la compra de productos de un mismo tipo
#include "iostream"

using namespace std;

    int main(){
    //se declara la variable
    float precio, cantidad, total;
    string nombre;
    
        //mostramos en pantalla la solicitud del primer valor
    cout << "Ingrese el nombre del producto" << endl;
    //Utilizamos "cin" para recibir el valor de las variables
    //enviamos el primer valor (nombre)
    cin >> nombre;
    //mostramos en pantalla la solicitud del segundo valor (valor unitario)
    cout << "Ingrese el precio unitario del producto" << endl; cout<<"$";
    // //enviamos el segundo valor
    cin >> precio;
    //mostramos en pantalla la solicitud del tercer valor (cantidad de producto)
    cout << "Ingrese la cantidad de producto" << endl;
     //enviamos el tercer valor
    cin >> cantidad;
     //calculamos el valor del total
    total=precio*cantidad;
    //Enviamos respuesta al usuario
    cout << "Por la compra de " <<cantidad<<" "<<nombre<<" su total a pagar es: $"<<total<<endl;

    return 0;
    //fin del programa
    }