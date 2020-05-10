//Daniel Vladimir Solis Marroquin
//Calculo de valores Reales en una ecuacion cuadratica
#include "iostream"
//para uso de la funcion pow o sqrt incluimos cmath
#include "cmath"
using namespace std;

    int main(){
        
    float a, b, c, x1, x2, determinante;
    //declaramos las variables a ocupar

        cout << "Ingrese el valor de los coeficientes a, b y c en: " << endl;
        cout << "ax2 + bx + c = 0" << endl;
        //Pedimos los valores al usuario 
        cout << "Ingrese el primer numero" << endl;
        cin >> a;
        //Utilizamos "cin" para ingresar el valor al usuario del coeficiente a
        cout << "Ingrese el segundo numero" << endl;

        cin >> b;
        //Utilizamos "cin" para ingresar el valor al usuario del coeficiente a
        cout << "Ingrese el tercer numero" << endl;

        cin >> c;
        //Utilizamos "cin" para ingresar el valor al usuario del coeficiente a

        //encontramos el valor del determinante para dar respuesta a las diferentes formas de una cuadratica
        determinante = b*b - 4*a*c;
        //para cuando el determinante es positivo ubicamos la operacion completa
        if (determinante>0){
            //para utilizar la raiz cuadrada utilizamos la funcion pow para exponentes y como exponente utilizamos el 0.5
            //o utilizamos sqrt(determinante), existen 2 opciones
            x1= (-b+(pow(determinante,0.5)))/(2*a);
            x2= (-b-(pow(determinante,0.5)))/(2*a);

            //mostramos los dos valores obtenidos ya que una ecuacion de grado dos tiene dos raices, es decir 2 respuestas
            cout << endl << "X1 = " <<x1<< endl;
            cout << "X2 = " <<x2<< endl;
        }
        //cuando el determinante es igual a 0 las raices son iguales, (caso de un trinomio cuadrado perfecto)
        if (determinante==0){
            //no tomamos en cuenta la operacion del determinante ya que en este caso vale 0
            x1=(-b)/(2*a);
            //igualamos ambas variables ya que ambas raices son iguales
            x2=x1;
            //mostramos el valor de x
            cout << endl << "X = " << x1;
        }
        //cuando el determinante es negativo, obtendriamos una raiz negativa en la operacion
        if (determinante<0){
            //su valor no existe en los reales y por eso no mostramos una solucion
            //aclaramos, usando cout, al usuario que dica ecuacion no tiene solucion
            cout << endl << "X no tiene solucion en los Reales";
        }
    return 0;
    //fin del programa
    }