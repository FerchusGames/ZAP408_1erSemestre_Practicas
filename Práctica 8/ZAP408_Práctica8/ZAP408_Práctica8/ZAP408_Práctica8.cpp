// ZAP408_Práctica8.cpp 
// Luis Fernando González Chávez

#include <iostream>
#include <locale.h>
#include <string>
#include <limits>

using namespace std;

int main()
{
	// Ajuste de idioma
	setlocale(LC_ALL, "spanish");

	// enum Posición {títuloPos = 0, añoPos, autorPos}; << Idea en pausa

	const int cantidadJuegos = 5;

	// Booleano para comprobar que el valor sea válido

	bool bFail;

	// Asignación variables posición por tipo
	string título[cantidadJuegos];
	int año[cantidadJuegos];
	string autor[cantidadJuegos];

	cout << "Por favor introduce la información requerida de " << cantidadJuegos << " juegos:" << endl;
	cout << "----------------------------------------------------------------" << endl;

	for (int i = 0; i < cantidadJuegos; i++)
	{
		cout << "Juego en la posición [" << i << "]: " << endl;

		cout << "Introduce el nombre del juego: ";
		getline(cin >> ws, título[i]);

		do {
			cout << "Introduce el año en el que salió este juego: ";
			cin >> año[i];

			bFail = cin.fail();

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			if (bFail) std::cout << "Valor inválido. Inténtalo de nuevo." << std::endl;

		} while (bFail);	

		cout << "Introduce el nombre del autor del juego: ";
		getline(cin >> ws, autor[i]);

		cout << "----------------------------------------------------------------" << endl;
	}

	cout << endl;

	for (int j = 0; j < cantidadJuegos; j++)
	{
		cout << "El juego en la posición [" << j << "] se llama " << título[j] << ", salió en " << año[j] << ", y fue creado por " << autor[j] << "." << endl;
	}
}