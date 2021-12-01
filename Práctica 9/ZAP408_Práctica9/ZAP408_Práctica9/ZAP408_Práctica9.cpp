// ZAP408_Práctica9
//Luis Fernando González Chávez

#include <iostream>
#include <locale.h>
#include <limits> // Permitirá validar los valores
#include <iomanip> // Para que los números estén alineados
#include <vector> // Nos permite hacer arreglos dinámicos

int main()
{
	setlocale(LC_ALL, "spanish");

	// Declarando matrices

	const int x = 3;
	const int y = 2;

	int matriz1[x][y];

	// Boleano para comprobar que el valor sea válido

	bool bFail;

	// Controladores bucles anhidados

	int i = 0;
	int j = 0;

	// Inicio de interacción con el usuario

	std::cout << "En este programa llenarás dos matrices, una predefinida de 3x2 y una a la que tú le daras el tamaño." << std::endl << std::endl;

	// Bucle obtener valores matriz1
	std::cout << "Empieza llenando la matriz de 3x2" << std::endl << std::endl;

	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			do {
				std::cout << "Ingresa el valor en la posición [" << i << "][" << j << "]: ";
				std::cin >> matriz1[i][j];

				bFail = std::cin.fail(); // Proceso de validación de entero

				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

				if (bFail) std::cout << "Valor inválido. Inténtalo de nuevo." << std::endl;

			} while (bFail);
			std::cout << std::endl;
		}
	}

	// Bucle mostrar matriz1

	std::cout << "La matriz resultante es: " << std::endl << std::endl;

	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			std::cout << std::right << std::setw(15) << matriz1[i][j];
		}
		std::cout << std::endl << std::endl;
	}

	// Obtener N y M

	int n;
	int m;

	std::cout << "Ahora pasaremos a la matriz personalizada." << std::endl;

	do {
		std::cout << "Ingresa el número de filas: ";
		std::cin >> n;

		bFail = std::cin.fail();

		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		if (bFail) std::cout << "Valor inválido. Inténtalo de nuevo." << std::endl;

	} while (bFail);

	do {
		std::cout << "Ingresa el número de columnas: ";
		std::cin >> m;

		bFail = std::cin.fail();

		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		if (bFail) std::cout << "Valor inválido. Inténtalo de nuevo." << std::endl;

	} while (bFail);
	std::cout << std::endl;

	// Obteniendo valores matriz2 

		// Declarando como vector

	/*
	std::vector<std::vector<int>> matriz2(n, std::vector<int>(m, 0)); // Es importante definir el tamaño del vector, pues si no lo haces, te puede dar el error "vector subscript out of range"
	*/

		// Declarando con punteros

	int** matriz2 = new int* [n];
	for (int i = 0; i < n; i++)
	{
		matriz2[i] = new int[m];
	}

	std::cout << "Ahora le asignaré valores random a la matriz que elegiste" << std::endl;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			matriz2[i][j] = rand() % 100;
		}
	}

	// Bucle mostrar matriz2

	std::cout << "La matriz resultante es: " << std::endl << std::endl;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			std::cout << std::right << std::setw(5) << matriz2[i][j];
		}
		std::cout << std::endl << std::endl;
	}
}