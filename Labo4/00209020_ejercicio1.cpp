//Daniel Vladimir Solis Marroquin
//Calculo de la divisibilidad de un numero sobre otro
#include "iostream"

using namespace std;

    int main(){
    //se declara la variable
    int num1, num2, rest;

    cout << "Ingrese el primer numero (Dividendo)" << endl;
    cin >> num1;
    //Utilizamos "cin" para pedir el valor de las variables que representan a los números
    cout << "Ingrese el segundo numero (Divisor)" << endl;

    cin >> num2;
    //se coloca una condicional para cuando el valor del divisor sea 0, el programa no realice la operacion
    if (num2==0){
        //ya que la division entre 0 no esta permitida se alerta al usuario que el numero dos no puede ser 0
        cout << "Divisor = " << num2 << endl << "La division por 0 no esta definida, cambie el valor del divisor" << endl;
    }
    //cuando el divisor sea distinto de 0, este si correra a calcular el residuo entre ambos numeros
    else {
        //Se calcula el residuo del num1 y num2 con %
        rest = num1 % num2;
    //se calcula el valor absoluto de los numeros con la funcion abs().
        if(abs(num1)<abs(num2)){
            //Le aclaramos al usuario que siempre que el divisor tenga un mayor valor absoluto que el dividendo, el segundo numero nunca sera divisor del primero
            cout << "El valor absoluto del divisor es mayor que el del dividendo"<< endl << "Por lo tanto, " << num2 << " no divide a " << num1 << endl;
        
        //cuando el dividendo es de mayor valor absoluto que el divisor se corre a calcular normalmente si el primer numero divide al segundo.
        //condicional para mostrar respuesta cuando el segundo numero si es divisible por el primero
        }else if(rest==0){
            //mostrar mensaje al usuario con cout
            cout << num1 <<" es divisible por " << num2 << endl;
        //condicional para mostrar respuesta de que el segundo numero no es divisible por el primero
        }else{
            //mostrar mensaje al usuario con cout
            cout << num1 <<" no es divisible por " << num2 << endl;
        }
    }
    return 0;
    //fin del programa
    }