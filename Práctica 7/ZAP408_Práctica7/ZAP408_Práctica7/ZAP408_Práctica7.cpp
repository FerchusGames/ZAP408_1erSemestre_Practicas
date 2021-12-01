#include <iostream>
#include <locale.h>

#define dbl_endl endl << endl

using namespace std;

int main()
{
	// Configurando el idioma

	setlocale(LC_ALL, "spanish");

	// Declarando todas las variables de las preguntas
	
	bool azulItaliano;
	bool azulMujer;
	bool bigote;
	bool carreras;
	bool dinoco;
	bool hippie;
	bool italiano;
	bool jeepEjercito;
	bool masculino;
	bool oxidado;
	bool policía;
	bool retiro;
	bool viejo;

	// Explicando el programa al usuario

	cout << "Trataré de adivinar tu coche dentro del lore de Cars 1" << endl;
	cout << "0 = No. 1 = Sí." << dbl_endl;

	// Ejecución del programa en sí

	cout << "¿Tu coche es masculino? ";
	cin >> masculino;
	if (masculino) 
	{
		cout << endl << "¿Tu coche está muy oxidado? ";
		cin >> oxidado;
		if (oxidado)
		{
			cout << endl << "Tu coche es Mate" << dbl_endl;
		}
		else
		{
			cout << endl << "¿Tu coche es italiano? ";
			cin >> italiano;
			if (italiano)
			{
				cout << endl << "¿Tu coche es azul? ";
				cin >> azulItaliano;
				if (azulItaliano)
				{
					cout << endl << "Tu coche es Guido" << dbl_endl;
				}
				else
				{
					cout << endl << "Tu coche es Luigi" << dbl_endl;
				}
			}
			else 
			{
				cout << endl << "¿Tu coche es de carreras? ";
				cin >> carreras;
				if (carreras)
				{
					cout << endl << "¿Tu coche tiene un bigote? ";
					cin >> bigote;
					if (bigote)
					{
						cout << endl << "Tu coche es Chick Hicks" << dbl_endl;
					}
					else
					{
						cout << endl << "¿Tu coche se retiró de las competencias? ";
						cin >> retiro;
						if (retiro)
						{
							cout << endl << "Tu coche es Doc Hudson" << dbl_endl;
						}
						else
						{
							cout << endl << "¿Tu coche corre para Dinoco? ";
							cin >> dinoco;
							if (dinoco)
							{
								cout << endl << "Tu coche es Strip Weathers" << dbl_endl;
							}
							else
							{
								cout << endl << "Tu coche es el Rayo McQueen" << dbl_endl;
							}
						}
					}
				}
				else
				{
					cout << endl << "¿Tu coche es policía? ";
					cin >> policía;
					if (policía)
					{
						cout << endl << "Tu coche es Sheriff" << dbl_endl;
					}
					else
					{
						cout << endl << "¿Tu coche es hippie? ";
						cin >> hippie;
						if (hippie)
						{
							cout << endl << "Tu coche es Fillmore" << dbl_endl;
						}
						else
						{
							cout << endl << "¿Tu coche es un jeep del ejército? ";
							cin >> jeepEjercito;
							if (jeepEjercito)
							{
								cout << endl << "Tu coche es Sargento" << dbl_endl;
							}
							else
							{
								cout << endl << "Tu coche es Ramón" << dbl_endl;
							}
						}
					}
				}
			}
		}
	}
	else
	{
		cout << endl << "¿Tu coche es azul? ";
		cin >> azulMujer;
		if (azulMujer)
		{
			cout << endl << "Tu coche es Sally" << dbl_endl;
		}
		else
		{
			cout << endl << "¿Tu coche es viejo? ";
			cin >> viejo;
			if (viejo)
			{
				cout << endl << "Tu coche es Lizzie" << dbl_endl;
			}
			else
			{
				cout << endl << "Tu coche es Flo" << dbl_endl;
			}
		}
	}
}