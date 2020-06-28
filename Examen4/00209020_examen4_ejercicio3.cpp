//Daniel Vladimir Solis Marroquin
//Matriz de notas
#include <iostream>
#include <conio.h>
using namespace std;
//Declaración de funciones
//Función para calcular la nota final por alumno y verificar su aprobación
float verificarGrades(float nota1, float nota2, float nota3, float nota4, float nota5)
{
    float Final;
    Final = nota1 * 0.2 + nota2 * 0.2 + nota3 * 0.2 + nota4 * 0.2 + nota5 * 0.2;
    //Si la nota final es mayor o igual a 7 aprueba
    if (Final >= 7)
    {
        cout << endl
             << "Este estudiante aprobo";
    }
    //De lo contrario reprueba
    else
    {
        cout << endl
             << "Este estudiante reprobo";
    }

    return Final;
}
//Función para llenar la matriz de notas por los 5 estudiantes
float completarRegistro(int Nestudiantes)
{
    //Matriz estudiantes/calificaciones
    float notas[Nestudiantes][5];

    //For para separar los n alumnos
    for (int alumno = 0; alumno < Nestudiantes; alumno++)
    {
        cout << endl
             << "Notas del estudiante " << alumno + 1 << endl;
        //Por cada alumno habran 5 calificaciones que se ingresan en 'NotasPorAlumno', para ingresarlas utilizamos un for
        for (int nota = 0; nota < 5; nota++)
        {
            float NotaPorMateria = 0;
            do
            {
                cout << "Ingrese la nota en la calificacion " << nota + 1 << ":" << endl;
                cin >> NotaPorMateria;
                //Bucle para que la nota se encuentre entre 0 y 10 obligatoriamente
            } while (NotaPorMateria < 0 || NotaPorMateria > 10);
            //Cada celda contendra la 'NotaPorMateria' de cada estudiante
            notas[alumno][nota] = NotaPorMateria;
        }
    }
    for (int i = 0; i < Nestudiantes; i++)
    {
        //Por cada estudiante motrara su resultado final y su mensaje aprobación o reprobación
        cout << endl
             << "Ya que para el alumno '" << i + 1 << "' su nota final fue: " << endl
             <<
            //Llamando la función que contiene los resultados
            verificarGrades(notas[i][0], notas[i][1], notas[i][2], notas[i][3], notas[i][4]) << endl;
    }
}
//Función main
int main()
{
    //Daclaramos variables 'Nestudiantes', que representa la cantidad de estudiantes a ingresar
    int Nestudiantes;
    //Pedimos el valor para Nestudiantes
    do
    {
        cout << "Ingrese la cantidad de estudiantes" << endl;
        cin >> Nestudiantes;
    //Bucle hasta que ingrese una cantidad valida de estudiantes
    } while (Nestudiantes < 1);
    //Llenamos el registro(matriz) con la función Nestudiantes
    completarRegistro(Nestudiantes);

    return 0;
    //Fin del programa
}