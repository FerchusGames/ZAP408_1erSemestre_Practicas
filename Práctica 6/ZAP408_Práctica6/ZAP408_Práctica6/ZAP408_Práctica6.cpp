#include <iostream>
#include <locale>	
#include <Windows.h>

#define dbl_endl endl << endl

using namespace std;

int main()
{
	setlocale(LC_ALL, "spanish");

	bool seguir = 1;
	int vidaJugador;
	int vidaEnemigo;
	int accionOponente;
	int accionJugador;
	int pokemonSelecionado;

	while (seguir)
	{
		vidaEnemigo = 100;
		vidaJugador = 100;
		cout << "Elige tu Pokemon presionando el número que le corresponde y presionando ENTER" << dbl_endl;
		cout << "1. Cyndaquil (Fuego)" << endl;
		cout << "2. Chikorita (Pasto)" << endl;
		cout << "3. Totodile (Agua)" << endl;
		cout << "4. Magikarp (Bruh)" << dbl_endl;
		cin >> pokemonSelecionado;
		
		switch (pokemonSelecionado)
		{
		case 1:
			cout << "Elegiste a Cyndaquil" << endl;
			cout << "Tu oponente elige a Totodile" << dbl_endl;
			cout << "Si ambos atacan, tú recibirás más daño" << endl;
			cout << "Si ambos defienden, el enemigo recibirá daño" << endl;
			cout << "Si solo tú atacas, el enemigo recibirá un poco menos daño de lo normal" << endl;
			cout << "Si solo tú defiendes, recibirás un poco menos daño de lo normal" << dbl_endl;
			while ((vidaEnemigo > 0) && (vidaJugador > 0))
			{
				cout << "La vida de tu Pokemon es : " << vidaJugador << endl;
				cout << "La vida del Pokemon enemigo es : " << vidaEnemigo << dbl_endl;
				cout << "Presiona 1 para atacar" << endl;
				cout << "Presiona 2 para defender" << dbl_endl;
				accionOponente = rand() % 2 + 1;
				cin >> accionJugador;
				switch (accionJugador)
				{
				case 1:
					cout << "Atacas al enemigo" << endl;
					switch (accionOponente)
					{
					case 1:
						cout << "El enemigo decide atacar" << dbl_endl;
						vidaEnemigo = vidaEnemigo - 20;
						vidaJugador = vidaJugador - 35;
						break;
					case 2:
						cout << "El enemigo decide defender" << dbl_endl;
						vidaEnemigo = vidaEnemigo - 15;
						break;
					}
					break;
				case 2:
					cout << "Te defiendes" << endl;
					switch (accionOponente)
					{
					case 1:
						cout << "El enemigo decide atacar" << dbl_endl;
						vidaJugador = vidaJugador - 30;
						break;
					case 2:
						cout << "El enemigo decide defender" << dbl_endl;
						vidaEnemigo = vidaEnemigo - 15;
						break;
					}
				default:
					cout << "Elige una de las opciones" << dbl_endl;
				}
			}

			if ((vidaEnemigo <= 0) && (vidaJugador > 0)) cout << "Haz ganado" << dbl_endl;

			else if ((vidaEnemigo > 0) && (vidaJugador <= 0)) cout << "Haz perdido" << dbl_endl;

			else if ((vidaEnemigo <= 0) && (vidaJugador <= 0)) cout << "Ha ocurrido un empate" << dbl_endl;

			cout << "Si quieres volver a jugar, presiona 1, si no, presiona 0: ";
			cin >> seguir;
			break;

		case 2:
			cout << "Elegiste a Chikorita" << endl;
			cout << "Tu oponente elige a Cyndaquil" << dbl_endl;
			cout << "Si ambos atacan, tú recibirás más daño" << endl;
			cout << "Si ambos defienden, el enemigo recibirá daño" << endl;
			cout << "Si solo tú atacas, el enemigo recibirá un poco menos daño de lo normal" << endl;
			cout << "Si solo tú defiendes, recibirás un poco menos daño de lo normal" << dbl_endl;
			while ((vidaEnemigo > 0) && (vidaJugador > 0))
			{
				cout << "La vida de tu Pokemon es : " << vidaJugador << endl;
				cout << "La vida del Pokemon enemigo es : " << vidaEnemigo << dbl_endl;
				cout << "Presiona 1 para atacar" << endl;
				cout << "Presiona 2 para defender" << dbl_endl;
				accionOponente = rand() % 2 + 1;
				cin >> accionJugador;
				switch (accionJugador)
				{
				case 1:
					cout << "Atacas al enemigo" << endl;
					switch (accionOponente)
					{
					case 1:
						cout << "El enemigo decide atacar" << dbl_endl;
						vidaEnemigo = vidaEnemigo - 20;
						vidaJugador = vidaJugador - 35;
						break;
					case 2:
						cout << "El enemigo decide defender" << dbl_endl;
						vidaEnemigo = vidaEnemigo - 15;
						break;
					}
					break;
				case 2:
					cout << "Te defiendes" << endl;
					switch (accionOponente)
					{
					case 1:
						cout << "El enemigo decide atacar" << dbl_endl;
						vidaJugador = vidaJugador - 30;
						break;
					case 2:
						cout << "El enemigo decide defender" << dbl_endl;
						vidaEnemigo = vidaEnemigo - 15;
						break;
					}
				default:
					cout << "Elige una de las opciones" << dbl_endl;
				}
			}

			if ((vidaEnemigo <= 0) && (vidaJugador > 0)) cout << "Haz ganado" << dbl_endl;

			else if ((vidaEnemigo > 0) && (vidaJugador <= 0)) cout << "Haz perdido" << dbl_endl;

			else if ((vidaEnemigo <= 0) && (vidaJugador <= 0)) cout << "Ha ocurrido un empate" << dbl_endl;

			cout << "Si quieres volver a jugar, presiona 1, si no, presiona 0: ";
			cin >> seguir;
			break;
		case 3:
			cout << "Elegiste a Totodile" << endl;
			cout << "Tu oponente elige a Chikorita" << dbl_endl;
			cout << "Si ambos atacan, tú recibirás más daño" << endl;
			cout << "Si ambos defienden, el enemigo recibirá daño" << endl;
			cout << "Si solo tú atacas, el enemigo recibirá un poco menos daño de lo normal" << endl;
			cout << "Si solo tú defiendes, recibirás un poco menos daño de lo normal" << dbl_endl;
			while ((vidaEnemigo > 0) && (vidaJugador > 0))
			{
				cout << "La vida de tu Pokemon es : " << vidaJugador << endl;
				cout << "La vida del Pokemon enemigo es : " << vidaEnemigo << dbl_endl;
				cout << "Presiona 1 para atacar" << endl;
				cout << "Presiona 2 para defender" << dbl_endl;
				accionOponente = rand() % 2 + 1;
				cin >> accionJugador;
				switch (accionJugador)
				{
				case 1:
					cout << "Atacas al enemigo" << endl;
					switch (accionOponente)
					{
					case 1:
						cout << "El enemigo decide atacar" << dbl_endl;
						vidaEnemigo = vidaEnemigo - 20;
						vidaJugador = vidaJugador - 35;
						break;
					case 2:
						cout << "El enemigo decide defender" << dbl_endl;
						vidaEnemigo = vidaEnemigo - 15;
						break;
					}
					break;
				case 2:
					cout << "Te defiendes" << endl;
					switch (accionOponente)
					{
					case 1:
						cout << "El enemigo decide atacar" << dbl_endl;
						vidaJugador = vidaJugador - 30;
						break;
					case 2:
						cout << "El enemigo decide defender" << dbl_endl;
						vidaEnemigo = vidaEnemigo - 15;
						break;
					}
				default:
					cout << "Elige una de las opciones" << dbl_endl;
				}
			}

			if ((vidaEnemigo <= 0) && (vidaJugador > 0)) cout << "Haz ganado" << dbl_endl;

			else if ((vidaEnemigo > 0) && (vidaJugador <= 0)) cout << "Haz perdido" << dbl_endl;

			else if ((vidaEnemigo <= 0) && (vidaJugador <= 0)) cout << "Ha ocurrido un empate" << dbl_endl;

			cout << "Si quieres volver a jugar, presiona 1, si no, presiona 0: ";
			cin >> seguir;
			break;
		case 4:
			cout << "Elegiste a Magikarp" << endl;
			cout << "Tu oponente elige un Arceus nivel 99" << dbl_endl;
			cout << "Si ambos atacan, tú recibirás más daño" << endl;
			cout << "Si ambos defienden, el enemigo recibirá daño" << endl;
			cout << "Si solo tú atacas, el enemigo recibirá un poco menos daño de lo normal" << endl;
			cout << "Si solo tú defiendes, recibirás un poco menos daño de lo normal" << dbl_endl;
			while ((vidaEnemigo > 0) && (vidaJugador > 0))
			{
				cout << "La vida de tu Pokemon es : " << vidaJugador << endl;
				cout << "La vida del Pokemon enemigo es : " << vidaEnemigo << dbl_endl;
				cout << "Presiona 1 para atacar" << endl;
				cout << "Presiona 2 para defender" << dbl_endl;
				accionOponente = rand() % 2 + 1;
				cin >> accionJugador;
				switch (accionJugador)
				{
				case 1:
					cout << "Atacas al enemigo" << endl;
					switch (accionOponente)
					{
					case 1:
						cout << "El enemigo decide atacar" << dbl_endl;
						vidaEnemigo = vidaEnemigo - 2;
						vidaJugador = vidaJugador - 99;
						break;
					case 2:
						cout << "El enemigo decide defender" << dbl_endl;
						vidaEnemigo = vidaEnemigo - 1;
						break;
					}
					break;
				case 2:
					cout << "Te defiendes" << endl;
					switch (accionOponente)
					{
					case 1:
						cout << "El enemigo decide atacar" << dbl_endl;
						vidaJugador = vidaJugador - 98;
						break;
					case 2:
						cout << "El enemigo decide defender" << dbl_endl;
						vidaEnemigo = vidaEnemigo - 1;
						break;
					}
				default:
					cout << "Elige una de las opciones" << dbl_endl;
				}
			}

			if ((vidaEnemigo <= 0) && (vidaJugador > 0)) cout << "Haz ganado" << dbl_endl;

			else if ((vidaEnemigo > 0) && (vidaJugador <= 0)) cout << "Haz perdido" << dbl_endl;

			else if ((vidaEnemigo <= 0) && (vidaJugador <= 0)) cout << "Ha ocurrido un empate" << dbl_endl;

			cout << "Si quieres volver a jugar, presiona 1, si no, presiona 0: ";
			cin >> seguir;
			break;
		default:
			cout << "Elige un Pokemon en la lista" << dbl_endl;
		}

	}

	// Contador lento 
	/*int i;

	for (i = 0; i <= 100; i++)
	{
		cout << i << endl;
		Sleep(1000);
	}*/

	// Algoritmo caballos corregido
	/*int caballos = 2500;
	int numeroCarreras = 0;
	int sumaCarreras;
	int ronda = 1;

	while (caballos > 3)
	{
		cout << "Ronda " << ronda << endl << endl;
		
		sumaCarreras = caballos / 5;
		if (sumaCarreras == 0) sumaCarreras = 1;
		numeroCarreras = numeroCarreras + sumaCarreras;
		caballos = caballos - sumaCarreras * 2;
		if (caballos < 3) caballos = 3;
		cout << "Número carreras " << numeroCarreras << endl;
		cout << "Número caballos " << caballos << endl << endl;

		ronda = ronda++;
	}

	cout << "El número de carreras fue: " << numeroCarreras;
	*/

}