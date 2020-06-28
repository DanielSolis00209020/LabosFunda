//Daniel Vladimir Solis Marroquin
//Ejercicio de una media de estaturas
#include<iostream>
#include<conio.h>
using namespace std;
//Declaración de las funciones
//Función media, calcula la media arimética de los valores asignados a 'estaturas'
float media(float* estaturas,int n){

    float sumatoria = 0.0;
    for(int i=0;i<n;i++){
        //Por cada posición se sumará dicho valor
        sumatoria+= *(estaturas+i);
    }
    //Para retornar el promedio, se asigna la división de la sumatoria entre el total de datos, en este caso recordar n=25
    float prom = sumatoria / n ;
    return prom;  
}
//Función para calcular la cantidad de valores arriba de la media
 int contarMayor(float* estaturas,int n, float media){
     int contador = 0;
     for(int i=0;i<n;i++){
         //Si la estatuara asignada al espacio i es mayor que la media, entonces el contador de estaturas mayores a la media sumará 1
         if (*(estaturas+i) > media){
            contador ++;
         }
     }
     //Retornamos el valor del contador
     return contador;
 }
//Función para calcular la cantidad de valores arriba de la media
 int contarMenor(float* estaturas,int n, float media){
     int contador2 = 0;
     for(int i=0;i<n;i++){
         //Si la estatuara asignada al espacio i es menor que la media, entonces el contador de estaturas menores a la media sumará 1
         if (*(estaturas+i) < media){
            contador2 ++;
         }
     }
     //Retornamos el valor del contador2
     return contador2;
 }

//Función main
int main(){
    //En nuestro caso la cantidad de estudiantes es 25, es decir n ya esta definida
    int n=25;
    float estaturas[n];
    //Cada valor ingresado ocupara un espacio en el arreglo de estaturas
    for(int i=0; i<n; i++){
        cout << "Ingrese la estatura numero "<<i+1<<" en metros:" << endl;
        cin >> estaturas[i];
    }
    //Para mostrar la media llamamos a la funcionantes declarada
    cout << endl << "La media de los valores de estaturas es: "<< media(estaturas,n) << endl;

    //Asignamos el valor de la funcion media a una variable de tipo float para mejor manejo de dicho valor
    float prom = media(estaturas,n);

    //LLamamos la función contarMayor para mostrar el valor de estaturas arriba de la media
    cout << "Cantidad de estaturas arriba de la media es: " << contarMayor(estaturas, n, prom);

    //LLamamos la función contarMenor para mostrar el valor de estaturas abajo de la media
    cout << endl << "Cantidad de estaturas abajo de la media es: " << contarMenor(estaturas, n, prom);

    return 0;
    //Fin del programa
}