// ZAP408_Pr�ctica 5
// Luis Fernando Gonz�lez Ch�vez 

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>
#include <climits>
#include <cfloat>
#include <cstdlib> // Para poder abortar la misi�n
#include <windows.h> // Parar poder usar Sleep()
#include "CinCout.h" // Aqu� tengo las funciones con Cin / Cout

#define dbl_endl endl << endl

using namespace std;

void pedirValorCout(string tipoValor)
{
	cout << "Por favor ingrese " << tipoValor << ": ";
}

int main()
{
	setlocale(LC_ALL, "spanish"); // Para poder usar caracteres en espa�ol

	string aprobacion = "Correcto, seguimos con la siguiente pregunta";
	string desaprobacion = "Incorrecto, abortando proceso e iniciando el protocolo \"Mandar a Tlaxcala al espacio\"";
	string laFantasiaDeTodoElMundo = "Damas y caballeros, Tlaxcala es oficialmente el primer pa�s en pisar el Sol sin quemarse. Somos a�n m�s H O T que el Sol mismo.";

	int miEntero;
	float miFloat;
	char miChar;
	double miDouble;
	string miString;

	int enteroCorrecto = 17;
	float floatCorrecto = 1.72f; 
	char charCorrecto = '3';
	double doubleCorrecto = 11;
	string stringCorrecto = "Luis";

	cout << "Buen d�a Ferchus, �En serio quiere lanzar los misiles nucleares? Est� bien se�or presidente de la Rep�blica Comunista de Tlaxcala, pero primero, deber� confirmar que es usted y no un impostor \"among us\" " << dbl_endl;
	
	pedirValorCout("su primer nombre");
	cin >> miString;
	if (miString == stringCorrecto) cout << aprobacion << dbl_endl;
	else
	{
		cout << desaprobacion << dbl_endl;
		Sleep(5000);
		cout << laFantasiaDeTodoElMundo << endl;
		exit(EXIT_FAILURE);
	}

	pedirValorCout("su edad actual en a�os");
	cin >> miEntero;
	if (miEntero == enteroCorrecto) cout << aprobacion << dbl_endl;
	else
	{
		cout << desaprobacion << dbl_endl;
		Sleep(5000);
		cout << laFantasiaDeTodoElMundo << endl;
		exit(EXIT_FAILURE);
	}

	pedirValorCout("su estatura en metros");
	cin >> miFloat;
	if (miFloat == floatCorrecto) cout << aprobacion << dbl_endl;
	else
	{
		cout << desaprobacion << dbl_endl;
		Sleep(5000);
		cout << laFantasiaDeTodoElMundo << endl;
		exit(EXIT_FAILURE);
	}

	pedirValorCout("la calificaci�n del 0 al 10 que le deber�an dar en esta tarea");
	cin >> miDouble;
	if (miDouble == doubleCorrecto) cout << aprobacion << dbl_endl;
	else
	{
		cout << desaprobacion << dbl_endl;
		Sleep(5000);
		cout << laFantasiaDeTodoElMundo << endl;
		exit(EXIT_FAILURE);
	}

	pedirValorCout("el n�mero del peor lugar en el que uno puede quedar dentro de una competencia de rango en un servidor de Discord");
	cin >> miChar;
	if (miChar == charCorrecto) cout << aprobacion << dbl_endl; 
	else
	{
		cout << desaprobacion << dbl_endl;
		Sleep(5000);
		cout << laFantasiaDeTodoElMundo << endl;
		exit(EXIT_FAILURE);
	}

	cout << "Muy bien, iniciando protocolo \"Sue�o Tlaxcalteco\"" << endl;
	Sleep(5000);
	cout << "Se�or, ahora Tlaxcala es lo �nico que queda en esta tierra, felicidades" << endl;

	//escribirCout.coutString(miString); // Creo que no necesita checar errores por ser string
}

