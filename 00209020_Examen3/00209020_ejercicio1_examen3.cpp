//Daniel Vladimir Solis Marroquin
//Ejercicio sobre calculo de sueldos
#include "iostream"

using namespace std;

    int main(){
    //se declara la variable
    float salarioT, salarioR, afp, seguro, horas, extras, impuesto; 
    string nombre;
    //Solicitamos el nombre del empleado
    cout << "Ingrese el nombre del trabajador" << endl;
    cin >> nombre;
    //solicitamos la informacion de horas trabajadas del empleado
    cout << "Horas normales trabajadas segun contrato" << endl;
    cin >> horas;
    //Preguntamos por horas extras
    cout << "Horas extras realizadas" << endl;
    cin >> extras;
    //calculamos el salario Total
    salarioT = horas*1.75 + extras*2.5; 
    //calculamos el total de descuentos
    afp = 0.0625*salarioT;
    seguro = 0.04*salarioT;
    //calculamos si un salario es mayor a 500, en dicho caso recibe un impuesto.
    if(salarioT>500){
        impuesto = 0.10*salarioT;
    }else{
        impuesto = 0;
    }
    //Calculamos el Salario Real
    salarioR=salarioT-(afp + seguro + impuesto);
    //Damos los valores al usuario
    cout << endl << "El salario total de: " << nombre << " es de: $" << salarioT << endl;
    cout << "El salario real de: " << nombre << " es de: $" << salarioR << endl;
    return 0;
    //fin del programa
    } 