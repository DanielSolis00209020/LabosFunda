//Daniel Vladimir Solis Marroquin
//Calculo de la divisibilidad de un numero sobre otro
#include "iostream"

using namespace std;

    int main(){
    //se declara la variable
    int num, res;
    //solicitamos el numero
    cout << "Ingrese el numero" << endl;
    cin >> num;
    //calculamos el residuo
    res = num % 2;
    //condicion: su residuo al dividirse entre 2 debe ser 0
    if( res == 0){
        cout << endl << "El numero es par";
    }else{
        cout << "El numero es impar";
    }return 0;
    } 
