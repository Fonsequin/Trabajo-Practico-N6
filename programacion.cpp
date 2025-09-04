#include <iostream>
#include <string>

using namespace std;

int main()
{
	int operacion;
	cout << "Este programa permite realizar los ejercicios pasados." << endl;
	cout << "1. Tomar una Tomar una cadena y devolver su longitud." << endl;
	cout << "2. Tomar dos cadenas y devolver la concatenación de ambas." << endl;
	cout << "3. Tomar una cadena y devolver su reverso." << endl;
	cout << "4. Tomar una cadena y devolver la cantidad de veces que aparece un carácter específico en ella." << endl;
	cout << "5. Tomar una cadena, devolver la cantidad de letras que contiene."	<< endl;
	cout << "Ahora ingrese el ejercicio que quiera realizar: ";
	cin >> operacion;
	cout << endl;
	if(operacion < 1 or operacion > 5)
	{
		cout << "Porfavor ingrese una de las opciones disponibles, el programa se volvera a iniciar..." << endl;
		return main();
	}
	if(operacion == 1)
	{
		string palabra; // Variable para guardar la palabra ingresada
		int cantidad; // Variable para guardar la cantidad de caracteres
		cout << "Este programa dice la longitud de una palabra" << endl; // Presentacion
		cout << "Ingrese la palabra: "; // Pedirle al usuario que ingrese la palabra
		cin >> palabra; // Datos guardado de la palabra en variable
		cantidad = palabra.length(); // Datos guardado de la cantidad de caracteres en variable
		cout << endl; // Separacion
		cout << "La palabra tiene un total de " << cantidad << " caracteres"; // Cantidad de caracteres expresada en pantalla
		return 0; // Devolver 0
	}
	if(operacion == 2)
	{
		string nombre; // Variable para guardar el nombre
		string apellido; // Variable para guardar el apellido
		string nombre_entero; // Variable para guardar el nombre entero
		cout << "Este programa dice cual es tu nombre entero" << endl; // Presentacion
		cout << "Ingrese su nombre: "; // Pedirle al usuario que ingrese su nombre
		cin >> nombre; // Datos guardado del nombre en variable
		cout << "Ingrese su apellido: "; // Pedirle al usuario que ingrese su apellido
		cin >> apellido; // Datos guardado de su apellido en variable
		cout << endl; // Separacion
		nombre_entero = nombre + " " + apellido; // Datos guardado de su nombre entero en variable
		cout << "Su nombre entero es: " << nombre_entero; // Su nombre entero expresado en pantalla
		return 0; // Devolver 0

	}
	if(operacion == 3)
	{
		string nombre = "hola"; // Variable de la palabra
		for(int i = 3; i > -1; i--) // Sentencia de ciclo
		{
			cout << nombre.at(i); // Mostrar en pantalla la palabra dada vuelta
		}
		return 0;
	}
	if(operacion == 4)
	{
		int cantidad = 0; // Variable de la cantidad de veces que la "a" se repite
		int cantidad2; // Variable de la cantidad de caracteres
		string nombre2; // Variable para ver si la letra es la "a"
		string nombre; // Variable para guardar el nombre
		cout << "Este programa cuenta cuantas a contiene la palabra" << endl; // Presentacion
		cout << "Ingrese la palabra: "; // Pedirle al usuario que ingrese la palabra
		cin >> nombre; // Dato de la palabra guardada en variable
		cantidad2 = nombre.length() - 1; // Medir la cantidad de caracteres
		for(int i = cantidad2; i > -1; i--)
		{
			nombre2 = nombre.at(i); // Dar vuelta la palabra para ver si contiene a
			if(nombre2 == "a") // Si detecta alguna a
			{
				cantidad = cantidad + 1; // Sumarle 1 a la variable de cantidad2
			}
		}
		cout << "La palabra tiene: " << cantidad << " caracteres de a"; // Cantidad expresada en pantalla
		return 0; 
	}
	if(operacion == 5)
	{
		int cantidad = 0; // Variable para guardar la cantidad de letras
		int cantidad2; // Variable para guardar la cantidad de caracteres pero creo que no hace falta esta asi que no la toco por si las dudas
		string nombre2; // Variable para dar vuelta la palabra y creo que es innecesaria
		string nombre; // Variable para guardar la palabra
		cout << "Este programa cuenta cuantas letras contiene la palabra o frase" << endl; // Presentacion
		cout << "Ingrese la palabra o frase: "; // Pedirle al usuario que ingrese la palabra o frase
		//  cin >> nombre; 
		getline(cin,nombre); // Datos de la frase o palabra entera guardada en variable
		cantidad2 = nombre.length() - 1; // Ver la cantidad de caracteres que tiene 
		for(int i = cantidad2; i > -1; i--)
		{
			nombre2 = nombre.at(i);
			cantidad = cantidad + 1; // Sumarle 1 a la variable de cantidad por cada letra que contenga
		}
		cout << "La palabra tiene: " << cantidad << " letras"; // Cantidad de letras expresada en pantalla
		return 0;
	}
}
