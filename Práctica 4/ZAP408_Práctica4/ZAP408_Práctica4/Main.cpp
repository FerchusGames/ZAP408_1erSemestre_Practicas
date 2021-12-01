// ZAP408_Práctica 4
// Luis Fernando González Chávez

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>
#include <climits>
#include <cfloat>
#include "CinCout.h" // Aquí tengo las funciones con Cin / Cout
//#include "ScanfPrintf.h" // No terminé usando esto porque se me dificultó demasiado 

using namespace std;

int main()
{
	setlocale(LC_ALL, "spanish"); // Para poder usar caracteres en español

	int miEntero;
	float miFloat;
	char miChar;
	double miDouble;
	string miString;
	char miStringChar[256];

	// Guardado e imprersión con Cin / Cout

	EscribirCout escribirCout;
	ErrorCin errorCin;

	cout << "Los siguientes valores los guardaré e imprimiré con Cin / Cout" << dbl_endl;

	pedirValorCout("entero");
	cin >> miEntero;
	errorCin.errorEntero(miEntero);
	cin.clear();
	
	pedirValorCout("float");
	cin >> miFloat;
	errorCin.errorFloat(miFloat);
	cin.clear();

	pedirValorCout("char");
	cin >> miChar;
	errorCin.errorChar(miChar); // No me funcionó con los char

	pedirValorCout("double");
	cin >> miDouble;
	errorCin.errorDouble(miDouble);

	pedirValorCout("string");
	cin >> miString;
	escribirCout.coutString(miString); // Creo que no necesita checar errores por ser string

	// Guardado e impresión con Scanf / Printf 

	// Hoy no supe cómo checar errores con Scanf

	printf("Los siguientes valores los guardaré e imprimiré con Scanf / Printf");

	printf("\n\nPor favor ingresa un entero: ");
	scanf_s("%d", &miEntero);
	printf("Lo que ingresaste fue: %d", miEntero);

	printf("\n\nPor favor ingresa un float: ");
	scanf_s("%f", &miFloat);
	printf("Lo que ingresaste fue: %f", miFloat);

	printf("\n\nPor favor ingresa un char: ");
	scanf_s(" %c", &miChar);
	printf("Lo que ingresaste fue: %c", miChar);

	printf("\n\nPor favor ingresa un string: ");
	scanf_s("%s", miStringChar, _countof(miStringChar)); // Terminé usando un char string porque no supe bien cómo hacerlo con strings de la librería <string>
	printf("Lo que ingresaste fue: %s", miStringChar);
}

