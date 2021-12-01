// ZAP408_Pr�ctica 4
// Luis Fernando Gonz�lez Ch�vez

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>
#include <climits>
#include <cfloat>
#include "CinCout.h" // Aqu� tengo las funciones con Cin / Cout
//#include "ScanfPrintf.h" // No termin� usando esto porque se me dificult� demasiado 

using namespace std;

int main()
{
	setlocale(LC_ALL, "spanish"); // Para poder usar caracteres en espa�ol

	int miEntero;
	float miFloat;
	char miChar;
	double miDouble;
	string miString;
	char miStringChar[256];

	// Guardado e imprersi�n con Cin / Cout

	EscribirCout escribirCout;
	ErrorCin errorCin;

	cout << "Los siguientes valores los guardar� e imprimir� con Cin / Cout" << dbl_endl;

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
	errorCin.errorChar(miChar); // No me funcion� con los char

	pedirValorCout("double");
	cin >> miDouble;
	errorCin.errorDouble(miDouble);

	pedirValorCout("string");
	cin >> miString;
	escribirCout.coutString(miString); // Creo que no necesita checar errores por ser string

	// Guardado e impresi�n con Scanf / Printf 

	// Hoy no supe c�mo checar errores con Scanf

	printf("Los siguientes valores los guardar� e imprimir� con Scanf / Printf");

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
	scanf_s("%s", miStringChar, _countof(miStringChar)); // Termin� usando un char string porque no supe bien c�mo hacerlo con strings de la librer�a <string>
	printf("Lo que ingresaste fue: %s", miStringChar);
}

