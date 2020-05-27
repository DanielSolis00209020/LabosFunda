//Daniel Vladimir Solis Marroquin
//Calculo de un numero positivo o negativo
#include "iostream"

using namespace std;

    int main(){
    //se declara la variable
    int num;
    //solicitamos el numero
    cout << "Ingrese el numero" << endl;
    cin >> num;
    //condicion: un numero negativo es menor que 0
    if( num < 0){
        cout << endl << "El numero es negativo";
    }else{
        cout << "El numero es positivo";
    }return 0;
    } 
