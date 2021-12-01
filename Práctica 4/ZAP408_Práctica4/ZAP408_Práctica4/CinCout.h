#pragma once

using namespace std;

#define dbl_endl endl << endl // Para una mejor lectura de consola

void pedirValorCout(string tipoValor)
{
	cout << "Por favor ingresa un " << tipoValor << ":";
}


class EscribirCout
{
private:
	string stringMostrar = "Lo que ingresaste fue: ";
public:
	void coutEntero(int in_Entero)
	{
		cout << stringMostrar << in_Entero << dbl_endl;
	}
	void coutFloat(float in_Float)
	{
		cout << stringMostrar << in_Float << dbl_endl;
	}
	void coutChar(char in_Char)
	{
		cout << stringMostrar << in_Char << dbl_endl;
	}
	void coutDouble(double in_Double)
	{
		cout << stringMostrar << in_Double << dbl_endl;
	}
	void coutString(string in_String)
	{
		cout << stringMostrar << in_String << dbl_endl;
	}
};

EscribirCout escribirCout;

class ErrorCin
{
private:
	string valorInvalido = "Valor inválido. Intenta de nuevo:";
public:
	void errorEntero(int in_Entero)
	{
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << valorInvalido;
			cin >> in_Entero;
		}
		escribirCout.coutEntero(in_Entero);

	}
	void errorFloat(float in_Float)
	{
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(FLT_MAX, '\n');
			cout << valorInvalido;
			cin >> in_Float;
		}
		escribirCout.coutFloat(in_Float);
	}
	void errorChar(char in_Char)
	{
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(CHAR_MAX, '\n');
			cout << valorInvalido;
			cin >> in_Char;
		}
		escribirCout.coutChar(in_Char);
	}
	void errorDouble(double in_Double)
	{
		while (cin.fail()) 
		{
			cin.clear();
			cin.ignore(DBL_MAX, '\n');
			cout << valorInvalido;
			cin >> in_Double;
		}
		escribirCout.coutDouble(in_Double);
	}
};