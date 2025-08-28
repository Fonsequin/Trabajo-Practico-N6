#include <iostream>
#include <string>

using namespace std;

int main()
{
	string palabra;
	int cantidad;
	cout << "Este programa dice la longitud de una palabra" << endl;
	cout << "Ingrese la palabra: ";
	cin >> palabra;
	cantidad = palabra.length();
	cout << endl;
	cout << "La palabra tiene un total de " << cantidad << " caracteres";
}
