#include <iostream>
#include <string>

using namespace std;

int main()
{
	int cantidad = 0;
	int cantidad2;
	string nombre2;
	string nombre;
	cout << "Este programa cuenta cuantas letras contiene la palabra o frase" << endl;
	cout << "Ingrese la palabra o frase: ";
	//  cin >> nombre; 
	getline(cin,nombre);
	cantidad2 = nombre.length() - 1;
	for(int i = cantidad2; i > -1; i--)
	{
		nombre2 = nombre.at(i);
		cantidad = cantidad + 1;
	}
	cout << "La palabra tiene: " << cantidad << " letras";
}
