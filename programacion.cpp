#include <iostream>
#include <string>

using namespace std;

int main()
{
	string nombre;
	string apellido;
	string nombre_entero;
	cout << "Este programa dice cual es tu nombre entero" << endl;
	cout << "Ingrese su nombre: ";
	cin >> nombre;
	cout << "Ingrese su apellido: ";
	cin >> apellido;
	cout << endl;
	nombre_entero = nombre + " " + apellido;
	cout << "Su nombre entero es: " << nombre_entero;
}
