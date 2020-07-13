//Daniel Vladimir Solis Marroquin
//Tabla factura de compras

//Bibliotecas necesarias
#include <iostream>
#include <string>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
//Declaracion de constante
const int longCad = 20;
// Estructura de datos
struct articulos
{
	char nombre_producto[longCad + 1];
	int Cantidad_Comprada;
	float Precio_Unitario;
	float subtotal;
};
// Ingreso de datos, Funcion leer
void IngresoDatos(articulos producto[], int cantidad_articulos, string cad)
{
	//Declaramos los contadores
	int i, dato;

	system("cls");// Limpiar pantalla
	//Inicia ciclo para pasar de articulo 'filas'
	for (i = 0; i < cantidad_articulos; i++)
	{
		//Cada articulo le corresponde un numero de fila 'i'
		int articulo = i + 1;
		cout << ">> Articulo #" << articulo << endl;
		//Ciclo para pasar de dato por cada articulo 'columnas'
		for (dato = 0; dato < 3; dato++)
		{
			//Hay 3 posibles valores para 'dato', la accion se declara con un switch ya que se sabe cuales son estos posibles valores para 'dato'
			//0,1 y 2
			switch (dato)
			{
			case 0:
				//Para caso 0 pedimos el Nombre del articulo
				fflush(stdin); //Vaciar buffer
				//Pedimos el nombre del producto
				cout << ">> Ingrese el nombre del producto : " << endl;
				//El usuario ingresa el nombre del producto y este se guarda en producto[i].nombre_producto[], con longitud de caracteres 'longCad'
				getline(cin, cad, '\n'); //solo pasara al siguiente caso al precionar enter
				strncpy(producto[i].nombre_producto, cad.c_str(), longCad);//Guardamos el valor ingresado
				producto[i].nombre_producto[longCad] = '\0';
				break;

			case 1:
				//Para caso 1 pedimos la cantidad de este articulo
				cout << ">> Ingrese la cantidad de '" << producto[i].nombre_producto << "'" << endl;
				//Guardamos el valor ingresado
				cin >> producto[i].Cantidad_Comprada;
				break;

			case 2:
				//Para el caso 2 pedimos el precio unitario para este articulo
				cout << ">> Ingrese el precio unitario del producto '" << producto[i].nombre_producto << "' $: " << endl;
				//Guardamos el valor ingresado
				cin >> producto[i].Precio_Unitario;
				break;
			}
		}
		system("cls");//Limpiar pantalla por cada articulo del que se finalice su registro
	}
}
//Funcion subtotal o costo por articulo
float Subtotal(articulos producto[], int cantidad_articulos)
{
	// Ciclo para calcular el subtotal para cada i (articulo)
	for (int i = 0; i < cantidad_articulos; i++)
	{
		//El subtotal se calcula multiplicando la cantidad de producto por su precio unidtario, esto respectivamente para cada i (articulo)
		producto[i].subtotal = producto[i].Cantidad_Comprada * producto[i].Precio_Unitario;
	}
}
// Mostrar factura, Funcion mostrar
void MostrarFactura(articulos producto[], int cantidad_articulos)
{
	//cada setw es la distancia de izquierda a derecha entre cada columna, este seria el encabezadoo de la tabla
	cout << endl
		 << setw(26) << "   Producto   " << setw(16) << "   Cantidad    " << setw(15) << "   Precio Unitario    " << setw(15) << "   Subtotal   " << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	//Llamamos a la funcion subtotal para que producto[i].subtotal tenga valor
	Subtotal(producto, cantidad_articulos);
	//recorrido para mostrar cada dato en forma dde tabla donde las columnas son los datos y las filas cada articulo
	for (int i = 0; i < cantidad_articulos; i++)
	{
		//cada setw es la distancia de izquierda a derecha entre cada columna
		cout << setw(25) << producto[i].nombre_producto
			 << setw(10) << producto[i].Cantidad_Comprada
			 //para que se mantenga con todos sus enteros y dos decimales usamos fixed y setprecision respectivamente
			 << setw(14) << fixed << setprecision(2) << "$" << producto[i].Precio_Unitario
			 << setw(18) << fixed << setprecision(2) << "$" << producto[i].subtotal << endl;
	}
}
//Funcion total, calcula el total de toda la compra haciendo una sumatoria de los subtotales
void TotalCompra(articulos producto[], int cantidad_articulos)
{
	//iniciamos con un total igual a 0
	float total = 0.00;
	for (int i = 0; i < cantidad_articulos; i++)
	{
		//Cada subtotal calculado se acumula en la variable total
		total += producto[i].subtotal;
	}
	//La funcion muestra el valor del total, el total es la sumatoria de subtotales
	cout << endl
		 << "-------------------------------------------------------------------------------" << endl
		 //se muestra el total, setw para que quede en la columna de subtotales, pero en su fila especifica
		 << "El total de toda la compra es: " << setw(40) << "$" << total << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
}
//Funcion main
int main()
{
	//Declaramos variables, las que contienen valor numerico se inicializan con el valor 0.00
	int cantidad_articulos = 0;
	char c;
	string cad;
	float total = 0.00;
	//Pedimos la cantidad de articulos o productos diferentes que el comprador lleva
	cout << ">> Digite la cantidad de articulos a comprar: " << endl;
	cin >> cantidad_articulos;
	//Asignamos el arreglo con base a la estructura
	articulos producto[cantidad_articulos];
	IngresoDatos(producto, cantidad_articulos, cad); //  Registro de datos en la estructura
	system("cls");									 // Borramos pantalla
	MostrarFactura(producto, cantidad_articulos);	 // Mostrar la factura con el subtotal
	TotalCompra(producto, cantidad_articulos);		 //total

	getch();
	return 0;
	//Fin del programa
}
