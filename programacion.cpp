#include <iostream>
#include <string>

using namespace std;

int main()
{
	string nombre = "hola";
	for(int i = 3; i > -1; i--)
	{
		cout << nombre.at(i);
	}
}
