#include <iostream>
#include <string>

using namespace std;

int main()
{
	int cantidad = 0;
	int cantidad2;
	string nombre2;
	string nombre;
	cout << "Este programa cuenta cuantas a contiene la palabra" << endl;
	cout << "Ingrese la palabra: ";
	cin >> nombre;
	cantidad2 = nombre.length() - 1;
	for(int i = cantidad2; i > -1; i--)
	{
		nombre2 = nombre.at(i);
		if(nombre2 == "a")
		{
			cantidad = cantidad + 1;
		}
	}
	cout << cantidad;
}
