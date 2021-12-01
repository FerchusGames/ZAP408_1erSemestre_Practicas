// ZAP408_Práctica 5
// Luis Fernando González Chávez 

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>
#include <climits>
#include <cfloat>
#include <cstdlib> // Para poder abortar la misión
#include <windows.h> // Parar poder usar Sleep()
#include "CinCout.h" // Aquí tengo las funciones con Cin / Cout

#define dbl_endl endl << endl

using namespace std;

void pedirValorCout(string tipoValor)
{
	cout << "Por favor ingrese " << tipoValor << ": ";
}

int main()
{
	setlocale(LC_ALL, "spanish"); // Para poder usar caracteres en español

	string aprobacion = "Correcto, seguimos con la siguiente pregunta";
	string desaprobacion = "Incorrecto, abortando proceso e iniciando el protocolo \"Mandar a Tlaxcala al espacio\"";
	string laFantasiaDeTodoElMundo = "Damas y caballeros, Tlaxcala es oficialmente el primer país en pisar el Sol sin quemarse. Somos aún más H O T que el Sol mismo.";

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

	cout << "Buen día Ferchus, ¿En serio quiere lanzar los misiles nucleares? Está bien señor presidente de la República Comunista de Tlaxcala, pero primero, deberá confirmar que es usted y no un impostor \"among us\" " << dbl_endl;
	
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

	pedirValorCout("su edad actual en años");
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

	pedirValorCout("la calificación del 0 al 10 que le deberían dar en esta tarea");
	cin >> miDouble;
	if (miDouble == doubleCorrecto) cout << aprobacion << dbl_endl;
	else
	{
		cout << desaprobacion << dbl_endl;
		Sleep(5000);
		cout << laFantasiaDeTodoElMundo << endl;
		exit(EXIT_FAILURE);
	}

	pedirValorCout("el número del peor lugar en el que uno puede quedar dentro de una competencia de rango en un servidor de Discord");
	cin >> miChar;
	if (miChar == charCorrecto) cout << aprobacion << dbl_endl; 
	else
	{
		cout << desaprobacion << dbl_endl;
		Sleep(5000);
		cout << laFantasiaDeTodoElMundo << endl;
		exit(EXIT_FAILURE);
	}

	cout << "Muy bien, iniciando protocolo \"Sueño Tlaxcalteco\"" << endl;
	Sleep(5000);
	cout << "Señor, ahora Tlaxcala es lo único que queda en esta tierra, felicidades" << endl;

	//escribirCout.coutString(miString); // Creo que no necesita checar errores por ser string
}

