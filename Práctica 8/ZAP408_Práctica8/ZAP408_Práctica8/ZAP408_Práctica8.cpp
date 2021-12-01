// ZAP408_Pr�ctica8.cpp 
// Luis Fernando Gonz�lez Ch�vez

#include <iostream>
#include <locale.h>
#include <string>
#include <limits>

using namespace std;

int main()
{
	// Ajuste de idioma
	setlocale(LC_ALL, "spanish");

	// enum Posici�n {t�tuloPos = 0, a�oPos, autorPos}; << Idea en pausa

	const int cantidadJuegos = 5;

	// Booleano para comprobar que el valor sea v�lido

	bool bFail;

	// Asignaci�n variables posici�n por tipo
	string t�tulo[cantidadJuegos];
	int a�o[cantidadJuegos];
	string autor[cantidadJuegos];

	cout << "Por favor introduce la informaci�n requerida de " << cantidadJuegos << " juegos:" << endl;
	cout << "----------------------------------------------------------------" << endl;

	for (int i = 0; i < cantidadJuegos; i++)
	{
		cout << "Juego en la posici�n [" << i << "]: " << endl;

		cout << "Introduce el nombre del juego: ";
		getline(cin >> ws, t�tulo[i]);

		do {
			cout << "Introduce el a�o en el que sali� este juego: ";
			cin >> a�o[i];

			bFail = cin.fail();

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			if (bFail) std::cout << "Valor inv�lido. Int�ntalo de nuevo." << std::endl;

		} while (bFail);	

		cout << "Introduce el nombre del autor del juego: ";
		getline(cin >> ws, autor[i]);

		cout << "----------------------------------------------------------------" << endl;
	}

	cout << endl;

	for (int j = 0; j < cantidadJuegos; j++)
	{
		cout << "El juego en la posici�n [" << j << "] se llama " << t�tulo[j] << ", sali� en " << a�o[j] << ", y fue creado por " << autor[j] << "." << endl;
	}
}