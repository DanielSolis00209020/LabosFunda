//Daniel Vladimir Solis Marroquin
//Código m-u-r-c-i-e-l-a-g-o
#include <iostream>
#include <conio.h>
using namespace std;

//Función para modificar las letras especiales y crear asi el codigo murcielago
void codigo(char Textito[])
{
    for (int i = 0; i <= 500; i++)
    {
        //Asignacion para las letras especiales del codigo
        switch (Textito[i])
        {
            {
            case 'm':
                Textito[i] = 48;
                break;
            }
            {
            case 'u':
                Textito[i] = 49;
                break;
            }
            {
            case 'r':
                Textito[i] = 50;
                break;
            }
            {
            case 'c':
                Textito[i] = 51;
                break;
            }
            {
            case 'i':
                Textito[i] = 52;
                break;
            }
            {
            case 'e':
                Textito[i] = 53;
                break;
            }
            {
            case 'l':
                Textito[i] = 54;
                break;
            }
            {
            case 'a':
                Textito[i] = 55;
                break;
            }
            {
            case 'g':
                Textito[i] = 56;
                break;
            }
            {
            case 'o':
                Textito[i] = 57;
                break;
            }
            //En caso la letra no sea ninguna de las anteriores entonces la letra se mostrara igual a la ingresada
        default:
            Textito[i] = Textito[i];
        }
    }
}
//Funcion main
int main()
{
    //Variable char ya que utilizaremos cada caracter en un espacio de un arreglo de maximo de 500 espacios
    char Textito[500];
    //Pedimos el texto que abarcara el arreglo 'Textito'

    cout << "Ingrese el texto: " << endl;
    //Para corresponder cada caracter del arreglo con un espacio en este, es decir cada caracter ocupa un espacio del arreglo

    cin.getline(Textito, 500);
    //Al tener la frase separada por espacios por cada carecter se pasa la funcion codigo antes declarada, para modificar las letras m-u-r-c-i-e-l-a-g-o

    codigo(Textito);
    //Mostramos el resultado
    
    cout << "Texto en clave murcielago: " << Textito;

    return 0;
    //Fin del programa
}