//Daniel Vladimir Solis Marroquin
//Calculo de caracteres en una palabra
#include <iostream>
 
using namespace std;
//asignamos una variable contadora de caracteres 
void longitud(char palabra[]);
 int main(){

    char palabra[30];
    cout<<"Ingresa una palabra: ";
    //pedimos la palabra
    cin.getline(palabra,30);
   
    longitud(palabra);
    cin.get();
    return 0;
}
 //cuando la cadena sea menor o igual que 29 caracteres mostrara la cantidad de estos en num
void longitud(char palabra[]){
    int num, res;
    for(num = 0; palabra[num] != 0;++num);
    cout<< "La palabra tiene: "<<num<<" caracteres"<< endl;

                            /*//usando biblioteca 'cstring'
                            #include <cstring>
                            #include <iostream>
                            using namespace std;
                            
                            
                            int main()
                            {
                                //longitud maxima de caracteres (30) en la variable palabra
                                char palabra[30];

                            //mostramos la cantidad de caracteres con strlen
                                cout << "Introduce una palabra: ";
                                cin >>  palabra;
                                cout << "La palabra tiene: " << strlen(palabra)
                                << " caracteres" << endl;    
                            
                            return 0;
                            }
                            */



//calculamos el residuo
    res = num % 2;
    //condicion: su residuo al dividirse entre 2 debe ser 0
    if( res == 0){
        cout << "El numero de caracteres es par";
    }else{
        cout << "El numero de caracteres es impar";
    }
    //condicional para cuando diferenciar si la palabra es mayor de 10 letras
    if( num > 10){
        cout << endl << "La palabra es mayor de 10 letras";
    }else{cout << endl << "La palabra es menor de 10 letras";}

}
